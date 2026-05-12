#include <bits/stdc++.h>
using namespace std;
int main(void){
int box[25][25]={0};
int h,w,n,r,c,t,x;
cin>>h>>w>>n;
while(n--){
cin>>r>>c>>t>>x;
for(int i=0;i<h;i++){
	for(int j=0;j<w;j++){
		if(abs(i-r)+abs(j-c)<=t){
			box[i][j]+=x;
		}
	}

}
}
for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<box[i][j]<<" ";
  
      	}
cout<<'\n';
}




	return 0;
}
