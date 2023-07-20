#include <stdio.h>
#include <string.h>

void compareOutput(unsigned int number, const char* expectedOutput);

int main() {
    unsigned int testCases[] = {
        0, 1, 9, 42, 99, 123, 456, 789, 1000, 1234,
        5678, 9999, 12345, 67890, 123456, 789012, 1234567, 8765432, 12345678, 4294967295
    };
    
    const char* expectedOutputs[] = {
        "zero", "one", "nine", "forty-two", "ninety-nine", "one hundred twenty-three",
        "four hundred fifty-six", "seven hundred eighty-nine", "one thousand", "one thousand two hundred thirty-four",
        "five thousand six hundred seventy-eight", "nine thousand nine hundred ninety-nine", "twelve thousand three hundred forty-five",
        "sixty-seven thousand eight hundred ninety", "one hundred twenty-three thousand four hundred fifty-six",
        "seven hundred eighty-nine thousand twelve", "one million two hundred thirty-four thousand five hundred sixty-seven",
        "eight million seven hundred sixty-five thousand four hundred thirty-two", "twelve million three hundred forty-five thousand six hundred seventy-eight",
        "four billion two hundred ninety-four million nine hundred sixty-seven thousand two hundred ninety-five"
    };
    
    for (int i = 0; i < sizeof(testCases) / sizeof(unsigned int); i++) {
        compareOutput(testCases[i], expectedOutputs[i]);
    }

    return 0;
}

void compareOutput(unsigned int number, const char* expectedOutput) {
    char command[100];
    char output[100];

    snprintf(command, sizeof(command), "./rush-02 %u | cat -e", number);

    FILE* pipe = popen(command, "r");
    if (pipe == NULL) {
        printf("Error executing command.\n");
        return;
    }

    if (fgets(output, sizeof(output), pipe) != NULL) {
        output[strcspn(output, "\n")] = '\0';
        if (strcmp(output, expectedOutput) == 0) {
            printf("Test case: %u - Passed\n", number);
        } else {
            printf("Test case: %u - Failed (Expected: '%s', Actual: '%s')\n", number, expectedOutput, output);
        }
    } else {
        printf("Error reading output.\n");
    }

    pclose(pipe);
}
