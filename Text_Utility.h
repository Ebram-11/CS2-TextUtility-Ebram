/*ext_utility.h: Declare functions for:
- Word Count

Dept. of Computer Science
Summer 2025

The American University in Cairo
School of Sciences and Eng.

- Character Count (excluding '\0')
- Vowel and Consonant Count
- String Reversal (in-place)
- Palindrome Check
- Case Conversion to Uppercase (in-place)
- Case Conversion to Lowercase (in-place)
- Substring Occurrence Count*/

int wordCount(const char* str);
int characterCount(const char* str);
void vowelConsonantCount(const char* str, int& vowels, int& consonants);
void reverseString(char* str);
bool isPalindrome(const char* str);
void toUpperCase(char* str);
void toLowerCase(char* str);
int substringOccurrence(const char* str, const char* substr);
int specialCharacterCount(const char* str);
