#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int x=0;
    cin>>a>>b;
    while(x>=0){
    if(a>b){
        cout<<x;
        break;
    }
    else{
        x=x+1;
        a=a*3;
        b=b*2;
    }
    }
    return 0;
}