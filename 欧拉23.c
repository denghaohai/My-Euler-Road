nclude<stdio.h>
#define MAX_N 28123
int yin_shu[MAX_N + 5] = {0};
int ans[MAX_N+5] = {0};
int main()
{
        for(int i = 1 ; i <= 28123;i ++)
    {
                for(int j = 1;j <= i/2;j ++)
        {
                        if(i % j == 0)
            {
                                yin_shu[i] += j; 
                            
            }
                    
        }
                if(yin_shu[i] > i)
                yin_shu[++yin_shu[0]] = i;
            
    }
        long long int sum = 0;int j;
        for(int ans1 = 1 ; ans1 <=28123 ; ans1 ++)
    {
             for(int i = 1 ; i <= yin_shu[0] ; i++)
        {
                    for(j = 1 ; j <= yin_shu[0] ; j++)
            {
                            if(yin_shu[i] + yin_shu[j] == ans1)
                {
                                    ans[ans1] = 1;
                                    break;
                                
                }
                        
            }
                      if(j < yin_shu[0])break;
                  
        }
            
    }
        for(int ans1 = 1 ; ans1 <= 28123 ;ans1 ++)
    {
                if(ans[ans1])continue;
                sum += ans1;
            
    }
        printf("%lld\n",sum);
        return 0;

}

