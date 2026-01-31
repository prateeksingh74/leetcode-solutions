#!/bin/bash

if [ -z "$1" ] || [ -z "$2" ]; then
    echo "Usage: newpy <difficulty> <filename.py>"
    echo "Example: newpy easy 1-two-sum.py"
    exit 1
fi

DIFFICULTY="$1"
FILENAME="$2"

# Resolve the full path to this script (in utils/)
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_DIR="$(dirname "$SCRIPT_DIR")"

TEMPLATE="$SCRIPT_DIR/template.py"
TARGET="$REPO_DIR/$DIFFICULTY/$FILENAME"

# Check that the difficulty folder exists
if [ ! -d "$REPO_DIR/$DIFFICULTY" ]; then
    echo "Error: directory '$DIFFICULTY' does not exist in $REPO_DIR"
    exit 1
fi

# Don't overwrite existing files
if [ -f "$TARGET" ]; then
    echo "Error: $TARGET already exists"
    exit 1
fi

cp "$TEMPLATE" "$TARGET"
echo "Created $TARGET from template."
