#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream f_file;
f_file.open("abc",ios::out);
cout<<f_file.tellp()<<endl;
f_file<<"Hello world";
cout<<f_file.tellp()<<endl;
f_file.seekp(-5,ios::end);
cout<<f_file.tellp()<<endl;
f_file<<"Hiiii!"<<endl;
cout<<f_file.tellp()<<endl;
f_file.seekp(0,ios::beg);
//f_file<<"How are you!";
cout<<f_file.tellp()<<endl;
cout<<f_file.seekg(0,ios::beg);
cout<<f_file.tellg();
f_file.close();
return 0;
}