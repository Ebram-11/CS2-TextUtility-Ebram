Hello Everyone,
This is a program and a library built to manipulate c-style string, we have multiple functions as follows:

int wordCount(const char* str); --> this function gives you the number of words in a string.

int characterCount(const char* str); --> gives you the number of characters, however it also counts the number of spaces.

void vowelConsonantCount(const char* str, int& vowels, int& consonants); --> gives you the number of vowels and the number of consonants.

void reverseString(char* str); --> reverses the string stored in the array of the c string.

bool isPalindrome(const char* str); --> checks if the string inputed by the user is a palindrome, which is a string that stays the same if reversed.

void toUpperCase(char* str); --> this function manipulates the string to change every character to uppercase.

void toLowerCase(char* str); --> this function manipulates the string to change every character to lowercase.

int substringOccurrence(const char* str, const char* substr); --> this function returns the number of occurrences of a substring.

int specialCharacterCount(const char* str); --> this function returns the number of special characters in the string.

The program will prompt you to enter a string it will take this string and apply the above functions automatically, and print their functionality, and then will prompt you to enter a substring and check the number of occurences of this substring which is one of the functionalities above, and then will automatically print the number of special chracters in your string.