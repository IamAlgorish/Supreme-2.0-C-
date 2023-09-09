#include<iostream>
using namespace std;
float KMtoMILE(int n){
    return n*0.6213712;
}

void printer_prime(int n , int j ){
   
    if(j>n){
        return;
    }

    int count = 0 ;
    for(int i = j ; i<=j ; i++){
        if(j%i==0){
            count++;
        }
    }
    if(count==2){
    cout<<j<<endl;
    }
    printer_prime(n,j+1);

}
int area_circle(int r){
    return (22/7)*r*r;
}
int facto(int n){
    if(n==1){
        return 1;
    }
    return n*facto(n-1);
}
int main(){
    int n; 
    cin >> n;
   // cout << area_circle(n);
    //cout<< facto(n);
    printer_prime(n ,1);
KMtoMILE(n);
}
