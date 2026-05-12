#include <bits/stdc++.h>
using namespace std;
int main(void){
int box[25][6]={
	{1,2,3,4,5,6}
};

int n,m,a,b;
cin>>n>>m;
for(int i=1;i<=n;i++){
	for(int j=0;j<6;j++){
		box[i][j]=box[0][j];
	}
}
while(m--){
cin>>a>>b;
if(a>0&&b>0){
	swap(box[a],box[b]);
}
if(b==-1){
	swap(box[a][0],box[a][2]);
        swap(box[a][2],box[a][5]);
        swap(box[a][5],box[a][3]);
}
if(b==-2){
        swap(box[a][0],box[a][4]);
        swap(box[a][4],box[a][5]);
        swap(box[a][5],box[a][1]);
}

}
for(int i=1;i<=n;i++){
	cout<<box[i][0]<<" ";
}
	return 0;
}
