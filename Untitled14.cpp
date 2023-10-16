#include <stdio.h>    
     
int main()    
{       
    int a[] = {25, 11, 7, 75, 56};      
           
    int length = sizeof(a)/sizeof(a[0]);    
            
    int max = a[0];    
   
    for (int i = 0; i < length; i++) {        
    
       if(a[i] > max)    
           max = a[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}  
