#include <stdio.h>

int main()
{
   #include <stdio.h>

int main()
{
    int n, count, j , d;
    
    scanf("%d", &n);
    int totalcount = 0;
    for (int i = 1; i <= n; i++)
    {  count = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &d);
            if (d == 1)
            {
                count++;
            }
        }

       
        
        if (count >= 2)
        {
            totalcount++;
        }
         printf("\n");
    }

   printf("%d", totalcount);
}

    
}
