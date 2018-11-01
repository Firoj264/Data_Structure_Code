#include <stdio.h>

int main()
{
    int array1[10];
    int sum,product,i,n,largest,lowest;
    printf("How many element you want to store:- ");
    scanf("%d", &n);
     /*Read array elements*/
    printf("\nEnter elements One by One :- \n");
    for(i=0; i<n; i++)
    {
        printf("\nEnter Elements [%d] :  ",i+1);
        scanf("%d",&array1[i]);
    }
     /*display array elements*/
    printf("\nThe List you entered\n\n");

    for(i = 0; i<n; i++)
    {
        printf("%d ", array1[i]);

    }
    /*calculate sum and product*/
    sum=0;
    product=1;
    for(i=0; i<n; i++)
    {
        sum=sum+array1[i];
        product=product*array1[i];
    }
    /*calculate largest and lowest*/
    largest = array1[0];

    for (i = 1; i <n; i++)
    {
        if (largest < array1[i])
            largest = array1[i];
    }
    lowest = array1[0];

    for (i = 1; i <n; i++)
    {
        if (lowest > array1[i])
            lowest = array1[i];
    }
    /*Print lowest,largest,sum and product*/

    printf("\n\nlowest element present in the given array is : %d\n", lowest);

    printf("\nlargest element present in the given array is : %d\n", largest);

    printf("\nSum of array is     : %d\n\n",sum);
    printf("Product of array is : %d\n",product);

    return 0;
}

