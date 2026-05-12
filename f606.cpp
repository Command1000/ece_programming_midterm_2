#include <bits/stdc++.h>
using namespace std;
int main(void){
int Q[55][55]={0};
int n,m,k;
int ct=0;
int u,v;
int min=2147483647;
cin>>n>>m>>k;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>Q[i][j];
	}
}

while(k--){
ct=0;
int flow[55][55]={0};
int p[55]={0};
for(int i=0;i<n;i++){
	cin>>p[i];
}

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		u=p[i];
		v=j;
		flow[u][v]+=Q[i][j];
	}
}

for(int u=0;u<m;u++){
	for(int v=0;v<m;v++){
	if(u==v){
		ct+=flow[u][v];
	}
	else{
		if(flow[u][v]<=1000){
			ct+=flow[u][v]*3;
		}
		else{
			ct+=3000+(flow[u][v]-1000)*2;
		}

	}
	}
}


if(ct<min){
	min=ct;
}
}

cout<<min;
	return 0;
}
