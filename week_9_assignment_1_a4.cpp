#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,34,56,1,5,4,7,8,3};
    int n = 9;
    for(int i =0; i<n-1; i++){
        bool flag = true;
        for(int j = n-1; j>i; j--){
            if(arr[j]>arr[j-1]) {
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}