/**********************************************************************************/  
/*  Problem: a020 "刮刮樂兌獎(二)" from 多重/巢狀if                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-09 23:20:02                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                
#include <stdlib.h>                                                                                
int main(void)                                                                                
{                                                  
                                                                                         
     int a,b,num=0;                                                             
     scanf("%d %d",&a,&b);              
                 
     if(b==2 || b==5 || b==8)       
     num+=200;        
     if(a%2==1)        
     num+=100;                   
     if(a==b)        
     num+=50;                    
     if(b!=2 && b!=5 && b!=8 && a%2!=1 && a!=b)           
     num=0;                                            
         
     printf("%d",num);                         
     system("pause");                                                                                
     return 0;                                                                                
}                 
