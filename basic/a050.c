/**********************************************************************************/  
/*  Problem: a050 "九九乘法表" from 多重迴圈                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 09:54:56                                    */  
/**********************************************************************************/  
  
#include <stdio.h>    
#include <stdlib.h>    
int main(void)    
{    
    int N;          
    scanf("%d",&N);    
    for(int i=1;i<=N;i++){    
                
        for(int j=1;j<=N;j++){    
            printf("%dx%d=%2d  ",j,i,j*i);    
            }                  
    printf("\n");    
    }    
    
    system("pause");    
    return 0;        
}    
