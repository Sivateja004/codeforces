/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<b) {
        cout<<n*a;
    }
    else {
        cout<<(n/m)*b+min((n%m)*a,b);
    }
    return 0;
}