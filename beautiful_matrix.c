#include <stdio.h>
int main ( ) {
    int arr[5][5] , m ,  n , count ;
    
    
    for(int i = 0 ; i < 5 ; i++) {
        for(int j = 0 ; j < 5 ; j++) {
        scanf("%d",&arr[i][j]);
        if(arr[i][j] == 1){
            m = i;
            n = j;
        }
        
        }
    }
    
    if((m-2)>0){
        m = (m-2);
    }
    else {
        m = -(m-2);
    }


    if((n-2)>0){
        count = m + (n-2) ;
    }
    
    else {
        count = m - (n-2) ;
    }
    
    printf("%d",count);
}