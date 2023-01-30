//
//  main.cpp
//  Final
//
//  Created by Yuki Ogawa on 7/20/21.
//

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pastTense(char * verb);
char * createString();
void stringCopy(char * der, char * src);
int charToInt(char c);
int countSeparation(char * sentence);

int main(int argc, const char * argv[]) {
    // insert code here..
    // 3
    //"This is a structure" -->  "This Is A Structure"     to upper 1)
//    char * s = createString();
//    // printf("%s", s);
//
//    int len = strlen(s);
//    s[0] = toupper (s[0]);
//    for(int i = 0; i<len-1; i++)
//    {
//        if (s[i] == ' ')
//        {
//            s[i+1] = toupper (s[i+1]);
//        }
//    }
//    printf("%s", s);
//    free(s);
//    printf("%s", "DONE");
    
//    char * sentence = "hello*def*hello";
//    int i = countSeparation(sentence);
//    printf("%d\n", i);
    
//    printf("%u\n", -455);
//    printf("%f\n", 1234567.89);
//    printf("%4d\n", 12);
//    printf("%.4d\n", 12);
//    printf("%.3f\n", 12.3542);
//    printf("%.3e\n", 12.3542);
//    printf("%g\n", 12345.3542);
    int a = 5;
    int *p = &a;
    printf("%d\n", (*p)++);
    
    printf("%s", "DONE");
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}

//1//
void pastTense(char * verb)
{
     int len = strlen(verb);
     char * past;
     if (verb[len-1] == 'e')
     {
         past = (char *) malloc (len+2);
         strcpy(past, verb);
         past [len] = 'd';
         past [len+1] = '\0';
         printf("%s", past);
         free (past);
     }
     else if ((verb[len-2] == 's' && verb[len-1] == 's') || (verb[len-2] == 'g' && verb[len-1] == 'h'))
     {

     }
     else
     {
         printf("%s", "Irregular");
     }
//    char * res = createString();
//    printf("%s", res);
 }



//1//
char * createString()
{
     char s[80];
     char * res;
     printf("%s", "Enter String: ");
     fgets(s, 80, stdin);
     int len = strlen(s);
     res = (char *)malloc(len+1);
     strcpy(res, s);
     return res;
 }

// 4  no strlen
void stringCopy(char * der, char * src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        der[i] = src[i];
    }
    der[i] = '\0';
}

// 5
int charToInt(char c)
{
    return c-48;
}
//'0' --> 0
//'1' --> 1
//'0'  48
//'1'  49
//'2'  50

//6//
bool sameCase(char * sentence)
{
    int len = strlen(sentence);
    int numUpper = 0, numLower = 0, numSpace = 0;
    for(int i = 0; i<len; i++)
    {
        if(islower(sentence[i]))
        {
            numLower++;
        }
        if(isupper(sentence[i]))
        {
            numUpper++;
        }
        if(isspace(sentence[i]))
        {
            numSpace++;
        }
    }
    if(numLower == len-numSpace)
    {
            return true;
    }
    if(numUpper == len-numSpace)
    {
            return true;
    }
    return false;
}

//"this is a sentence"  True
//"THIS IS A SENTENCE"  True
            
            
//7//
int countSeparation(char * sentence)
{
    char * c1;
    char * c2;
    c1 = sentence;
    while(*c1 != '*')
    {
        c1++;
    }
    c2 = c1 + 1;
    while(*c2 != '*')
    {
        c2++;
    }
    return c2-c1-1;
}

//         3
//"a b c *def* gh"
//       c1  c2
