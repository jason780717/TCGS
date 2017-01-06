/**********************************************************************************/  
/*  Problem: a045 "質數判斷" from 迴圈應用                                        */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 00:57:34                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main(void)  
{  
    int n,x,i;      //輸入一個可能為質數的整數primes 開根號完com   
    scanf("%d",&n);  
    x=sqrt(n);  
    for(i=2;i<=x;i++){  
            if(n%i==0){  
            printf("NO\n");  
            break;  
            }  
    }  
            if(i>x)  
            printf("YES\n");  
      
    system("pause");  
    return 0;      
}  