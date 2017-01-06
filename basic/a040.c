/**********************************************************************************/  
/*  Problem: a040 "公平的戰役(Case版)" from 連續輸入                              */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 21:04:34                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                            
#include <stdlib.h>                                                                                              
int main(void)                                                                                            
{                                                              
                                                                                                     
     int A,B,i,n;  
     scanf("%d",&n);                                                                      
     for(i=1;i<=n;i++){      
     scanf("%d %d",&A,&B);  
     if(A>B){      
        printf("Case %d: A %d\n",i,A-B);                        
     }else if(A<B){      
        printf("Case %d: B %d\n",i,B-A);        
     }else if(A=B){      
        printf("Case %d: 0 \n",i);         
     }  
     }                                         
     system("pause");                                                                                            
     return 0;                                                                                            
}             