#!/usr/bin/env bash

# ==============================================================================
# Generate 16:9 Wallpaper Script
# ==============================================================================
#
# Description:
#   Converts an input image (default: layout.png) into a 16:9 aspect ratio
#   wallpaper (default: layout_wp.png).
#   It trims any uniform border, centers the content, and expands the canvas
#   using a specified background color.
#
# Requirements:
#   - ImageMagick (provides the 'magick' command)
#
# NixOS Usage:
#   Ensure 'imagemagick' is included in your system packages, home-manager
#   packages, or use nix-shell/nix develop:
#   nix-shell -p imagemagick --run ./generate_wallpaper.sh
#   OR add 'imagemagick' to a flake.nix devShell.
#
# ==============================================================================

set -e # Exit immediately if a command exits with a non-zero status.

# --- Configuration ---
INPUT_FILE="layout.png"
OUTPUT_FILE="layout_wp.png"
BACKGROUND_COLOR="#282828"
# --- End Configuration ---

# --- Pre-flight Checks ---
# Check if magick command exists
if ! command -v magick &> /dev/null; then
    echo "Error: 'magick' command not found." >&2
    echo "Please install ImageMagick." >&2
    echo "On NixOS: add 'imagemagick' to your environment or use 'nix-shell -p imagemagick'." >&2
    exit 1
fi

# Check if input file exists
if [ ! -f "$INPUT_FILE" ]; then
    echo "Error: Input file '$INPUT_FILE' not found in the current directory ($(pwd))." >&2
    exit 1
fi

# --- Main Logic ---
echo "Starting wallpaper generation..."
echo "  Input file:      $INPUT_FILE"
echo "  Output file:     $OUTPUT_FILE"
echo "  Background:      $BACKGROUND_COLOR"

# Execute ImageMagick command
magick "$INPUT_FILE" \
    -trim \
    -background "$BACKGROUND_COLOR" \
    -gravity center \
    -extent '%[fx:w>h*16/9?w:h*16/9]x%[fx:h>w*9/16?h:w*9/16]' \
    "$OUTPUT_FILE"

# --- Completion ---
if [ $? -eq 0 ]; then
    echo "Successfully generated '$OUTPUT_FILE'."
else
    # set -e should have already caught this, but good practice
    echo "Error occurred during ImageMagick processing." >&2
    exit 1
fi

exit 0
