/**********************************************************************************/  
/*  Problem: a014 "貨比三家 (*)" from 多重/巢狀if                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 10:25:19                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                  
#include <stdlib.h>                                                  
int main(void)                                                  
{                    
                                                           
     unsigned int num1,num2,num3;                               
     scanf("%d %d %d",&num1,&num2,&num3);              
     if(num1>=num2){    
        if(num2>=num3)    
           printf("%d",num3);    
        else    
           printf("%d",num2);    
     }else    
     printf("%d",num1);    
           
     system("pause");                                                  
     return 0;                                                  
}                
