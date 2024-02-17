// hierarchical inheritance
#include <iostream>
using namespace std;
class staff{
    protected:
    string code,name;

    public:
    void staffInfo(){
        cout << "Enter name:";
        cin >> name;
        cout << "Enter code:";
        cin >> code;
    }
    void staffDisplay(){
        cout << "Name:" << name << endl;
        cout << "Code:" << code << endl;
    }
};
class teacher:public staff{
    string subject,publication;

    public:
    void teachInfo(){
        cout << "Enter subject:";
        cin >> subject;
        cout << "Enter publication:";
        cin >> publication;
    }
    void teachDisplay(){
        cout << "Subject:" << subject << endl;
        cout << "Publication:" << publication << endl;
    }
};
class officer:public staff{
    char grade;
    public:
    void officerInfo(){
        cout << "Enter grade:";
        cin >> grade;
    }
    void officerDisplay(){
        cout << "Grade:" << grade << endl;
    }
};
class typist:public staff{
    int speed;
    float salary;

    public:
    void typistInfo(){
        cout << "Enter the speed of typist in words/min:";
        cin >> speed;
    }
    void typistDisplay(){
        cout << "Speed:" << speed << endl;
    }
};
int main(){
    int m,o,t;

    cout << "---Enter the information about teachers---" << endl;
    cout << "Enter the no. of techers:";
    cin >> m;
    teacher m1[m];
    for(int i=0;i<m;i++){
        m1[i].staffInfo();
        m1[i].teachInfo();
        cout << endl;
    }

    cout << "---Enter the information about officers---" << endl;
    cout << "Enter the no. of officers:";
    cin >> o;
    officer o1[o];
    for(int i=0;i<m;i++){
        o1[i].staffInfo();
        o1[i].officerInfo();
        cout << endl;
    }

    cout << "---Enter the information about typist---" << endl;
    cout << "Enter the no. of typist:";
    cin >> t;
    typist t1[t];
    for(int i=0;i<m;i++){
        t1[i].staffInfo();
        t1[i].typistInfo();
        cout << endl;
    }

    menu:
    cout << endl << "----Staff Database----" << endl;
    cout << " Choose category to display" << endl;
    cout << "1->Teacher" << endl;
    cout << "2->Officer" << endl;
    cout << "3->Typist" << endl;
    cout << "4->To end the program" << endl;

    int c;
    cout << endl << "Enter choice:";
    cin >> c;

    switch(c){
        case 1:   
        for(int i=0;i<m;i++){
            m1[i].staffDisplay();
            m1[i].teachDisplay();
        }
        break;

        case 2:
        for(int i=0;i<o;i++){
            o1[i].staffDisplay();
            o1[i].officerDisplay();
        }
        break;

        case 3:
        for(int i=0;i<o;i++){
            t1[i].staffDisplay();
            t1[i].typistDisplay();
        }
        break;

        case 4:
        goto end;
    }

    end:
    return 0;
}