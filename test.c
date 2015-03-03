/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/02/2015 03:00:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  _tl__ (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void stringZip(const char *pSrc,long len,char *dst)
{
    const char *ptr = pSrc;
    char *result = dst;
    int k = 0;
    char c = *ptr;
    while(*ptr)
    {
        if(c==*ptr)
        {
            ptr++;
            k++;
        }
        else
        {
            if(k>1)
            *result++=(char)(k+'0');
            *result++=c;
            k=1;
            c=*ptr++;
        }
    }
    if(k>1)
     *result++=(char)(k+'0');
      *result++=c;
      *result='\0';
}

int main(void)
{
    char src[] = "aaabbc******######ddde";
    char dst[256] = {0};
    stringZip(src,strlen(src),dst);
    puts(dst);
    printf("hello world1\n");
    printf("hello world2\n");
    return 0;
}

