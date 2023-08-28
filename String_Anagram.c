#include <stdio.h>  
#include <stdbool.h>  
#include <string.h>  
   
#define No_Character 30  
  
bool strAna (char *st1, char *st2)  
{  
    int arr1[No_Character] = {0};  
    int arr2[No_Character] = {0};  
      
    int n = 0;
    if (strlen (st1) != strlen (st2))  
        return false;  

    for ( n = 0; st1[n] && st2[n]; n++)  
    {  
        arr1[st1[n]-97]++;  
        arr2[st2[n]-97]++;  
        }     
           
    for (n = 0; n < No_Character; n++)  
    {  
        if (arr1[n] != arr2[n])  
            return false;  
        return true;      
    }  
}  
  
int main ()  
{  
    char st1[50], st2[50];  
      
    printf (" Input the first string: ");  
    gets(st1);  
      
    printf (" Input the second string: ");  
    gets(st2);   
    if (strAna (st1, st2))  
    {  
        printf (" \n The first string is an anagram of the second string. ");  
    }  
    else  
    {  
        printf (" \n The first string is not an anagram of the second string. ");  
    }  
    return 0;  
}  

/*Two strings are equal but are ordered randomly*/
