#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  if(a>b){
    cout<<a<<endl;
    cout<<a+b<<endl;
  }else{
      cout<<b<<endl;
      cout<<a+b<<endl;
  }
}
return 0;

}