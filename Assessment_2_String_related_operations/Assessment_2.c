// Application that Perform all String Related Operations

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str);
void concatenateStrings(char *str1, char *str2);
int isPalindrome(char *str);
void copyString(char *source, char *destination);
int stringLength(char *str);
void characterFrequency(char *str);
void countVowelsAndConsonants(char *str);
void countDigitsAndSpaces(char *str);

int main() {
    char inputString[100];
    int choice;
    char another = 'y';

    do {
        printf("\nString Operations Menu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate strings\n");
        printf("3. Check for Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of characters\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count digits and blank spaces\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        printf("Enter a string: ");
        fgets(inputString, sizeof(inputString), stdin);
        inputString[strcspn(inputString, "\n")] = '\0';
        
        switch (choice) {
            case 1:
                reverseString(inputString);
                break;
            case 2: {
                char secondString[100];
                printf("Enter another string to concatenate: ");
                fgets(secondString, sizeof(secondString), stdin);
                secondString[strcspn(secondString, "\n")] = '\0';
                concatenateStrings(inputString, secondString);
                break;
            }
            case 3:
                if (isPalindrome(inputString))
                    printf("The string is a palindrome.\n");
                else
                    printf("The string is not a palindrome.\n");
                break;
            case 4: {
                char copiedString[100];
                copyString(inputString, copiedString);
                printf("Copied string: %s\n", copiedString);
                break;
            }
            case 5:
                printf("Length of the string: %d\n", stringLength(inputString));
                break;
            case 6:
                characterFrequency(inputString);
                break;
            case 7:
                countVowelsAndConsonants(inputString);
                break;
            case 8:
                countDigitsAndSpaces(inputString);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &another);
    } while (tolower(another) == 'y');

    printf("Thank you for using the string operations program.\n");

    return 0;
}

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to concatenate two strings
void concatenateStrings(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to check if a string is palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1])
            return 0;
    }
    return 1;
}

// Function to copy a string
void copyString(char *source, char *destination) {
    strcpy(destination, source);
}

// Function to find the length of a string
int stringLength(char *str) {
    return strlen(str);
}

// Function to find frequency of characters in a string
void characterFrequency(char *str) {
    int count[256] = {0};
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        count[(int)str[i]]++;
    }
    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0 && isprint(i)) {
            printf("%c : %d\n", (char)i, count[i]);
        }
    }
}

// Function to count vowels and consonants
void countVowelsAndConsonants(char *str) {
    int vowels = 0, consonants = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to count digits and blank spaces
void countDigitsAndSpaces(char *str) {
    int digits = 0, spaces = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (isdigit(str[i]))
            digits++;
        else if (isspace(str[i]))
            spaces++;
    }
    printf("Number of digits: %d\n", digits);
    printf("Number of blank spaces: %d\n", spaces);
}
