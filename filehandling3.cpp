#include<fstream>
#include<iostream>
using namespace std;
//using constructor
/*int main(){
    string s1,s2;
    s1="Sahil Ansari";
    //writing inside files
    ofstream out("aaa.txt",ios::out);
    out<<s1;
    out.close();
    //Reading from file on console
    ifstream in("def.txt",ios::in);
    getline(in,s2);
    cout<<s2;
    in.close();
}*/
//usiing member function

int main(){
    string s1,s2;
    s1="sahil Ansari\nThe Multitalanted kid";

    //writing inside file
    ofstream out;
    out.open("aaa.txt",ios::out);
    out<<"My name is "+s1;
    out.seekp(2);
    int x=out.tellp();
    cout<<"output pointer position is at:"<<x<<endl;
    out.close();

    //Reading on console from file
    ifstream in;
    in.open("aaa.txt",ios::in);
    while(in.eof()==0){
        getline(in,s2);
        cout<<s2<<endl;
    }
    in.seekg(5);
    int n=in.tellg();
    cout<<"Input pointer position is at:"<<n;
    in.close();
}
 