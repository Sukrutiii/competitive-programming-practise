<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
int a, b, diff, max=0, winner, temp, s1=0, s2=0;
while(t--){
  cin>>a>>b;
  s1=s1+a;
  s2=s2+b;
  if(s1>s2) {
   diff=s1-s2; 
   temp=1;
  }
  else {
   diff=s2-s1; 
   temp=2;
  }
  if(diff>max) {
   max=diff;
   winner=temp;
  }
}
cout<<winner<<" "<<max;
return 0;
=======
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
int a, b, diff, max=0, winner, temp, s1=0, s2=0;
while(t--){
  cin>>a>>b;
  s1=s1+a;
  s2=s2+b;
  if(s1>s2) {
   diff=s1-s2; 
   temp=1;
  }
  else {
   diff=s2-s1; 
   temp=2;
  }
  if(diff>max) {
   max=diff;
   winner=temp;
  }
}
cout<<winner<<" "<<max;
return 0;
>>>>>>> 5d34dce3d75f4a97b4ef226477f2c23687ef0738
}