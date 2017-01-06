/**********************************************************************************/  
/*  Problem: a022 "細菌繁殖 (*)" from while 迴圈                                  */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 23:36:54                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                
#include <stdlib.h>                                                                                
int main(void)                                                                                
{                                                  
                                                                                         
     int n,m,a=0;                                                             
     scanf("%d %d",&n,&m);              
                 
     while(n<m){  
     a++;  
     n*=3;  
     }  
     printf("%d",a);                                           
                                
     system("pause");                                                                                
     return 0;                                                                                
}          