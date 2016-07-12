#include <stdio.h>
#include <string.h>
typedef struct{
    int ni;
    double ani;
}poly;
int main()
{
    poly p[10];
    int n,sum=0,k;
    double a;
    for(int i=0;i<2;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d %lf",&n,&a);
            for(int l=0;l<10;l++){
                if(n==p[l].ni){
                    p[l].ani+=a;
                    break;
                }
                else{
                    p[l].ni=n;
                    p[l].ani=a;
                    sum++;
                    break;
                }
            }

        }
    }
    for(int i=0;i<sum;i++){
            if(p[i].ni<p[i+1].ni){
                int temp1=p[i].ni;
                p[i].ni=p[i+1].ni;
                p[n+1].ni=temp1;
                double temp2=p[i].ani;
                p[i].ani=p[i+1].ani;
                p[i+1].ani=temp2;
            }
        }
        printf("%d ",sum);
        for(int i=0;i<sum;i++){
            printf("%d %.1lf",p[i].ni,p[i].ani);
            if(i!=sum-1) printf(" ");
        }
    return 0;
}
