#include<iostream>
using namespace std;
void printer(int a[] , int n ){
    for(int i = 0 ; i< n ; i++){
cout<< a[i]<<" ";
    }
}
void twopointer(int arr[] , int n){
    int l = 0;
for(int i = 0  ; i< n ; i++){
    if(arr[i]<0){
        swap(arr[l],arr[i]);
        l++;
    }
}
}
int main(){
    int arr[] = {23,-7,12,-10,-11,40,60};
    twopointer(arr , 7);
printer(arr , 7);
}