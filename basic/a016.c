/**********************************************************************************/  
/*  Problem: a016 "閏年判斷 (*)" from 多重/巢狀if                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 10:54:13                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                              
#include <stdlib.h>                                                              
int main(void)                                                              
{                                
                                                                       
     int year;                                           
     scanf("%d",&year);                          
     if(year%400==0)  
      printf("YES");  
     else if(year%4==0 && year%100!=0)  
      printf("YES");  
     else  
      printf("NO");     
              
     system("pause");                                                              
     return 0;                                                              
}                  
