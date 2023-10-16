#include <stdio.h> 
  
int main() 
{ 
    int n; 
     printf("enter the number\n",n);
    scanf("%d",&n);
        
    for (int i = 0; i <n; i++) { 
  
        
        for (int j = 0; j < 2 * (n - i) - 1; j++) { 
            printf(" "); 
        } 
   
        //for (int k = 0; k <= 2 * i ; k++) { 
           // printf("* "); 
       // } 
       printf("****");
        printf("\n"); 
    } 
}

