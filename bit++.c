#include <stdio.h>

int main()
{
     int n;
    char str[4];
     
     int count = 0 ;
   scanf("%d",&n);
   for(int i = 1 ; i <= n ; i++){
     scanf("%s",str);
        char c = str[1];
       if(c == '+'){count++;}
       else{count--;}
    }
   
      
    
    printf("%d",count);
    
    return 0;
}