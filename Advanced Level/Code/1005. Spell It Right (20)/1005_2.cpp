#include <stdio.h>
#include <iostream>
using namespace std;
#define N 100
char num[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main(){
    long long int a;
    while(scanf("%lld",&a)!=EOF){
        int i=0,b=0;
        int c[N];
        while(a!=0){
            b+=a%10;
            a=a/10;
        }
        if(b==0)
            c[i++]=0;
        while(b!=0){
            c[i++]=b%10;
            b=b/10;
        }
        for(int j=i-1;j>=0;--j){
            cout<<num[c[j]];
            if(j!=0) cout<<" ";
        }
    }
    return 0;
}
