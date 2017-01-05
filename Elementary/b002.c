/**********************************************************************************/  
/*  Problem: b002 "找最大值 (**)" from 陣列應用-掃描                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-10-31 23:52:44                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
int main(void)  
{  
    int N[11],a=0,max=0,num=1;  
  
    scanf("%d",&a);  
    for(int b=1;b<=a;b++)  
    scanf("%d",&N[b]);  
  
    max=N[1];  
  
    for(int c=1;c<=a;c++){  
        if(max<N[c]){  
        max=N[c];  
        num=c;  
        }  
    }  
    printf("%d %d\n",num,max);  
    system("pause");  
    return 0;  
}  