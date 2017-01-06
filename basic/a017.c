/**********************************************************************************/  
/*  Problem: a017 "成績等第 (*)" from 多重/巢狀if                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 584KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 11:24:38                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                  
#include <stdlib.h>                                                                  
int main(void)                                                                  
{                                    
                                                                           
     int num;                                               
     scanf("%d",&num);                              
     if(num>=90 && num<=100)      
      printf("A");      
     else if(num>=80 && num<=90)      
      printf("B");      
     else if(num>=70 && num<=80)     
      printf("C");    
     else if(num>=60 && num<=70)     
      printf("D");         
     else    
      printf("E");            
     system("pause");                                                                  
     return 0;                                                                  
}                      
