/**********************************************************************************/  
/*  Problem: b008 "迴文 (**)" from 字串應用-字元拆解                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 584KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-12-08 19:57:42                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#define SIZE 80  
int main(void)  
{  
    char str[SIZE],str2[SIZE]={0};  
    int i,j;  
  
    scanf("%s",str);  
    for(i=0,j=strlen(str)-1 ; i<strlen(str),j>=0; i++,j--)  
        str2[i]=str[j];  
    if(strcmp(str,str2)==0)  
        printf("YES\n");  
    else  
        printf("NO\n");  
  
    system("pause");  
    return 0;  
}  