/**********************************************************************************/  
/*  Problem: b003 "資料分組 (**)" from 陣列應用-掃描                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-10-31 00:44:37                                    */  
/**********************************************************************************/  
  
    
#include <stdio.h>            
#include <stdlib.h>            
int main(void)            
{            
    int N[10],a=0,c=0,max=0,min=0,com=0;   
      
    scanf("%d",&a);         //總共會出現幾個數     
    for(int b=0;b<a;b++){   
    scanf("%d",&c);  
    N[b]=c;  
    }  
      
    scanf("%d",&com);         
         
    for(int b=0;b<a;b++){    
        if(com>N[b])   
        min++;   
        if(com<N[b])        //再多用一個if  用else會出錯  
		max++;         
    }              
    printf("%d %d\n",max,min);    
    system("pause");            
    return 0;                
}       