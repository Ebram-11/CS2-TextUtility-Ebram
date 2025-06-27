#include <iostream>
#include "Text_Utility.h"

int main() {
    char text1[] = "Hello World! This is a C++ test.";
    char text2[] = "Madam";
    char text3[] = "This is a test. This is only a test.";

    std::cout << "Original text: " << text1 << "\n";
    std::cout << "Word count: " << wordCount(text1) << "\n";
    std::cout << "Character count: " << characterCount(text1) << "\n";

    int vowels, consonants;
    vowelConsonantCount(text1, vowels, consonants);
    std::cout << "Vowels: " << vowels << ", Consonants: " << consonants << "\n";

    reverseString(text1);
    std::cout << "Reversed text: " << text1 << "\n";

    std::cout << "Is 'Madam' a palindrome? " << (isPalindrome(text2) ? "Yes" : "No") << "\n";

    toUpperCase(text2);
    std::cout << "Uppercase: " << text2 << "\n";

    toLowerCase(text2);
    std::cout << "Lowercase: " << text2 << "\n";

    const char* search = "test";
    std::cout << "Occurrences of '" << search << "' in text3: " << substringOccurrence(text3, search) << "\n";

    return 0;
} 
