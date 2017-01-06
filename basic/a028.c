/**********************************************************************************/  
/*  Problem: a028 "P(N,R) (**)" from for 迴圈                                     */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-22 09:26:13                                    */  
/**********************************************************************************/  
  
#include <stdio.h>          
#include <stdlib.h>          
int main(void)          
{          
    long long int N,R,n=1,r=1,P=0;    
                
    scanf("%lld %lld",&N,&R);    
    for(int j=1;j<=(N-R);j++)    
        r*=j;      
    for(int i=1;i<=N;i++)      
        n*=i;    
                                 
        P=n/r;    
        //printf("%d\n",n);       
        //printf("%d\n",r);       
        printf("%lld",P);       
          
    system("pause");          
    return 0;              
}          