/**********************************************************************************/  
/*  Problem: a038 "公平的戰役(0尾版)" from 連續輸入                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 20:36:38                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                          
#include <stdlib.h>                                                                                            
int main(void)                                                                                          
{                                                            
                                                                                                   
     int A,B;                                                                    
     while(1){    
     scanf("%d %d",&A,&B);               
     if(A>B){    
        printf("A %d\n",A-B);                      
     }else if(A<B){    
        printf("B %d\n",B-A);       
     }else if(A=B){    
        printf("0\n");       
     }else if (A==0&&B==0)   
        break;        
     }                                       
     system("pause");                                                                                          
     return 0;                                                                                          
}           