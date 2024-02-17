#include<fstream>
#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    s1="sahil Ansari";

    //writing inside file
    ofstream out;
    out.open("aaa.txt",ios::out);
    out<<"My name is "+s1;
    out.seekp(2);
    int x=out.tellp();
    cout<<"Output pointer position is at:"<<x<<endl;
    out.close();

    //Reading on console from file
    ifstream in;
    in.open("aaa.txt",ios::in);
    getline(in,s2);
    cout<<s2<<endl;
    in.seekg(5);
    int n=in.tellg();
    cout<<"Input pointer position is at:"<<n;
    in.close();
}
 