/**********************************************************************************/  
/*  Problem: b004 "一個都不能少" from 陣列應用-標記                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-10-31 22:48:29                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
int main(void)  
{  
    int N[21],a=0,b=0,M=0;  
  
    scanf("%d %d",&a,&M);  
    for(int i=1;i<=a;i++)     //第一個for將陣列值存為0  
    N[i]=0;  
    for(int i=1;i<=M;i++){    //將編號"標記"  
    scanf("%d",&b);  
    N[b]=b;  
    }  
    for(int j=1;j<=a;j++){    //判斷式  
    if(N[j]==0)  
    printf("%d ",j);  
    }  
  
    system("pause");  
    return 0;  
}  
