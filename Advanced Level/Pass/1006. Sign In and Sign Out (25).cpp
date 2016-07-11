#include <stdio.h>
#include <string.h>
int main(){
    int n,h,m,s,early_unlock=23*60*60+59*60+59,late_lock=0;
    char id[15],early_id[15],late_id[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&id);
        scanf("%d:%d:%d",&h,&m,&s);
        int unlock=h*60*60+m*60+s;
        scanf("%d:%d:%d",&h,&m,&s);
        int lock=h*60*60+m*60+s;
        if(early_unlock>unlock){
            early_unlock=unlock;
            strcpy(early_id,id);
        }
        if(late_lock<lock){
            late_lock=lock;
            strcpy(late_id,id);
        }
    }
    printf("%s",early_id);
    printf(" %s\n",late_id);
    return 0;
}
