#include <stdio.h>

int main()
{   
    int n , count = 0 ;
   char str[100];
   scanf("%d",&n);
  
   scanf ("%s" , str);
    for ( int i = 0 ; str[i]!='\0' ; i ++) {
       if (str[i] == str[i+1]) {
           count++;
       }
   
    
    }
  
 printf( "%d" , count );

    return 0;
}