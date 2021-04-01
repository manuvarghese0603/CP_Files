#include<bits/stdc++.h>
using namespace std;
//int power(int , int );
int main()
{
    int t;
    cin>>t;
    string add("+");
    string sub("-");
    string mul("*");
    string mul3("**");
    string power("^");
    while(t--)
    {
        string s;
        long long int a,b,m,c,p,temp;
        cin>>s>>a>>b>>m;
        if(add.compare(s)==0)
        cout<<(a+b)%m<<endl;
        else if(sub.compare(s)==0)
        { 
            if((a-b)>0)
            cout<<(a-b)%m<<endl;
            else
            {
                temp=(b-a)%m;
                if(temp>0)
                cout<<m-temp<<endl;
                else
                cout<<"0"<<endl;
            }
        }
        else if(mul.compare(s)==0)
        cout<<((a%m)*(b%m))%m<<endl;
        else if(mul3.compare(s)==0)
        {
            cin>>c;
            cout<<(((a%c)*(b%c))%c*(m%c))%c<<endl;
        }
        else if(power.compare(s)==0)
        {
            //a=base b=power
            temp=a%m;
            p=pow(temp,b);
            cout<<p%m<<endl;
        }
    }
    return 0;
}
