#include <stdio.h>

int main()
{
    int m[10] = {1, 2, 3, 11, 5, 63, 7, 8, 9, 13};
    int max = m[0];
    for(int i = 0;i<10;i++)
    {
        if (max < m[i])
        {
            max = m[i];
        }
    }
    printf("%d\n",max);
}