/**********************************************************************************/  
/*  Problem: b007 "倒背如流 (**)" from 字串應用-字元拆解                          */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-12-08 19:14:59                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#define SIZE 15  
  
int main(void)  
{  
    char name[SIZE];  
    char c;  
    int i,j,k,strlen=0;  
  
    scanf("%s",name);  
    for(k = 0; k < SIZE; k++){  
      if(name[k] != '\0')  
        strlen++;  
        else  
        break;  
    }  
    for (i = 0, j = strlen - 1; i < j; i++, j--){ //strlen-1為了要去掉'/0'  
        c = name[i];  
        name[i] = name[j];  
        name[j] = c;  
    }  
    printf("%s",name);  
    system("pause");  
    return 0;  
}  