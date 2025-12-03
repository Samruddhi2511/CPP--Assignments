#include<iostream>
using namespace std;
struct node
{
     int val;
     struct node *next;
};
struct node *adjacencylist[10];
int n,visited[10];

void bfs(int s)
{
  int queue[10],front=0,rear=0;
  for(int i=1;i<=n;i++)
  {
      visited[i]=0;
  }
  queue[rear]=s;
  rear++;
  cout<<s;
  visited[s]=1;

  while(front!=rear)
 {
    int c=queue[front];
    front++;
    node *temp;
    temp=adjacencylist[c];
    while(temp!=NULL)
  { 
    if(visited[temp->val]!=1)
    {
      visited[temp->val]=1;
      cout<<temp->val;
      queue[rear]=temp->val;
      rear++;
      
    }
    temp=temp->next;
  } 
   
 }  
}


int main()
{
   int y;
   int s;
   cout<<"enter no of nodes :";
   cin>>n;

   for(int i=1;i<=n;i++)
   {

       adjacencylist[i]=NULL;
   }
   
   for(int i=1;i<=n; i++)
 {

   for(int j=1;j<=n;j++)
   {
      cout<<"is node between "<< i<< "to" <<j<<":";
      cin>>y;
      if(y==1)
      {
          struct node *n;
          n->val=j;
          n->next=NULL;
          if(adjacencylist[i]==NULL)
          {
               adjacencylist[i]=n;
          }
          else
          {

                 node *temp=adjacencylist[i];
                 while(temp->next!=NULL)
                 {
                       temp=temp->next;
                 }
                 temp->next=n;
          }
    
      }
   }
 }

 cout<<"enter the current node :";
 cin>>s;

 bfs(s);
 return 0;

}



