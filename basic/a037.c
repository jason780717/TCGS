/**********************************************************************************/  
/*  Problem: a037 "公平的戰役(N行版)" from 連續輸入                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 20:33:00                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>  
#include <math.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     int A,B,n;  
     scanf("%d",&n);                                                                    
     while(n--){  
     scanf("%d %d",&A,&B);             
     if(A>B){  
        printf("A %d\n",A-B);                    
     }else if(A<B){  
        printf("B %d\n",B-A);     
     }else if(A=B){  
        printf("0\n");     
     }  
     }                                     
     system("pause");                                                                                        
     return 0;                                                                                        
}            