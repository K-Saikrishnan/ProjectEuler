#!/bin/bash

directory="python"
output_file="answers.out"

cat /dev/null >"$output_file"

count=0

find "$directory"/*.py | while read -r file; do
  file_name=#$(basename "$file" .py)

  first_line=$(head -n 1 "$file" | sed 's/# //g')

  output=$(python3 "$file" 2>&1)

  printf "%-3s %-40s -> %s\n" "$file_name" "$first_line" "$output" >>"$output_file"

  ((count++))

  if [ "$count" -eq 10 ]; then
    echo >>"$output_file"
    count=0
  fi
done
