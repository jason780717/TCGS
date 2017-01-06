/**********************************************************************************/  
/*  Problem: a023 "3N+1 (**)" from while 迴圈                                     */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 15:09:45                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                    
#include <stdlib.h>                                                                                    
int main(void)                                                                                    
{                                                      
                                                                                             
     int num,a=1;                                                                 
     scanf("%d",&num);                  
                     
     while(num!=1){      
     a++;      
      if(num%2==0)    
         num=num/2;    
      else    
         num=3*num+1;      
     }      
     printf("%d",a);                                               
                                    
     system("pause");                                                                                    
     return 0;                                                                                    
}                    
