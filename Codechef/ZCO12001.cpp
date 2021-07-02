#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n)
{
    int temp,nd=0,fpd=0,ls=0,fps=0;;
    vector<int> v;
    //vector<int> close;
    stack<int> st;
    //st.push(-1);
    //close.push_back(0);
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
        if(temp == 1)
        st.push(i);
        else
        {
            //close.push_back(i-st.top());
            if(ls < (i-st.top()))
            {
                ls = i - st.top();
                fps = i - ls;
            }
            st.pop();
        }
    }
    int op=0,cl=0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == 1)
        {
            op++;
            //cl = 0;
        }
        else
        {
            cl++;
            //op = 0;
        }
        if(op == cl)
        {
            if(nd<op)
            {
                nd = op;
                fpd = i-nd;
            }
            op=0;
            cl=0;
        }
    }
    //cout<<"ls: "<<(ls+1)<<" fps: "<<(fps+1);
    cout<<nd<<" "<<fpd<<" "<<(ls+1)<<" "<<(fps+1);
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;    
    solve(n);
    return 0;
}