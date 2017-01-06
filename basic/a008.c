/**********************************************************************************/  
/*  Problem: a008 "溫度轉換 (*)" from 浮點數 float (double)                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 596KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-08 23:01:13                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                              
#include <stdlib.h>                              
int main(void)                              
{                              
     float celsius;                
     scanf("%f",&celsius);                
     printf("%3.1f",celsius*9./5.+32.);                
                   
     system("pause");                              
     return 0;                              
}           
