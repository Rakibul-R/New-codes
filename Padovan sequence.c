#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    // for int data type ...n(max=78)

    int padv1 = 1, padv2 = 1, padv3 = 1;
    printf("1 1 1 ");
    for (int i = 4; i <= n; i++)
    {
        int pad_n = padv1 + padv2;

        padv1=padv2;
        padv2=padv3;
        padv3=pad_n;

        printf("%d ",pad_n);
    }

    return 0;
}
