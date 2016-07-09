#include <iostream>
using namespace std;
int main()
{
    int a,b,c,i=0,len=0;
    bool flag=false;
    int num[10];
    cin>>a>>b;
    c=a+b;
    if(c==0)    cout<<c;
    if(c<0){
        flag=true;
        c*=-1;
    }
    while(c!=0){
        num[i++]=c%10;
        c=c/10;
        len++;
    }
    if(flag) cout<<'-';
    for(int j=i-1;j>=0;--j){
        if((j==2 && len>3) || (j==5 && len>6))
            cout<<',';
        cout<<num[j];
    }
    return 0;
}
