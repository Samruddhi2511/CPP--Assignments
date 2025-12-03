//dfs algorithm using adjacency matrix

#include<iostream>
#include<vector>
#include<string>
#define max_size 10
using namespace std;

//global variables declaration

int n; //number of nodes from user

int g[max_size][max_size]; // matrix to store the edges in the graph

string cities[max_size]; //used to store name of the cities

// vector is used for checking if node of the graph is already visited or not, initially vector assigned to 0;
vector<int>visited(max_size,0); 

//function to check if node if already visited or not
bool isVisited(int node){
	if(visited[node]==1)
		return true;
	return false;
}

//dfs alogorithm for visiting the graph node recursively
void DFS(int v){
	cout<<cities[v]<<"->";
	visited[v] = 1;
	
	for(int i=0;i<n;i++){
		if(g[v][i] !=0 && !isVisited(i)){
			DFS(i);
		}
	}

}

// main function
int main(){ 

	int v;
	
	//input number of nodes form the user
	cout<<"how many cities do you want to enter : ";
	cin>>n;
	cout<<"Enter name of the cities : \n";
	for(int i=0;i<n;i++){
		cout<<"Enter city "<<i+1<<": ";
		cin>>cities[i];
	}
	// n input nodes or edges betn nodes given by the user
	cout<<"Enter time if path available otherwise 0 :";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=j){
				g[i][j] = 0;
				continue;
			}
			
			cout<<"\n"<<cities[i]<<" -> "<<cities[j]<<" : ";
			cin>>g[i][j];
			g[j][i] = g[i][j];
		}
	}
	
	//input starting vertex from user
	cout<<"\nEnter city number from you want to start DFS : ";
	cin>>v;
	
	DFS(v);
	cout<<endl;
	int flag=0;
	for(int i=0;i<n;i++){
		if(visited[i]==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Graph is Connected...\n";
	}
	else{
		cout<<"Graph is Not connected...\n";
	}
return 0;
}
