#!/usr/bin/env bash

# Function to generate SVG
generate_keyboard_svg() {
    local keymap_file="$1"
    local layout_name="$2"

    # Extract directory and create output path with .svg extension
    local dir_path=$(dirname "$keymap_file")
    local output_file="${dir_path}/${layout_name}.svg"

    # Generate JSON, modify it, parse it, and create SVG
    qmk c2json "$keymap_file" |
#    jq --arg layout "LAYOUT_split_3x5_2" '.layout = $layout' |
    keymap -c keymap_conf.yaml parse -q - --layer-names Base Sym Nav |
    keymap -c keymap_conf.yaml draw - > "$output_file"

    echo "SVG generated: $output_file"
}

# Main script
if [ $# -ne 2 ]; then
    echo "Usage: $0 <keymap_file.c> <layout_name>"
    exit 1
fi

generate_keyboard_svg "$1" "$2"
