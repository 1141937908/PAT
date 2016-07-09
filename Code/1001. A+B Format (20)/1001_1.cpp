#include <iostream>
using namespace std;
int main()
{
    int a,b,c,i,num[10];
    cin>>a>>b;
    c=a+b;
    if(c<0)
    {
        c*=-1;
        i=0;
        while(c!=0)
        {
            num[i++]=c%10;
            c=c/10;
        }
        cout<<"-";
        while(i!=0){
            if((i-3)%3==0) cout<<',';
            cout<<num[--i];
        }
        cout<<endl;
    }
    else{
        i=0;
        while(c!=0){
            num[i++]=c%10;
            c=c/10;
        }
        while(i!=0){
            if((i-3)%3==0) cout<<',';
            cout<<num[--i];
        }
        cout<<endl;
    }
    return 0;
}
