#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int n,a;
  cin>>n;
  if(n%4==0){
      a=n+1;
      cout<<a;
  }else{
      a=n-1;
      cout<<a;
  }

return 0;
}