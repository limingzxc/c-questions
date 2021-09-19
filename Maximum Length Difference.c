/*
2021/9/19 黎zxc /Maximum Length Difference/
https://www.codewars.com/kata/5663f5305102699bad000056/solutions/c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
int mxdiflg(const char *firstArray[], int firstArrayLength, const char *secondArray[], int secondArrayLength)
{ 
    if(firstArray == NULL || secondArray == NULL)
    {
        return -1;
    }
  
    int first_min=strlen(*firstArray),second_min=strlen(*secondArray);
    int first_max=strlen(*firstArray),second_max=strlen(*secondArray);

    for(int i=1; i<firstArrayLength; i++)
    {
        if((int)strlen(*(firstArray+i)) < first_min)
        {
            first_min = strlen(*(firstArray+i));
        }
        else
        {
            if((int)strlen(*(firstArray+i)) > first_max)
            {
                first_max = strlen(*(firstArray+i));
            }
        }
    }

    for(int j=1; j<secondArrayLength; j++)
    {
        if((int)strlen(*(secondArray+j)) < second_min)
        {
            second_min = strlen(*(secondArray+j));
        }
        else
        {
            if((int)strlen(*(secondArray+j)) > second_max)
            {
                second_max = strlen(*(secondArray+j));
            }
        }
    }
    return abs(first_max-second_min)>abs(second_max-first_min)? abs(first_max-second_min): abs(second_max-first_min);
}
*/

int mxdiflg(const char **firstArray, int firstArrayLength, const char **secondArray, int secondArrayLength)
{
  
    if(firstArray == NULL || secondArray == NULL)
    {
        return -1;
    }
  
    int first_min=strlen(firstArray[0]),second_min=strlen(secondArray[0]);
    int first_max=strlen(firstArray[0]),second_max=strlen(secondArray[0]);
    
    for(int i=1; i<firstArrayLength; i++)
    {
        if((int)strlen(firstArray[i]) < first_min)
        {
            first_min = strlen(firstArray[i]);
        }
        else
        {
            if((int)strlen(firstArray[i]) > first_max)
            {
                first_max = strlen(firstArray[i]);
            }
        }
    }

    for(int j=1; j<secondArrayLength; j++)
    {
        if((int)strlen(secondArray[j]) < second_min)
        {
            second_min = strlen(secondArray[j]);
        }
        else
        {
            if((int)strlen(secondArray[j]) > second_max)
            {
                second_max = strlen(secondArray[j]);
            }
        }
    }

    return abs(first_max-second_min)>abs(second_max-first_min)? abs(first_max-second_min): abs(second_max-first_min);
}

int main(){
    const char *firstArray[] = { "ccct", "tkkeeeyy", "ggiikffsszzoo", "nnngssddu", "rrllccqqqqwuuurdd", "kkbbddaakkk" };
    const char *secondArray[] = { "tttxxxxxxgiiyyy", "ooorcvvj", "yzzzhhhfffaaavvvpp", "jjvvvqqllgaaannn", "tttooo", "qmmzzbhhbb" };

    const size_t firstArrayLength = sizeof(firstArray)/sizeof(firstArray[0]);
    const size_t secondArrayLength = sizeof(secondArray)/sizeof(secondArray[0]);

    const int actual = mxdiflg(firstArray, firstArrayLength, secondArray, secondArrayLength);

    printf("%d",actual);

    return 0;
}
