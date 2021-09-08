#include <stdio.h>

int main()
{
    int k , n , w;
    scanf ( "%d %d %d" , &k , &n , &w );
     int totalcost = ( k * w * (w+1) )/2;
     if( totalcost > n ) {
     printf ( "%d" , totalcost - n );
                         }
     else {
             printf("%d",0);
                         }
    return 0;
}