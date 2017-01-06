/**********************************************************************************/  
/*  Problem: a021 "我討厭偶數 (*)" from while 迴圈                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 23:29:39                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                
#include <stdlib.h>                                                                                
int main(void)                                                                                
{                                                  
                                                                                         
     int num;                                                             
     scanf("%d",&num);              
                 
     while(num%2==0)  
     num/=2;  
     printf("%d",num);                                           
                              
     system("pause");                                                                                
     return 0;                                                                                
}                 