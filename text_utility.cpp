
#include "Text_Utility.h"


int wordCount(const char* str) {
    if (!str) return 0;
    int count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\f') { // this condition checks for spaces if we found a space that means we exited the word and we are about to enter a new word 
            inWord = false;
        } else if (!inWord) { /* so this else if codition means that if we are not in a word which is 
                                the iteration we encounter a space then increase the counter and declare the FLAG that we are in a word*/
            inWord = true;
            count++;
        }
    }
    return count;
}

int characterCount(const char* str) {
    if (!str) return 0;
    int count = 0;
    while (str[count] != '\0') { // just increases the counter until it finds a null teminator
        count++;
    }
    return count;
}

void vowelConsonantCount(const char* str, int& vowels, int& consonants) {
    vowels = consonants = 0;
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { /* the point of this if statement is to make the stored char inside lower lower-case
                                                                        so that we don't have to create another if statement checking vowels for capital letters*/
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }
}

void reverseString(char* str) {
    if (!str) return;
    int len = characterCount(str); // takes the length of the c string
    for (int i = 0; i < len / 2; i++) {                 
        char temp = str[i];
        str[i] = str[len - 1 - i];  // implementation for swapping the characters inside the char array
        str[len - 1 - i] = temp;
    }
}

bool isPalindrome(const char* str) {
    if (!str) return false;

    int len = characterCount(str);

    char copy[1000]; // Assuming max string length is 999
    int i = 0;
    while (i < len && i < 999) {
        copy[i] = str[i]; // takes a copy of the string 
        i++;
    }
    copy[i] = '\0';

    reverseString(copy); // uses the reverse function to reverse the string

    for (int j = 0; j < len; j++) {
        char orig = (str[j] >= 'A' && str[j] <= 'Z') ? str[j] + 32 : str[j];
        char revd = (copy[j] >= 'A' && copy[j] <= 'Z') ? copy[j] + 32 : copy[j]; 

        if (orig != revd) {
            return false;
        }
    }
    return true;
}


void toUpperCase(char* str) {
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

void toLowerCase(char* str) {
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

int substringOccurrence(const char* str, const char* substr) {
    if (!str || !substr || substr[0] == '\0') return 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int j = 0;
        while (substr[j] != '\0' && str[i + j] == substr[j]) {
            j++;
        }
        if (substr[j] == '\0') {
            count++;
        }
    }
    return count;
}
