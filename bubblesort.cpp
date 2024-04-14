#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"||";
    }
}
int main(){
int arr[]={32,21,22,34,56};
int n =sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,n);
cout<<"after sorting"<<endl;
print(arr,n);
}