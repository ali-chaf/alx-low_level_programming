#include <string.h>
#include <stdio.h>
/*
*leet - represent text in leet speak
*@ptr: string to be convirted
*/
char *leet(char *ptr) 
{
    char num[] = {'4', '3', '0', '7', '1'};
    char leetC[] = {'A', 'E', 'O', 'T', 'L'};
    char leetL[] = {'a', 'e', 'o', 't', 'l'};
    int i ,j = 0;

    for (i = 0; i < strlen(ptr); i++)
    {
        for (j = 0; j < strlen(leetC) ; j++)
        {
            if (ptr[i] == leetC[j] || ptr[i] == leetL[j])
            {
                ptr[i] = num[j];
                break;
                
            }
        }
        i++;
    }
    
    return ptr;
}
