<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,i;
  cin>>n;
  int fact=1;
	for(int i=n;i>0;i--){
    fact=fact*i;
  }
	cout<<fact<<endl; 
}
return 0;
=======
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,i;
  cin>>n;
  int fact=1;
	for(int i=n;i>0;i--){
    fact=fact*i;
  }
	cout<<fact<<endl; 
}
return 0;
>>>>>>> 5d34dce3d75f4a97b4ef226477f2c23687ef0738
}