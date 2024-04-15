#include<iostream>
using namespace std;
void selctionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            swap(arr[minIndex],arr[i]);
        }
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



int main (){
    int arr[]={23,12,34,56,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    selctionsort(arr,n);
     cout<<"sorted list"<<" ";
     print(arr,n);
}