#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_N 354294
int zq(int x)
{
    int tmp = x;
    int sum = 0;
    while(x)
    {
        sum += pow((x % 10),5);
        x /= 10;
    }
    return tmp == sum;
}
int main()
{
    long long z_sum = 0;
    for(int i = 2;i <= MAX_N;i++)
    {
        if(zq(i))z_sum += i;
    }
    printf("%lld\n",z_sum);
    return 0;
}
