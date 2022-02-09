#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
float b;
cin>>t>>b;
if((t%5==0 && b-t-0.5>0)){
   cout << fixed << b-t-0.5 << endl; 
}
else
    {
        cout << fixed << b << endl;
    }
return 0;
}