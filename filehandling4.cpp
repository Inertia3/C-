//for reading multiple lines froam a file we can use while loop, eof() and getline() function

#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string s1,s2;
    s1="Hello World!\nHow are you?\nAre you ready to witness me?";
    ofstream out;
    out.open("abc1.txt",ios::out);
    out<<s1;
    out.close();
    //reading from file
    ifstream in;
    in.open("abc1.txt",ios::in);
    //Reading multiple lines from file
    while(in.eof()==0){
        getline(in,s2);
        cout<<s2<<endl;
    }
    in.close();
}
