/**********************************************************************************/  
/*  Problem: a039 "公平的戰役(EOF版)" from 連續輸入                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-18 00:09:07                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                              
#include <stdlib.h>                                                                                                
int main(void)                                                                                              
{                                                                
                                                                                                       
     int A,B,i;                                                                        
     while(1){        
     i=scanf("%d %d",&A,&B);    
     if(i<2){     
        break;         
     }else if(A>B){        
        printf("A %d\n",A-B);                          
     }else if(A<B){        
        printf("B %d\n",B-A);           
     }else if(A==B){        
        printf("0\n");           
     }    
     }                                           
     system("pause");                                                                                              
     return 0;                                                                                              
}               