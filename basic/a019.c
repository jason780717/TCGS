/**********************************************************************************/  
/*  Problem: a019 "刮刮樂兌獎(一)" from 多重/巢狀if                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 587KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 23:06:17                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                        
#include <stdlib.h>                                                                        
int main(void)                                                                        
{                                          
                                                                                 
     int a,b;                                                     
     scanf("%d %d",&a,&b);      
         
     if(b==2 || b==5 || b==8)      
     printf("200");     
     else if(a%2==1)     
     printf("100");  
     else if(a==b)    
     printf("50");   
     else    
     printf("0");                                    
                      
     system("pause");                                                                        
     return 0;                                                                        
}                  