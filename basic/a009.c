/**********************************************************************************/  
/*  Problem: a009 "團購力量大" from 整除 / 與取餘數 %                             */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-08 23:58:27                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                      
#include <stdlib.h>                                      
int main(void)                                      
{                                      
     int n,price;                        
     scanf("%d",&n);    
     if(n<=10)    
     price=n*100;     
     else if(n>10)    
     price= n/11*1000+n%11*100;    
         
     printf("%d",price);    
     system("pause");                                      
     return 0;                                      
}                  
