/**********************************************************************************/  
/*  Problem: a013 "成績分佈 (*)" from if 判斷式、多重條件                         */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 10:11:27                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                
#include <stdlib.h>                                                
int main(void)                                                
{                  
                                                         
     unsigned int num;                             
     scanf("%d",&num);            
     if(num>=75&&num<=90)      
     printf("YES");      
     else      
     printf("NO");      
                       
     system("pause");                                                
     return 0;                                                
}                     
