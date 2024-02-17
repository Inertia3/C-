#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the no of Subjects:";
    cin>>n;
    float *ptr=new float[n];
    float *ptr1=ptr;
    cout<<"Enter the marks in each subject:";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
        sum=sum+ptr[i];
    }
    cout<<"Marks of "<<n<<" subjects are: ";
    for(int i=0;i<n;i++){
        cout<<" "<<ptr1[i];
    }
    cout<<endl;
    cout<<"Sum of marks of "<<n<<" subjects is:"<<sum;
}