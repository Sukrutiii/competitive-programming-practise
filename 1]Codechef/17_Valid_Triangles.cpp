#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==0 || b==0 || c==0 || a+b+c!=180){
    cout << "NO" << endl;
  }
  else{
    cout << "YES" << endl; 
  }
}
return 0;
}