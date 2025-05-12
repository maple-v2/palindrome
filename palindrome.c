#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81 
/*helping function to check if the char array (the text input) is palindrome */
int palindrome(char str[]);
/*helping function to remove the spaces and taps from the string*/
void removeSpaces(char str[]);
/*The program gets atext (which doesnt have more then 80 character) and returns 1 if the text is palindrome after exluding the spaces and taps in the text and return 0 if the text isnt palindrome */
int main()
{
char str[LEN];
printf("please enter a text:");
fgets(str, sizeof(str), stdin);
printf("The text you enterd  is: %s\n",str);
removeSpaces(str);

if (palindrome(str)==1)
printf("The function returned %d ,that mean the given text is palindrome\n", palindrome(str));
else
printf("The function returned %d ,that mean the given text is not palindrome\n", palindrome(str));

 return 0;
}
int palindrome(char str[]) {
  int left = 0; /*pointer for the first char in the string*/
  int right =strlen(str) - 1;
 /*  pointer to the last char in given string and the -1
                          to ignore \0 (end of the string)*/

  while (left < right) {
  
    if (str[left] != str[right]) /*check if not palindrome*/
    {
      return 0; /*return 0 if the string is palindrome*/
    }
    left++;  /*increment for the left value until it meet with the right pointer*/
    right--; /*decrement for the left value until it meet with the left pointer*/
  }
  return 1; /*return 1 if the string is palindrome*/

}

void removeSpaces(char str[]) {
    int i, j = 0;
/*creates anew string without spaces*/
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0'; /* ending the new string*/
}

