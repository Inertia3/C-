#include<iostream>
#include <math.h>
using namespace std;
class swoop{
    public:
    int n,digits,first,last,swap;
    int a,b,c;
    void calc()
    {
        cout<<"Enter a number: ";
        cin>> n;
        int p=n;
        digits = (int)log10(n);
        cout<<digits<<endl;
        first = n / pow(10, digits);
        last = n % 10;
        cout<< "first="<<first<<" "<<"last="<<last<< endl;
        //mid = (n-first*pow(10,digits)-last)/10;
        a=first*(pow(10,digits));
        cout<<"a="<<a<<endl;
        b=n%a;
        c=b/10;
        cout<<"c="<<c<<endl;
        swap = (last *pow(10, digits)) + (c*10)+first ;
        cout<<"Number after swap: "<<swap<< endl;
    }
};
int main(){
    swoop obj;
    obj.calc();
    return 0;
}