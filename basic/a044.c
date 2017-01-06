/**********************************************************************************/  
/*  Problem: a044 "盈數、虧數和完全數" from 迴圈應用                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (106ms, 588KB) on ZeroJudge                                        */  
/*  Author: jason780717 at 2013-06-19 10:13:28                                    */  
/**********************************************************************************/  
  
#include <stdio.h>    
#include <stdlib.h>    
int main(void)    
{    
    int N,t=0;          
    scanf("%d",&N);    
    for(int i=1;i<N;i++){    
        if(N%i==0)  
        t+=i;                 
    }  
    if(t<N)  
    printf("Deficient");  
    else if(t>N)  
    printf("Abundant");  
    else if(t==N)  
    printf("Perfect");    
    
    system("pause");    
    return 0;        
}    
