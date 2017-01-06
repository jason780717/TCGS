/**********************************************************************************/  
/*  Problem: a031 "全民公投 (*)" from long long int                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 19:13:55                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     long long int A,B;                                                                     
     scanf("%lld %lld",&A,&B);                      
     if(A>=B){  
     printf("A ");  
     printf("%lld",A+B);   
     }  
     else{  
     printf("B ");  
     printf("%lld",A+B);       
          }  
                 
     system("pause");                                                                                        
     return 0;                                                                                        
}            