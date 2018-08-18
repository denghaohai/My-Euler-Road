#include<stdio.h>
#include<string.h>
#define MAX_N 1000
int jilu[MAX_N + 5]; 
int panduan(int x)
{
    int xx = 1,y = 1;
    memset(jilu,0,sizeof(jilu));
    while(y != 0 && jilu[y] == 0)
    {
        jilu[y] = xx;
        printf("%d ",y);
        y = y * 10 % x;
        xx++;
    }
    return y ? xx - jilu[y] : 0;
}
int main()
{
    int ans = 0;
    int ans1 = 0;
   /* for(int i = 7;i < 1000;i++)
    {
         int tmp = panduan(i); 
         if(ans < tmp)
         {
            ans = tmp;
            ans1 = i;
         }
    }*/
    //printf("%d %d\n",ans,ans1);
    printf("%d",panduan(983));
    return 0;
}
