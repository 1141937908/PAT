#include <stdio.h>
int main (){
    int n,start=0,next,time=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&next);
        if(next>start)
            time+=(next-start)*6;
        else if(next<start)
            time+=(start-next)*4;
        time+=5;
        start=next;
    }
    printf("%d\n",time);
    return 0;
}
