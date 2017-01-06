/**********************************************************************************/  
/*  Problem: a030 "連續整數相加(二)" from for 迴圈                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (5ms, 588KB) on ZeroJudge                                          */  
/*  Author: jason780717 at 2013-06-14 18:06:36                                    */  
/**********************************************************************************/  
  
#include <stdio.h>                                                                                        
#include <stdlib.h>                                                                                        
int main(void)                                                                                        
{                                                          
                                                                                                 
     int s,e,num=0;                                                                     
     scanf("%d %d",&s,&e);                      
       
     if(s>e){  
     for(s;e<=s;s--){      
       printf("%d",s);  
       num+=s;  
       if(s>e)  
       printf("+");  
       else if(s=e)  
       printf("=");  
     }   
     }  
  
     else if(s<e){               
     for(s;s<=e;s++){      
       printf("%d",s);  
       num+=s;  
       if(s<e)  
       printf("+");  
       else if(s=e)  
       printf("=");  
     }   
     }  
       
     else if(s==e){  
     printf("%d",s);  
     printf("=");  
     num=s;  
     }          
       printf("%d",num);          
     system("pause");                                                                                        
     return 0;                                                                                        
}            