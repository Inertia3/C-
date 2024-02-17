#include<iostream>
using  namespace std;

class overloading{
    int a;
    public:
    void get(int x){
        a=x;
    }
    void show(){
        cout<<"a="<<a<<endl;
    }
    //member function
//     overloading operator -()
//     {
//         overloading o9;
//         o9.a=-a;
//         return o9;
//     }
//friend function
friend overloading operator-(overloading o8){
    overloading o9;
    o9.a=-(o8.a);
    return o9;
}
};
int main(){
    overloading o1,o2;
    o1.get(5);
    cout<<"Before Overloading:"<<endl;
    o1.show();
    -o1;
    cout<<"after overloading:"<<endl;
    o1.show();


}