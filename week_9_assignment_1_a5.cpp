#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,1,2,3,4,5};
    int n = 6;
    int counter = -1;
    for(int i =0; i<n-1; i++){
        bool flag = true;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        counter++;
        if(flag) break;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(counter==1) cout<<"Nearly sorted"<<endl;
    else if(counter==0) cout<<"Sorted Already"<<endl;
}