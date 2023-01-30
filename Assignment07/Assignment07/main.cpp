//
//  main.cpp
//  Assignment07
//
//  Created by Yuki Ogawa on 7/2/21.
//

#include <iostream>
#include <string.h>
bool isPalindrome(char * word);
void printLatinWord(char * word);

#define SIZE 5

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Exercise 01
    char word[] = "abcdcba";
    if (isPalindrome(word))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    // Exercise 02
    char sentence[] = "Take me out to the ball game";
    char * strToken = strtok(sentence , " ");
    while (strToken != NULL)
    {
        printLatinWord(strToken);
        strToken = strtok(NULL," ");
    }
    printf("\n");
    
    
    
    // Exercise 03
    
    // Save input in array
    char arr3 [SIZE][20];
    for (int i = 0; i < SIZE; i++)
    {
        char temp[20];
        printf("Enter string: ");
        scanf("%s", temp);
        strcpy(arr3[i], temp);
    }
    
    // Check
    for (int i = 0; i < SIZE; i++)
    {
        if (arr3[i][0] == 'T' && arr3[i][1] == 'h')
        {
            printf("%s\n", arr3[i]);
        }
    }
    
    
    
    // Exercise 04
    
    // Save input in array
    char arr4 [SIZE][20];
    for (int i = 0; i < SIZE; i++)
    {
        char temp[20];
        printf("Enter string: ");
        scanf("%s", temp);
        strcpy(arr4[i], temp);
    }
    
    // Check
    for (int i = 0; i < SIZE; i++)
    {
        int len = strlen(arr4[i]);
        
        if (strcmp(arr4[i] + (len - 4), "tion") == 0)
        {
            printf("%s\n", arr4[i]);
        }
    }
 
    std::cout << "Hello, World!\n";
    return 0;
}

bool isPalindrome(char * word)
{
    int len = strlen(word);
    for (int i = 0; i < len/2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void printLatinWord(char * word)
{
    int len = strlen(word);
    char temp = word[0];
    
    for (int i = 1; i < len; i++)
    {
        printf("%c", word[i]);
    }
    printf("%c", word[0]);
    printf("ay ");
}
