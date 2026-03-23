#include <stdio.h>
int sum (int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum (n));
    
    return 0;
}
int sum (int m)
{
    if (m==0)
    return 0 ;
    else
    return ((m%10)+sum(m/10));
    }