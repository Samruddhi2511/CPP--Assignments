#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

struct node 
{
    char data;
    node* left;
    node* right;
}*root;



node* postorder(node* r) 
{
    stack<node*> s1, s2;
    node* temp = r;
    s1.push(r);
    
    while (!s1.empty()) 
    {
        temp = s1.top();
        s1.pop();
        s2.push(temp);

        if (temp->left != NULL)
        {
            s1.push(temp->left);
        }
        if (temp->right != NULL) 
        {
            s1.push(temp->right);
        }
    }

    while (!s2.empty())
     {
        temp = s2.top();
        s2.pop();
        cout << temp->data << " ";
    }
    return r;
}



int main() 
{
    char pref[10];
    int len, i;
    
    stack<node*> s;
    cout << "enter prefix expression\n";
    cin >> pref;

    len = strlen(pref);
    node* nn = NULL;
    node* r = NULL;
    node* temp = NULL;
    node* t1 = NULL;
    node* t2 = NULL;

    for (i = len - 1; i >= 0; i--)
     {
        nn = new node;
        nn->left = NULL;
        nn->right = NULL;
        nn->data = pref[i];

        if (!isalpha(pref[i]))
         {
            t1 = s.top();
            s.pop();
            t2 = s.top();
            s.pop();

            nn->left = t1;
            nn->right = t2;
            s.push(nn);
        } 
        else
         {
            s.push(nn);
        }
    }

    r = s.top();
    postorder(r);

    return 0;
}






