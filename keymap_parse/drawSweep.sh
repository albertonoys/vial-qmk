#!/usr/bin/env bash

# Function to generate SVG
generate_keyboard_svg() {
    local layout_name="$1"

    # Extract directory and create output path with .svg extension
    local kb_path=$(dirname "../keyboards/ferris/sweep/keymaps")
    local output_file="${kb_path}/${layout_name}.svg"

    # Generate JSON, modify it, parse it, and create SVG
    qmk c2json -kb ferris/sweep -km "$layout_name" |
    jq --arg layout "LAYOUT_split_3x5_2" '.layout = $layout' |
    keymap -c keymap_conf.yaml parse -q - --layer-names Base Sym Nav |
    keymap -c keymap_conf.yaml draw - > "$output_file"

    echo "SVG generated: $output_file"
}

# Main script
if [ $# -ne 1 ]; then
    echo "Usage: $0 <layout_name>"
    exit 1
fi

generate_keyboard_svg "$1"
