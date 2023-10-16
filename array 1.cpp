#include <stdio.h>    
     
int main()    
{
 int n,a[1][1];
 printf("enter the n",n);
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 	for( int j=n-i;j>0;j--){
 		printf("*");
	 }
	 n+=a[i][i];
	 printf("\n");
 }


  
    return 0;    
}  
