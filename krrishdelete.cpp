#include<iostream>
using namespace std;
int main()
{
    int size,position;
    int i=0;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the position to delete element: "<<endl;
    cin>>position;
    cout<<"Before deletion: "<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(i=0;i<size;i++){
        if(i==position-1){
            break;
        }
    }
    if(i==size){
        return size;
    }
    for(int j=i;j<size;j++){
        arr[j]=arr[j+1];
    }size--;
    cout<<"After deletion: "<<endl;
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
return 0;
}