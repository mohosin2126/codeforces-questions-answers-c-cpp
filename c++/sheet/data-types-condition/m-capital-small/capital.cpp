#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='0' && c<='9'){
        cout<<"IS DIGIT";
    }
    else{
        cout<<"ALPHA"<<endl;
        if(c>='A' && c<='Z'){
             cout<<"IS CAPITAL"<<endl;
        }
        else if(c>='a' && c<='z'){
            cout<<"IS SMALL";
        }
    }
    return 0;
}