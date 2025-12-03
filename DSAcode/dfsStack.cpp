#include<iostream>
#include<stack>
using namespace std;
int s,gr[10][10],v[10],n,var;
void dfs(int s);
int main(){
	
	int s;
	cout<<"Enter how many nodes in your graph";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cin>>gr[i][j];
	}
}
for(int i=1;i<=n;i++){
	v[i]=0;
}
cout<<"Enter start node";
cin>>s;
dfs(s);
	return 0;
}
void dfs(int s){
stack<int>stk;
stk.push(s);
v[s]=1;
while(!stk.empty()){
	var=stk.top();
	stk.pop();
	cout<<var<<"->";
	for(int i=1;i<=n;i++){
		if(gr[var][i]==1 && v[i]==0){
			v[i]=1;
			stk.push(i);
		}
	}
	
}	
}
