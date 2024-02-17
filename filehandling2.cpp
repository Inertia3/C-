#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // opening files using constructor and writing in it
    ofstream out("asample.txt",ios::out);
    // writing something on file
    string st;
    st="Sahil Ansari";
    out<<st;
    //opening file using constructor and reading it
    string st1;
    ifstream in("asample1.txt",ios::in);
    // in>>st1;
    // cout<<st1;
    //for multiple words;
    getline(in,st1);
    cout<<st1;
}