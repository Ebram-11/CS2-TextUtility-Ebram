#include <iostream>
#include <cstring>
#include "text_utility.h"

int main() {
    char text[1000];
    std::cout << "Enter a string: ";
    std::cin.getline(text, 1000);

    std::cout << "\n--- Analysis ---\n";
    std::cout << "Word count: " << wordCount(text) << "\n";
    std::cout << "Character count: " << characterCount(text) << "\n";

    int vowels, consonants;
    vowelConsonantCount(text, vowels, consonants);
    std::cout << "Vowels: " << vowels << ", Consonants: " << consonants << "\n";

    char reversed[1000];
    std::strcpy(reversed, text);
    reverseString(reversed);
    std::cout << "Reversed: " << reversed << "\n";

    std::cout << "Is palindrome? " << (isPalindrome(text) ? "Yes" : "No") << "\n";

    char upper[1000];
    std::strcpy(upper, text);
    toUpperCase(upper);
    std::cout << "Uppercase: " << upper << "\n";

    char lower[1000];
    std::strcpy(lower, text);
    toLowerCase(lower);
    std::cout << "Lowercase: " << lower << "\n";

    char substring[100];
    std::cout << "Enter a substring to search for: ";
    std::cin.getline(substring, 100);
    std::cout << "Occurrences of '" << substring << "': " << substringOccurrence(text, substring) << "\n";
    int n = specialCharacterCount(text);
    std::cout << "Occurrences of special characters: " << "'" << n <<"'" << "\n";
    return 0;
}
