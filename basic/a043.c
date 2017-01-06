/**********************************************************************************/  
/*  Problem: a043 "最大公因數" from 迴圈應用                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (16ms, 588KB) on ZeroJudge                                         */  
/*  Author: jason780717 at 2013-06-19 00:22:34                                    */  
/**********************************************************************************/  
  
#include <stdio.h>  
#include <stdlib.h>  
int main(void)  
{  
    int x,y,com;  
    scanf("%d %d",&x,&y);  
    for(int i=1;i<=x;i++){      //最大公因數 不可能大於兩數中的任一數 所以只要小於x或y即可   
            if(x%i==0 && y%i==0)//兩數都被i除盡時 為兩數之因數  
            com=i;              //條件成立後 com=i 因為是迴圈 這個值一直改變 直到等於最後一個i 就是最大公因數  
            }  
    printf("%d",com);  
    system("pause");  
    return 0;      
}  