#include<iostream>
#include<algorithm>
using namespace std;
struct data{
    int profit;
    int weight;
};

bool sortData(struct data d1, struct data d2){
   return (d1.profit/d1.weight) > (d2.profit/d2.weight);
}

void fractionalKnapsack(struct data d[],int n,int capacity){
   sort(d,d+n,sortData);
   int temp_capacity = capacity;
   double profit = 0; 
   for(int i=0;i<n;i++){
    if(d[i].weight<=temp_capacity){
        temp_capacity -= d[i].weight;
        profit += d[i].profit;
    }
    else{
        profit = profit + (float(temp_capacity)/float(d[i].weight))*float(d[i].profit);
        break;
    }
   }
   cout<<"Max profit = "<<profit;
}


int main(){
    int n;
    cout<<"Enter the no of elements = ";
    cin>>n;
    int capacity;
    cout<<"Enter the bag capacity = ";  
    cin>>capacity;
    struct data d[n];
    for(int i = 0;i<n;i++){
        cout<<"\nEnter the profit = ";
        cin>>d[i].profit;
        cout<<"Enter the weight = ";
        cin>>d[i].weight;
        cout<<endl;
    }
    fractionalKnapsack(d,n,capacity);
}