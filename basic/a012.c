/**********************************************************************************/  
/*  Problem: a012 "奇數與偶數 (*)" from if 判斷式                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 10:08:49                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                
#include <stdlib.h>                                                
int main(void)                                                
{                  
                                                         
     unsigned int num;                             
     scanf("%d",&num);            
     if(num%2==0)      
     printf("EVEN");      
     else      
     printf("ODD");      
                       
     system("pause");                                                
     return 0;                                                
}                     
