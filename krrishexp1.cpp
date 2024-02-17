#include<iostream>
using namespace std;
int main()
{
    int size,element,index=0;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be inserted: "<<endl;
    cin>>element;
    cout<<"Before insertion: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    while(index<size && arr[index]<element){
        index++;
    }
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }size++;
    arr[index]=element;
    cout<<"After insertion: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}