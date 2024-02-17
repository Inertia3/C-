//creating multiple files and doing reading and writing operations on them
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
    // string s1,s2;
    // s1="Sahil Ansari\nAnsh Kant\nUttam Sharma\n";
    // s2="Scientist\nProgrammer\nAthelet";
    const int a=100;
    char line[a];
    ofstream fout;
    fout.open("employee.txt");
    fout<<"Sahil Ansari\n";
    fout<<"Ansh Kant\n";
    fout<<"Ayush Mayank\n";
    fout.close();
    fout.open("designation.txt");
    fout<<"Astronomer\n";
    fout<<"programmer\n";
    fout<<"Wing Commander\n";
    ifstream fin;
    fin.open("employee.txt",ios::in);
    cout<<"Contents of employee.txt"<<endl;
    while(fin){
        fin.getline(line,a);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("designation.txt",ios::in);
    cout<<"Contents of Designation.txt"<<endl;
    while(fin){
        fin.getline(line,a);
        cout<<line<<endl;
    }
    fin.close();
}

    //Reading two files simultaneously
//     ifstream fin1, fin2;
//     fin1.open("employee.txt");
//     fin2.open("designation.txt");
//     for(int i=0;i<=3;i++){
//         if(fin1.eof()!=0){
//             cout<<"Exit from employee file:";
//             exit(1);
//         }
//         fin1.getline(line,a);
//         cout<<line<<" is a "<<endl;
//         if(fin2.eof()!=0){
//             cout<<"Exit from designation file:";
//             exit(1);
//         }
//         fin2.getline(line,a);
//         cout<<line<<endl;
//     }
// }