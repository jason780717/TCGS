/**********************************************************************************/  
/*  Problem: a010 "年齡推算" from 多個變數與運算式                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 00:13:55                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                            
#include <stdlib.h>                                            
int main(void)                                            
{              
                                                     
     int sg;                         
     scanf("%d",&sg);        
   
     printf("%d%d",(sg*2-5)/10,(sg+3)%10);        
            
     system("pause");                                            
     return 0;                                            
}                 
