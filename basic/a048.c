/**********************************************************************************/  
/*  Problem: a048 "數字金字塔" from 多重迴圈                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 01:20:52                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main(void)  
{  
    int N;        
    scanf("%d",&N);  
    for(int i=1;i<=N;i++){  
            for(int j=1;j<=N-i;j++)  
            printf("_");  
            for(int j=1;j<=i*2-1;j++)  
            printf("%d",i);  
    printf("\n");  
    }  
  
    system("pause");  
    return 0;      
}  