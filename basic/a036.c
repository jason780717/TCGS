/**********************************************************************************/  
/*  Problem: a036 "公平的戰役(1行版) (**)" from                                   */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 587KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 20:21:17                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>  
#include <math.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     int A,B,ans;                                                                    
     scanf("%d %d",&A,&B);  
       
     if(A>B){  
        printf("A %d",A-B);                    
     }else if(A<B){  
        printf("B %d",B-A);     
     }else if(A=B){  
        printf("0");     
     }  
                                          
     system("pause");                                                                                        
     return 0;                                                                                        
}            
