#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1 ;
        }
    }
    return 0 ;
}
int main()
{
    int arr[10]={2,4,3,5,6,7,9,8,0,4};
    cout<<"enter the search element"<<endl;
    int key;
    cin>>key;
    bool found =search(arr,10,key);
 if (found){
    cout<<"key is found"<<endl;}
 else{
    cout<<"key is not found";
    }
 

}