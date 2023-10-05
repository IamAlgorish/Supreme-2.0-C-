#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int arr[]={1,2,3,4,5,7};
  cout<<arr[5]<<endl; //both same 
  cout<<5[arr]; //both same
/*
arr[5] = *[arr+5] i.e *(5+arr) which is
equal to 5[arr];
*/
    return 0;
}
