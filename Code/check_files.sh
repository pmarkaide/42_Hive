#!/bin/bash

# Function to check norminette output for each C file
check_norminette() {
    file="$1"
    filename="$(basename "$file")"
    norminette_output=$(norminette -R CheckForbiddenSourceHeader "$file" 2>&1)
    if [[ $norminette_output == *"Error"* ]]; then
        echo -e "\033[0;30mNorminette \033[1;31mError\033[0m"
    else
        echo -e "\033[0;30mNorminette \033[1;32mOK\033[0m"
    fi
}

# Function to check compilation using gcc
check_gcc_compilation() {
    file="$1"
    filename="$(basename "$file")"
    gcc_output=$(gcc -Wall -Wextra -Werror "$file" -o /dev/null 2>&1)
    main_error=$(echo "$gcc_output" | grep "_main")
    if [[ -z "$gcc_output" ]]; then
        echo -e "\033[0;30mCompilation \033[1;32mOK\033[0m"
    elif [[ -n "$main_error" ]]; then
        echo -e "\033[0;30mCompilation \033[1;32mOK\033[0m"
    else
        echo -e "\033[0;30mCompilation \033[1;31mError\033[0m"
        echo "$gcc_output"
    fi
}

# Main script
find * -type d -name "ex*" | while IFS= read -r dir; do
    cd "$dir" || continue
    for file in ft_*.c; do
        echo -e "\033[1m$dir/$file\033[0m"
        check_norminette "$file"
        check_gcc_compilation "$file"
    done
    cd - >/dev/null || exit 1
done