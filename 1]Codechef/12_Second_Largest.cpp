#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;

while(t--){
  long long a,b,c;
  cin>>a>>b>>c;
  if(a>=b && b>=c || a<=b && b<=c){
      cout << b << endl;
    }
	else if(a>=c && c>=b || a<=c && b>=c){
        cout << c << endl;
    }
	else{
        cout << a << endl;
    }
  
}
return 0;

}