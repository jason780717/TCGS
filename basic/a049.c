/**********************************************************************************/  
/*  Problem: a049 "斜紋地硨" from 多重迴圈                                        */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 584KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 01:28:50                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main(void)  
{  
    int N;        
    scanf("%d",&N);  
    for(int i=1;i<=N;i++){  
              
        for(int j=1;j<=N;j++){  
            if(i%3==j%3)  
            printf("@");  
            else  
            printf("-");  
            }  
              
    printf("\n");  
    }  
  
    system("pause");  
    return 0;      
}  
