/**********************************************************************************/  
/*  Problem: a046 "巧克力工廠" from 多重迴圈                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 584KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 01:07:42                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main(void)  
{  
    int W,H;        
    scanf("%d %d",&W,&H);  
    for(int j=1;j<=H;j++){  
            for(int i=1;i<=W;i++)  
            printf("#");  
    printf("\n");  
    }  
  
    system("pause");  
    return 0;      
}  