#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x, y;
    cin >> x >> y;
        
    if (x == 0 && y % 2 == 0){
        cout << "Yes" << endl;
    }
    else if (x == 0 && y % 2 != 0){
        cout << "NO" << endl;
    }
    else if ((x + (2 * y)) % 2 ==0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
return 0;
}