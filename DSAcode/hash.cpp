#include <iostream>
#include <string> 
using namespace std;

struct person
{
    string name;
    long int telephone;
};


class htable 
{
   public:

    int size, n,t,key,found;
    struct person h[10];


    void atstart() 
    {
        for (int i = 0; i < size; i++) 
        {
            h[i].name = "\n";
            h[i].telephone = 0;
        }
        
    }

    void insert()
     {
        string name; 
        cout << "Enter the name of person:";
        cin>>name;
        cout<<"enter telephone number:";
        cin>>t; 

        int sum=0;
        for (int i=0;i<name.length();i++)
         { 
            sum=int(name[i]); 
            sum++;
        }

        key=sum%size;
        int i = key;
        do {
            if (h[i].name == "\n")
             { 
                h[i].name = name;
                h[i].telephone= t;
                break;
            }
            i = (i+1)%size; 
        } while(i != key); 
    }

void display()
{

cout<<"\n";

for (int i =0;i<size;i++)
 {
            cout<<"\n";
            cout<<h[i].name<< "";
            cout<<h[i].telephone;
        }
}




void search(long int t)
{

int i=key;

 do {

            if (h[i].telephone==t)
             {
            
                cout << "Found: " ;
                 cout<<"\n"<< h[i].name << "Telephone: ";
                 cin>> h[i].telephone;
                 found==1;
                break;
            }
            i = (i + 1) % size;

        } while (i != key);

        if (!found) 
        {
            cout << "Data not found." << endl;
        }
    


}
};


int main() 
{


htable ht;
ht.atstart();
int n;
 int el;

cout<<"how many persons data you want to enter";
cin>>n;
for(int i=0;i<n;i++)

    ht.insert();
    ht.display();

cout<<"Enter telephone to search";
cin>>el;
ht.search(el);


return 0;
}
