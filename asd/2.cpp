#include <stdio.h>

int main()
{
    int number;
    int k = 1;
    scanf("%d",&number);
    while (number > 0)
    {
        k*=number;
        number-=1;
    }
    printf("%d\n",k);
}