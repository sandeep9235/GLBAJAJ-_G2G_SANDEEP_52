
#include <stdio.h>
int fibonacci (int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    printf("%d",fibonacci (i));
    }
    return 0;
}
int fibonacci(int m)
{
    if (m==1)
    return 0 ;
    else if (m==2)
    return 1;
    else
    return (fibonacci (m-1)+fibonacci(m-2));
    }