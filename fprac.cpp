// // Swapping using a single class

#include<iostream>
using namespace std;

class swapping{
    int a;
    int b;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend swapping swap(swapping s0){
        swapping s2;
        int z;
        z=s0.a;
        s2.a=s0.b;
        s2.b=z;
        return s2;
    }
};
int main(){
    swapping s3,s4,s5;
    s3.get(4,5);
    s3.show();
    s4=swap(s3);
    s4.show();
}

// //Swapping using two different classes

// #include<iostream>
// using namespace std;

// class B;
// class A{
//     int a;
//     public:
//     void get(int x){
//         a=x;
//     }
//     void show(){
//         cout<<"a="<<a<<endl;
//     }
//     friend void swap( A a1, B b1);
// };
// class B{
//     int b;
//     public:
//     void get(int y){
//         b=y;
//     }
//     void show(){
//         cout<<"b="<<b<<endl;
//     }
//     friend void swap( A , B );
// };
// void swap(A a1, B b1){
//     int z;
//     z=a1.a;
//     a1.a=b1.b;
//     b1.b=z;
//     cout<<"a="<<a1.a<<endl;
//     cout<<"b="<<b1.b<<endl;
// }
// int main(){
//     A a2;
//     B b2;
//     a2.A::get(4);
//     b2.get(6);
//     a2.show();
//     b2.show();
//     swap(a2,b2);
// }
