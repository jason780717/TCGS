/**********************************************************************************/  
/*  Problem: a034 "距離" from 數學函數-sqrt                                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 19:59:16                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>  
#include <math.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     double x1,y1,x2,y2,r;                                                                    
     scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);  
     r=sqrt(pow(x1-x2,2)+pow(y1-y2,2));  
     printf("%.3lf",r);    
                          
             
     system("pause");                                                                                        
     return 0;                                                                                        
}            
