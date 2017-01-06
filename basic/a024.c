/**********************************************************************************/  
/*  Problem: a024 "所有位數和" from while 迴圈                                    */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 15:39:28                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                    
#include <stdlib.h>                                                                                    
int main(void)                                                                                    
{                                                      
                                                                                             
     int num,totle=0;                                                                 
     scanf("%d",&num);                  
                     
     while(num!=0){  
      totle+=(num%10);  
      num/=10;   
     }      
     printf("%d",totle);                                               
                                    
     system("pause");                                                                                    
     return 0;                                                                                    
}                 