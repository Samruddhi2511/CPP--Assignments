#include<iostream>
#include<string.h>
using namespace std;

int g[10][10],visited[10],n,t,i,j;
string d,s;
char ch;
int v,flag=0;

void dfs(int v);

int main()
{
  int v;
 
  cout<<"enter the no of nodes :";
  cin>>n;

  string city[10];
 cout<<"enter the cities :";
 for(i=0;i<n;i++)
 {
   cin>>city[i];
 }

for(i=0;i<n;i++)
  {
     visited[i]=0;
  }

  
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  {
    g[i][j]=0;
  }
}

do
{
  cout<<"enter the source city :";
  cin>>s;
  i=0;
  while(city[i]!=s)
  {
     i++;
  }

  cout<<"enter the destination city:";
  cin>>d;
  j=0;
  while(city[j]!=d)
  {
    j++;
  }


 cout<<"enter the travel time to reach destination:";
 cin>>t;

 g[i][j]=t;
 g[j][i]=t;
  
 

 cout<<"do you want to continue (y/n) :";
 cin>>ch;

}while(ch=='y');
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  {
    cout<<g[i][j]<<"\t";
  }
cout<<"\n";
}



dfs(0);
cout<<"\n";

for(i=0;i<n; i++)
{
  cout<<visited[i]<<"\t";
}
cout<<"\n";

for(i=0;i<n; i++)
{
  if(visited[i]==0)
 {
    flag=1;
    break;
 }
 
}

if(flag==0)
 {
  cout<<"connected";
 }
else
 {
  cout<<"not connected";
 }  
  

}

void dfs(int v)
{
  cout<<v<<"->";
  visited[v]=1;

  for(i=1;i<=n;i++)
 {
   if(g[v][i]>0 && visited[i]==0)
  {
    visited[i]=1;
    dfs(i);
  }
 }
  
}
