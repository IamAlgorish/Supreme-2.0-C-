#include<iostream>
using namespace std;
#include<math.h>

void extreme(int a[] , int n){
    for(int  i = 0 , j = n-1 ; i<j ; i++ , j--){
       cout << a[i]<<" "<<a[j]<<" ";
    }
}
void printer(int a[] , int  n){
    
    cout<< "Baby your array is  {"; 
    for(int i = 0 ; i< n ; i++){
        cout << a[i]<< "  ";
    }
    cout<<"}";
}
void reverser(int a[] , int n){
    int temp[n];
    for(int i = 0 ; i< n ; i++){
        temp[n-i-1] = a[i];

    }

    for(int i = 0; i<n;i++){
        a[i] = temp[i];
    }
     
     printer(a , n);
}
int minn(int a[] , int  n){
    int max =  INFINITY;
    for(int i = 0 ; i < n ; i++ ){
max = min(a[i],max);
    }
    return max;
}
void counter01(int a[] , int n){
    int zero = 0 , one = 0;
    for(int i = 0; i < n ; i ++ ){
        if(a[i]==0){
            zero++;
        }
        else if(a[i]==1){
            one++;
        }
    }
    cout<<"The no. of 0's in the array is "<< zero;
    cout<<"The no. of 1's in the array is "<< one;
}
int sum(int a [] , int n){
int sum = 0;
for(int i = 0 ; i< n ; i++){
sum = sum + a[i];
}
return sum;
}
int main (){
    int n;
cin >> n;
int a[n];
for(int i = 0 ; i < n ; i++){
    cin >>  a[i];
}

// cout << sum(a , n);
//  counter01( a , n);
//  cout << minn(a , n);
//  reverser(a ,n);
extreme(a , n);
 
}
