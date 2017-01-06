/**********************************************************************************/  
/*  Problem: a047 "數字三角形" from 多重迴圈                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 01:11:37                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main(void)  
{  
    int N;        
    scanf("%d",&N);  
    for(int j=1;j<=N;j++){  
            for(int i=1;i<=j;i++)  
            printf("%d",j);  
    printf("\n");  
    }  
  
    system("pause");  
    return 0;      
}  