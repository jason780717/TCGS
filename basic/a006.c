/**********************************************************************************/  
/*  Problem: a006 "時間換算(一) (*)" from 算術運算子與運算式                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-08 22:53:05                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                    
#include <stdlib.h>                    
int main(void)                    
{                    
     int minute,hour;      
     scanf("%d %d",&minute,&hour);      
     printf("%d",(minute*60)+hour);      
         
     system("pause");                    
     return 0;                    
}          
