#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: ./utils/newc.sh <relative/path/to/filename.c>"
    exit 1
fi

# Resolve the full path to this script (in utils/)
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# Use template.c from the script's directory
TEMPLATE="$SCRIPT_DIR/template.c"

# Copy template to the target file path
cp "$TEMPLATE" "$1"
echo "Created $1 from template."

