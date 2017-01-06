/**********************************************************************************/  
/*  Problem: a007 "時間換算(二) (*)" from 整除 / 與取餘數 %                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-08 22:56:02                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                      
#include <stdlib.h>                      
int main(void)                      
{                      
     int minute;        
     scanf("%d",&minute);        
     printf("%d %d",minute/60,minute%60);        
           
     system("pause");                      
     return 0;                      
}    