/**********************************************************************************/  
/*  Problem: b001 "最後倒數 (**)" from 陣列應用-記錄                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-22 12:21:07                                    */  
/**********************************************************************************/  
  
#include <stdio.h>        
#include <stdlib.h>        
int main(void)        
{        
    int N[10],a=0,b=0,c=0;              
    scanf("%d",&a);         //總共會出現幾個數   
    for(b=0;b<a;b++){       //輸入數字   
        scanf("%d",&c);  
        N[b]=c;             //紀錄數字   
        }  
    b=a-1;                  //注意這行   
    for(b;b>=0;b--)  
        printf("%d ",N[b]);      
        
    system("pause");        
    return 0;            
}        