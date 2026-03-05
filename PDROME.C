/*
	Name: PDROME.C
	
	Copyright: (C) 2026 E. Gaiworonski
	This program is free software: you can redistribute it and/or modify
 	it under the terms of the GNU General Public License as published 
	by the Free Software Foundation, either version 3 of the License, 
	or (at your option) any later version.
 
  	This program is distributed in the hope that it will be useful* 
	but WITHOUT ANY WARRANTY; without even the implied warranty 
	of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
	See the GNU General Public License for more details.
  	You should have received a copy of the GNU General Public License
 	along with this program.  If not, see <https://www.gnu.org/licenses/>.
 
	Author: E. Gaiworonski
	Date: 05.03.26 08:29
	Description: Palindrome checking via recursion

	Explanation of the recursive approach:

	Base case: When the left pointer is greater than or equal 
	to the right pointer, the recursion terminates.

	Recursive step:
	Skip non-alphabetic characters on both sides
	Compare the current characters
	If they match, recursively check the remaining internal part of the string.

	Advantages of the recursive approach:
	More intuitive understanding of the problem (the string is a palindrome 
	if the outermost characters match, and the internal part is also a palindrome)
	Clean implementation of logic
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to check palindrome
int isPalindromeRecursive(char str[], int left, int right) {

    // Base case: if the pointers meet or intersect
    if (left >= right) {
        return 1; // The string is a palindrome
    }
    
    // Skip non-alphabetic characters on the left
    while (left < right && !isalnum(str[left])) {
        left++;
    }
    
    // Skip non-alphabetic characters on the right
    while (left < right && !isalnum(str[right])) {
        right--;
    }
    
    // If the characters don't match (case sensitive), it's not a palindrome.
    if (tolower(str[left]) != tolower(str[right])) {
        return 0; // Not a palindrome
    }
    
    // Recursive call for the rest of the string
    return isPalindromeRecursive(str, left + 1, right - 1);
}

// An auxiliary function for convenient calling
int isPalindrome(char str[]) {
    int len = strlen(str);
    return isPalindromeRecursive(str, 0, len - 1);
}

int main() {
    char str[1000];
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if there is one.
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
    
    // Checking if a string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
