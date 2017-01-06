/**********************************************************************************/  
/*  Problem: a042 "13的次方 (**)" from 迴圈應用                                   */  
/*  Language: C++                                                                 */  
/*  Result: AC (56ms, 588KB) on ZeroJudge                                         */  
/*  Author: jason780717 at 2013-06-21 22:35:41                                    */  
/**********************************************************************************/  
  
#include <stdio.h>      
#include <stdlib.h>      
int main(void)      
{      
    long long int N,t=1,c;            
    scanf("%lld",&N);      
    for(int i=1;i<=N;i++)  
        t=t*13%100;  
                           
        c=t/10;  
        printf("%lld",c);   
      
    system("pause");      
    return 0;          
}      