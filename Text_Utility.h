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

int wordcount(char arr[]);
int vcount(char arr[]);
int ccount(char arr[]);
void reverse(char arr[]);
bool Ispalindrome(char arr[]);
void Upper(char arr[]);
void Lower(char arr[]);
int Substring(char arr[]);