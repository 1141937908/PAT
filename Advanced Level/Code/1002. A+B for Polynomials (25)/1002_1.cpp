#include <stdio.h>
#include <string.h>
int main()
{
    int ni[10],k,n,i,sum=0;
    double ani[10],a;
    memset(ni,0,sizeof(ni));
    memset(ani,0,sizeof(ani));
    for(int j=0; j<2; j++)
    {
        scanf("%d",&k);
        for(i=0; i<k; i++)
        {
            scanf("%d %lf",&n,&a);
            if(ni[n]==0)
            {
                sum++;
            }
            ni[n]=n;
            ani[n]+=a;
        }
    }
    printf("%d",sum);
    for(int i=9; i>=0 || sum==0; --i,--sum)
    {
        if(ani[i]>10e-7)
        {
            printf("%d %.1lf",ni[i],ani[i]);
            if(sum!=1) printf(" ");
        }
    }
    return 0;
}
