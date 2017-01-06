/**********************************************************************************/  
/*  Problem: a035 "位數" from 數學函數-log10                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 20:16:46                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>  
#include <math.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     int A,B,ans;                                                                    
     scanf("%d %d",&A,&B);  
       
     ans=B*log10(A)+1;  
     printf("%d",ans);    
                          
             
     system("pause");                                                                                        
     return 0;                                                                                        
}            