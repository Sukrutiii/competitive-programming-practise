#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x,y,z;
  cin>>x>>y>>z;
  if(y-x>z*2){
      cout<<"no"<<endl;
  }
  else{
      cout<<"yes"<<endl;
  }
}
return 0;

}