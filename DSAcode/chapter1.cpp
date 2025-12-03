#include<iostream>
#include<string>
using namespace std;


struct node
{
   string name;

   int count;

   struct node *child[10];

}*root;


class tree
{
   public:
    int i,j,k;
   public:
   tree()
 { 
   root=NULL;
 }

void create();
void display();



};

void tree::create()
{


  root=new node;
  cout<<"enter book name: ";
  cin>>root->name;

  cout<<"enter number of chapter:";
  cin>> root->count;

   for( i=0;i<root->count;i++)
{
    root->child[i]=new node;
    cout<<"enter name of chapter:";
    cin>>root->child[i]->name;
    cout<<"enter no. of section:";
    cin>>root->child[i]->count;


    for(j=0;j<root->child[i]->count;j++)
    {
    
       root->child[i]->child[j]=new node;
       cout<<"enter section name:";
       cin>>root->child[i]->child[j]->name;
       cout<<"enter no. of subsections:";
       cin>>root->child[i]->child[j]->count;

       for( k=0;k<root->child[i]->child[j]->count;k++ )
       {
        root->child[i]->child[j]->child[k]=new node;
        cout<<"enter name of subsection:";
        cin>>root->child[i]->child[j]->child[k]->name;

      
       }
    }

}
   

}


void tree::display()

{

   

    for( i=0;i<root->count;i++)
    {   
        cout<<root->child[i]->name;
        
        for( j=0;j<root->child[i]->count;j++)
     {

          cout<<root->child[i]->child[j]->name;
    
         for(int k=0;k<root->child[i]->child[j]->count; k++)

      {
 
          cout<<root->child[i]->child[j]->child[k]->name;
      }
    }
  }

   
}  




int main()
{
  tree t;
t.create();
t.display();

return 0;
}










