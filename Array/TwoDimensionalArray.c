
#include<stdio.h>
int main()
{

    int a[10][10];
    int b[10][10];
    int c[10][10];
    int d[10][10];
    int m[10][10];
    int trans[10][10];
    int i,j,r1,r2,k1,k2,k;
    int mul=0;
    printf("Enter the Number of row for 1st matrix: ");
    scanf("%d",&r1);
    printf("Enter the Number of column for 1st matrix: ");
    scanf("%d",&k1);
    printf("Enter the Number of row for 2nd matrix: ");
    scanf("%d",&r2);
    printf("Enter the Number of column for 2nd matrix: ");
    scanf("%d",&k2);
    // Storing elements of first matrix.
    printf("for 1st matrix\n");
    for (i=0; i<r1; i++)
    {
        for(j=0; j<k1; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // Storing elements of second matrix.
    printf("for 2nd matrix\n");

    for (i=0; i<r2; i++)
    {
        for(j=0; j<k2; j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

// displaying elements of first matrix.
    printf("\n1st Matrix is= \n");
    for (i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<k1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    // displaying elements of first matrix.
    printf("\n2nd Matrix is= \n");
    for (i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<k2; j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    //Adding matrices a & b
    printf("\nSum of those Matrix is= \n");
    if(r1==r2&& k1==k2) // Column & row of first matrix should be equal to second matrix
    {
        for (i=0; i<r1; i++)
        {
            for(j=0; j<k1; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for (i=0; i<r1; i++)
        {
            printf("\t");
            for(j=0; j<k1; j++)
            {
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSummation Error for unequal rows @ columns!!!!\n");
    }
    //Multiplying matrices a & b
      printf("\nMultiplication of those Matrix is= \n");
     if(r2==k1) // Column of first matrix should be equal to column of second matrix
     {
         for (i=0; i<r1; i++)
        {
            for(j=0; j<k2; j++)
            {
                 m[i][j]=0;

                 }}


      for (i=0; i<r1; i++)
        {
            for(j=0; j<k2; j++)
            {
                for(k=0; k<k1; k++)
                {
                    m[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

// Displaying the multiplication result
        for (i=0; i<r1; i++)
        {
            printf("\t");
            for(j=0; j<k2; j++)
            {
                printf("%d ",m[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\nError\n");
    }

//Transpose of a matrix
    printf("\nTranspose of 1st matrix: \n ");
    for (i=0; i<r1; i++)
    {
        for(j=0; j<k1; j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    for (i=0; i<k1; i++)
    {
        printf("\t");
        for(j=0; j<r1; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    //Diagonal addition of 1st matrix
    int total=0;
    printf("\nDiagonal addition of 1st matrix: \n ");
    for (i=0; i<r1; i++)
    {
        for(j=0; j<k1; j++)
        {
            if(i==j)
            {
                total=total+a[i][j];
            }
        }
    }

    printf("\n   %d \n",total);
    //horizontal addition of 1st matrix
    printf("\nhorizontal addition of 1st matrix: \n ");
    int tota=0;
    for (i=0; i<r1; i++)
    {
        tota=0;
        for(j=0; j<k1; j++)
        {

            tota=tota+a[i][j];

        }

        printf("\n  %d\n",tota);
    }

}








