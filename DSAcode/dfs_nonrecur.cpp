#include<iostream>
using namespace std;
#include<stack>

int m[10][10],n,visit[10];
void dfs(int s)
{
    stack<int>stk;
    stk.push(s);
    while(!stk.empty())
    {
       int c=stk.top();
        stk.pop();
        cout<<c<<"-";
        visit[s]=1;

        for(int i=1;i<=n;i++)
        {
            if(m[c][i]==1 )
            {
                stk.push(i);
            }
        }
    }
}

int main()
{
    int s;
    cout<<"Enter no of nodes :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>m[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        visit[i]=0;
    }

    cout<<"Enter the starting node :"<<endl;
    cin>>s;

    dfs(s);
    return(0);
}
