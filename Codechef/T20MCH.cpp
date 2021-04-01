#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    o=20-o;
    c=c+(o*6*6);
    cout<<c<<endl;
    if(c>r)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}