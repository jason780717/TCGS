/**********************************************************************************/  
/*  Problem: a033 "故障的計算機" from 格式化輸出                                  */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 592KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-19 10:59:06                                    */  
/**********************************************************************************/  
  
#include <stdio.h>      
#include <stdlib.h>      
int main(void)      
{      
    int N;           
    scanf("%d",&N);  
    printf("|____");  
      
    if(N<1000 && N>100){  
    printf("_");  
    printf("%d",N%1000);  
    }   
    else if(N<100 && N>10){  
    printf("__");  
    printf("%d",N%100);  
    }  
    else if(N<10){  
    printf("___");  
    printf("%d",N);  
    }   
    else  
    printf("%04d",N%10000);  
        
 /* printf("%d",N%10000/1000); 
    printf("%d",N%1000/100); 
    printf("%d",N%100/10); 
    printf("%d",N%10);    */  
       
    printf("|\n");  
        
    system("pause");      
    return 0;          
}      