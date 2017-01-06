/**********************************************************************************/  
/*  Problem: a032 "小小綠的數學習題 (*)" from char                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 19:27:22                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     int A,B;  
     char c;                                                                     
     scanf("%d %c %d",&A,&c,&B);                      
     if(c=='+')  
     printf("%d",A+B);  
     else if(c=='-')  
     printf("%d",A-B);  
     else if(c=='*')  
     printf("%d",A*B);            
     system("pause");                                                                                        
     return 0;                                                                                        
}            