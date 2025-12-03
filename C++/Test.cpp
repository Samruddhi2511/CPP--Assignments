#include <iostream>
#include <stdexcept>
using namespace std;

class Vector 
{
public:
    Vector();  
    Vector(int init_size);  
    Vector(int init_size, int init_value);  
    

    void show() const;  
    int get(int index) const;  
    void set(int index, int init_value);  
    int size() const;  
    void resize(int new_size);  

private:
    int* arr;  
    int n;  
};

Vector::Vector() : arr(nullptr), n(0) 
{

}

Vector::Vector(int init_size) : n(init_size) 
{
    if (n < 0) 
    {
        cout<<"Size cannot be negative";
    }
    arr = new int[n];  
}

Vector::Vector(int init_size, int init_value) : n(init_size) 
{
    if (n < 0) 
    {
       cout<<"Size cannot be negative";
    }
    arr = new int[n];
    for (int i = 0; i < n; i++) 
    {
        arr[i] = init_value;  
    }
}



void Vector::show() const 
{
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Vector::get(int index) const 
{
    if (index < 0 || index >= n) 
    {
        cout<<"Index out of range";
    }
    return arr[index];
}

void Vector::set(int index, int init_value) 
{
    if (index < 0 || index >= n) 
    {
        cout<<"Index out of range";
    }
    arr[index] = init_value;
}

int Vector::size() const 
{
    return n;
}

void Vector::resize(int new_size) 
{
    if (new_size < 0) 
    {
        cout<<"size cannot be negative";
    }

    int* new_arr = new int[new_size];  
    for (int i = 0; i < (new_size < n ); i++) 
    {
        new_arr[i] = arr[i];  
    }  
    arr = new_arr;  
    n = new_size;  
}

void Test() 
{
    Vector v1;
    Vector v2(5);
    Vector v3(5, 100);
    v1.show();
    v2.show();
    v3.show();
    
    
    v1.resize(3);
    v1.set(0, 50);
    v1.set(1, 60);
    v1.set(2, 70);
    
    v1.show();
    cout << "Size of v1: " << v1.size() << endl;
    v1.resize(10);
    v1.show();
}

int main() 
{
    Test();
    return 0;
}
