/**********************************************************************************/  
/*  Problem: a018 "下午茶時間 (**)" from 多重/巢狀if                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 22:51:00                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                    
#include <stdlib.h>                                                                    
int main(void)                                                                    
{                                      
                                                                             
     int hour,minute,num;                                                 
     scanf("%d %d",&hour,&minute);  
     num=hour*60+minute;  
     if(num>=860 && num<+1000)  
     printf("YES");  
     else  
     printf("NO");                                
                  
     system("pause");                                                                    
     return 0;                                                                    
}                        