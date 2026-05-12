#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,m;
cin>>n>>m;
bool stay=false;
int box[45][45]={0};
int ct=0;
int ctv;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>box[i][j];
	}
}
while(!stay){
	stay=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ctv=box[i][j];
			if(ctv==-1){
				continue;
			}
			for(int k=i+1;k<n;k++){
				if(box[k][j]==-1){
					continue;
				}	
				if(box[k][j]==ctv){
					ct+=ctv;
					box[i][j]=-1;
					box[k][j]=-1;
					stay=false;
				}
			break;
			}
                        for(int k=j+1;k<m;k++){
				if(box[i][k]==-1){
					continue;
				}
				if(box[i][k]==ctv){
					ct+=ctv;
					box[i][k]=-1;
					box[i][j]=-1;
					stay=false;
				}
			break;
                        }
		}
	}
}


cout<<ct;

	return 0;
}
