#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream f_file;
    f_file.open("abc",ios::out);
    f_file<<"Hello World";
}