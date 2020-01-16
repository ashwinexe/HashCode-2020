#include<stdio.h>
int main()
{
    int m,n,i,total_slices=0,counter=0,removed=0,c;
    printf("M and N value\n");  //remove
    scanf("%d %d", &m, &n);
    long int pizza[n];
    printf("types of pizzas\n"); //remove
    for(i=0; i<n; i++)
    scanf("%ld", &pizza[i]);
    
    for(i=n-1; i>=0; i--)
    {
             if(total_slices + pizza[i] <= m)
            {
                total_slices += pizza[i];
                counter++;
                printf("added pizza %d = %d\n", i, total_slices);    //remove
            
            }
            else
            {
               pizza[i] = 0;
               printf("pizza %d removed\n", i); //remove
            }
            
            
    }
    printf("%d\n", counter);

    for(i=0; i<n; i++)
    {
        if(pizza[i] != 0)
        printf("%ld ", i);
    }
    return 0;
}
