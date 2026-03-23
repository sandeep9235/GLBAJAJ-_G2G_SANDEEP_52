#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],i,j;
    printf("enter the size opf row and column of a 1st matrix =");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and column of the 2nd matrix =");
    scanf("%d%d",&r2,&c2);
    if (r1!=r2&&c1!=c2)
    {
        printf("addition ias not possible=");
    }
    else
    printf("enter the element of 1st matrix=");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        { 
             scanf("%d",&a[i][j]);
        }
    }

    printf("enter the element of 2nd matrix =");
    for(i=0;i<r2;i++)
    {

    for(j=0;j<c2;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
        printf("addition of element of both matrix=");
        for (i=0;i<c1;i++)
        {
            for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        }
    printf("third matrix =\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
    {
        printf("%d",c[i][j]);
    }
    printf("\n");
    }
    return 0;
}