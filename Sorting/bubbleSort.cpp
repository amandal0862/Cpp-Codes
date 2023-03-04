//c++ code for bubble sort
#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    print(arr, n);
}


int main(){
    int arr[] = {99,19,20,76,82,90,66,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    bubbleSort(arr, n);
}