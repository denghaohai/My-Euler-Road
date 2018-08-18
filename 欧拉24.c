#include<stdio.h>
#define MAX_N 1000000
int a[10] = {0};
int b[10] = {0};
void quanpailie()
{
     a[0] = a[1] = 1;
     b[0] = 1;
     for(int i = 1;i <= 9;i++)
     {
        a[i] = a[i - 1] * i;
        b[i] = 1;
     }
     return ;
}
int judge_num(int x,int k)
{
    int xx = (k / a[x]) + 1;
    int i = 0;
    while(xx)
    {
       xx -= b[i];
       i++;
    }
    b[i - 1] = 0;
    return i - 1;
}
int main()
{
    quanpailie();
    int k = MAX_N - 1;
    int num;
    for(int i = 9;i >= 0;i--)
    {
        num = judge_num(i, k);
        printf("%d",num);
        k %= a[i];
    }
    /*for(int i = 1; i <= 9;i++)
    {
        printf("%d",a[i]);
    }*/
    return 0;
}
