/**********************************************************************************/  
/*  Problem: b008 "迴文 (**)" from 字串應用-字元拆解                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 584KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-12-08 19:48:59                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#define SIZE 80  
/* 
第一個for將str的值傳給str2 
第二個for將str的值反轉 
第三個for將str與str2相比較 
*/  
int main(void)  
{  
    char str[SIZE],str2[SIZE]={0};  
    char c;  
    int i,j,k;  
  
    scanf("%s",str);  
    for(k=0 ; k<SIZE ; k++){  
        if(str[k] != '\0')  
        str2[k]=str[k];  
        else  
        break;  
    }  
    for(i=0,j=strlen(str)-1 ; i<j ; i++,j--){  
        c = str[i];             //strlen()-->求字串長度  
        str[i] = str[j];  
        str[j] = c;  
    }  
    if(strcmp(str,str2)==0)     //strcmp()-->兩字串比較  
        printf("YES\n");  
    else  
        printf("NO\n");  
  
    system("pause");  
    return 0;  
}  