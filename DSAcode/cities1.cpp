#include <iostream>
#include <string>
using namespace std;

int g[10][10], visited[10], n;
string city[10];
int v;
void dfs(int v);

int main()
 {
    int flag = 0;
    int i, j;
    char ch;
    cout << "enter no of city: ";
    cin >> n;

    for (i = 0; i < n; i++) 
    {
        visited[i] = 0;
    }

    cout << "enter " << n << " city names: ";
    for (i = 0; i < n; i++)
    {
        cin >> city[i];
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            g[i][j] = 0;
        }
    }

    do {
        string s, d;
        int t;
        int i, j;
        cout << "enter source city: ";
        cin >> s;
        i = 0;
        while (city[i] != s) 
        {
            i++;
        }

        cout << "enter destination city: ";
        cin >> d;
        j = 0;
        while (city[j] != d)
        
         {
            j++;
        }

        cout << "enter time to reach destination city: ";
        cin >> t;

        g[i][j] = t;
        g[j][i] = t;

        cout << "do you want to continue (y/n): ";
        cin >> ch;
    } while (ch == 'y');

    dfs(0);

    for (i = 0; i < n; i++) 
    {
        if (visited[i] == 0) 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    
    
    {
        cout << "Graph is connected";
    } else 
    
    {
        cout << "Not connected";
    }
}

void dfs(int v) 
{
    cout<<v<<"->";
    int i;
    cout << v;
    visited[v] = 1;
    for (i = 0; i < n; i++)
     {
        if (g[v][i] > 0 && visited[i] == 0) 
        {
            dfs(i);
        }
    }
}
