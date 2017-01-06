/**********************************************************************************/  
/*  Problem: a041 "收集冰棒棍 (**)" from 迴圈應用                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-21 22:55:47                                    */  
/**********************************************************************************/  
  
#include <stdio.h>      
#include <stdlib.h>      
int main(void)      
{      
    int N,a=0,t=0,c=0;            
    scanf("%d",&N);      
    for(int i=1;i<=N+c;i++)  
        if(i%5==0){  
        c++;  
        }                   
        t=N+c;  
        printf("%d",t);   
      
    system("pause");      
    return 0;          
}      
