#include<iostream>
#include<string.h>
using namespace std;

int g[10][10], visited[10],n;
string city[10];
int v;
int dfs(int v);

int main()
{ 
   int flag=0;
   int n,i,j;
   char ch;
   cout<<"enter no of city";
   cin>>n;
   
   for(i=0;i<n;i++)
   {
     visited[i]=0;
   } 
   
   cout<<"enter"<<n<<"city names";
   for(i=0;i<n;i++)
   {
     cin>>city[i];
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
         g[i][j]=0;
     }
   }


 do{
     string s,d;
      int t;
      int i,j;
   cout<<"enter source city\n";
   cin>>s;
   i=0;
   while(city[i]!=s)
   { 
     i++;
   }

   cout<<"enter destination city\n";
   cin>>d;
   j=0;
   while(city[j]!=d)
   { 
     j++;
   }
   
   cout<<"enter time to reach to destination city\n";
   cin>>t;
   
   g[i][j]=t;
   g[j][i]=t;
   
   cout<<"do you want to continue(y/n)";
   cin>>ch;
   }while(ch=='y');
   
   
   

   cout<<"enter current node:";
   cin>>v;
   dfs(v);
    

   flag=0;
   for(i=0;i<n;i++)
  {
   
    if(visited[i]==0)
    {
       flag=1;
       break;
    }
   
  }
  if(flag==0)
  {
    cout<<"graph is connected";

  }
  else
  {
     cout<<"not connected";
  }

}



int dfs(int v)
{
  int i;
  cout<<v;
  visited[i]=1;
  for(i=0;i<n;i++)
  {
    if(g[v][i]>0)
    {
      dfs(i);
    


    }
  }
}



