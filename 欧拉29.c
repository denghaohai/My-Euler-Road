#include<stdio.h>
#include<string.h>
#define MAX_N 10000
#define MAX_M 210
int mi[MAX_N][MAX_M] = {0};
int result_length = 0;
int panduan(int *num)
{
    for(int i = 0;i < result_length;i++)
    {
        if(memcmp(mi + i,num,sizeof(int) * MAX_M) != 0)continue;
        return i + 1;
    }
    return 0;
}
int main()
{
    for(int a = 2 ; a <= 100 ; a++)
    { 
        for(int b = 2 ; b <= 100 ; b++)
        {   
            int tmp[MAX_N] = {0}; 
            tmp[0] = 1;
            tmp[1] = 1;
            for(int i = 1;i <= b;i ++)
            {
               for(int j = 1;j <= tmp[0];j++)
                   { tmp[j] *= a;}
                    for(int j = 1;j <= tmp[0];j++)
                    { 
                        if(tmp[j] < 10)continue;
                        tmp[j + 1] += tmp[j] / 10;
                        tmp[j] %= 10;
                        tmp[0] += (j == tmp[0]);
                    }
            }
            if(!panduan(tmp))
            {
                memcpy(mi + result_length,tmp,sizeof(int) * MAX_M);
                result_length += 1;
            }
        }
    }
    printf("%d\n",result_length);
    return 0;
}
