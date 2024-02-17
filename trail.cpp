// 15 Feb 2023
#include <iostream>
using namespace std;
class student{
    int arr[20];
    float avg,sum;
    int n;
    public:
    void input(){
        sum = 0;
        cout << "Enter the no. of subjects:";
        cin >> n;
        cout << "Enter the marks out of 100:";
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum  = sum + arr[i];
        }
    }
    void show(){
        avg = sum / n;
        cout << "Average marks of student is:" << avg << endl;
    }
};
int main(){
    student s1;
    s1.input();
    s1.show();
}