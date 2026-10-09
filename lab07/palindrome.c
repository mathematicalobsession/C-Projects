/* 
Name: Stella Wilcox
University of Illinois at Chicago 
C/C++ Programming (CS107)
Resource: ZyBooks
Prompt:
A palindrome is a word or a phrase that is the same when read both forward and backward. Examples are: "bob," "sees," or "never odd or even" (ignoring spaces). Write a program whose input is a word or phrase, and that outputs whether the input is a palindrome. You may assume that the input string will not exceed 50 characters.
Ex: If the input is bob, the output is:
palindrome: bob
Ex: If the input is bobby, the output is:
not a palindrome: bobby
Hint: Start by just handling single-word input, and submit for grading. Once passing single-word test cases, extend the program to handle phrases. If the input is a phrase, remove or ignore spaces.
*/

#include <stdio.h> 
#include <string.h> // Lets strlen() be usable to count characters 

int main(void) {
   //make a row of 52 spaces in memory to store characters 
   // we need room for 52 spots because this contains a starting point and an ending point 
   char word[52];

   // "start" and "end" are going to store POSITION NUMBERS IN THE ARRAY NOT LETTERS
   int start = 0;
   int end;

   // this is going to hold the number or characters in the input.
   int length;

   // this variable will remmeber the answer 
   // 1 means "its a palindrom YES/ON/CLOSED"
   // 0 means "It not a palindrome NO/OFF/OPEN"

   int is_palindrome = 1;

// read what the user types and store it in word 
//fgets reads spaces too, so it can read an entire pphrase 
// sizeof(word) tells fgets how much room the word has 
//stdin standard input so its reading in from typing 
fgets(word, sizeof(word), stdin);

//count the stored characters 
// for explaining racecar has 7 letters 
// if fgets also aved enter, that counts as one extra character 
length = strlen(word);

// Check whether the last stored character is ENTER 
// '\n\ means newline, which comes from pressing the enter key 
// && measn both conditions hav to be true 
if (length > 0 && word[length -1] =='\n') {
   // replace enter with the marker that means "the string ends here."
   // '\0' is the null terminator it tells it to stop? 
   word[length - 1] = '\0';

   //we removed one character, so reduce the count by 1 
   length = length -1;
}

// find the position of the last letter 
// "racecar" has 5 letters at positions 0,1,2,3,4
// that is why we subtract 1 from length 
end = length -1; 

// repeat the code inside these braces while start is less than end.
// when the two positons meet or cross its finished 
while (start < end) {
   if(word[start] == ' ') {
      start = start +1;
   }
   // itherwuse check the character at the other end 
   // if its a space, skip it by moving one position left 
   else if (word[end] == ' ') {
      end = end -1;
   }

   else if (word[start] !=word[end]){
      //the letters are different so the answer is no 
      is_palindrome = 0;
      //leave the loop
      break;
   }
   // if the code is here it means the two letters are a match
   else{ 
      //move the left postion one place to the right 
      start = start+1;
      // move the right position one place to the left 
      end = end-1; 
   }
}
   // check the answer that was saved 
   if (is_palindrome ==1){
      // %s is replaced by the text stored in word 
      // \n moves the output curser to the next line? 
      printf("palindrome: %s\n", word);
   }
   else {
      printf("not a palindrome: %s\n", word);
   }



   return 0;
}
