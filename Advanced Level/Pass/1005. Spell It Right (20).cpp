#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
#define N 100
char num[][10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    char a[N];
    while(cin>>a)
    {
        int b=0,c[N];
        for(int i=0; i<strlen(a); i++)
        {
            b+=a[i]-'0';
        }
        int i=0;
        if(b==0)
        {
            c[i++]=0;
        }
        while(b!=0)
        {
            c[i++]=b%10;
            b=b/10;
        }

        for(int j=i-1; j>=0; --j)
        {
            cout<<num[c[j]];
            if(j!=0) cout<<' ';
        }
    }
    return 0;
}
