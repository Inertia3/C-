// #include<iostream>
// #include<fstream>

// using namespace std;
// class file_hand{
//     string name;
//     string age;
//     string roll_no;
//     public:
//     void get(string n,string a,string r){
//         name=n;
//         age=a;
//         roll_no=r;
//     }
//     void show(){
//         cout<<"Name-"<<name<<endl;
//         cout<<"Age-"<<age<<endl;
//         cout<<"Roll No-"<<roll_no<<endl;
//     }
// };
// int main(){
//     file_hand f0,f9;
//     // f0.show();
//     f0.get("Sahil Ansari","19","13150");
//     // f0.show();
//     ofstream f1;
//     f1.open("abc.txt",ios::out);
//     f1.write((char*)&f0,sizeof(f0));
//     f1.close();
//     ifstream f2;
//     f2.open("abc.txt",ios::in);
//     f2.read((char*)&f0,sizeof(f0));
//     cout<<"name="<<f0.name;
//     f2.close();
//     return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;
class student{
    public:
    string name;
    string age;
    string roll_no;
};
int main(){
    student s;
    s.name = "AK";
    s.age = "19";
    s.roll_no = "623";

    ofstream out("ak1.txt");
    out.write((char*)&s,sizeof(s));

    fstream in;
    in.open("ak1.txt",ios::in);
    in.read((char*)&s,sizeof(s));
    // cout <<s.name << endl << s.age << endl << s.roll_no << endl;
    in.close();

    in.open("ak2.txt",ios::out);
    in << "Name:" << s.name << endl;
    in << "Age:"<< s.age << endl;
    in << "Roll No:"<<s.roll_no << endl;

}
