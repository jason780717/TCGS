/**********************************************************************************/  
/*  Problem: a015 "大小關係 (*)" from 多重/巢狀if                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 10:36:57                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                          
#include <stdlib.h>                                                          
int main(void)                                                          
{                            
                                                                   
     unsigned int A,B;                                       
     scanf("%d %d",&A,&B);                      
     if(A>B)          
       printf("%d>%d",A,B);          
     else if(A<B)        
       printf("%d<%d",A,B);          
     else    
       printf("%d=%d",A,B);    
               
     system("pause");                                                          
     return 0;                                                          
}              