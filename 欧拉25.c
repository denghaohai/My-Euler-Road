#include<stdio.h>
int f[3][1005] = {{0,0},{1,1},{1,1}};
int n = 2;
int main()
{
    while(f[n % 3][0] < 1000)
    {
        n += 1;
        int *a = f[n % 3],*b = f[(n - 1) % 3],*c = f[(n -2) % 3];
        a[0] = b[0];
        for(int i = 1 ;i <= b[0];i++)
        {
            a[i] = b[i] + c[i];
        }
        for(int i = 1;i <= a[0];i++)
        {
            if(a[i] < 10)continue;
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
            a[0] += (a[0] == i);
        }
    }
    printf("%d\n",n);
    return 0;
}
