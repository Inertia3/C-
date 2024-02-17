#include<iostream>
using namespace std;
class outside
{
    public:
    class inside
    {
        int a;
        public:
        void get(int x)
        {
            a=x;
        }
        void show()
        {
            // for(int i=1;i<11;i++)
            // {
            //   cout<<a<<endl;  
            // }
            cout<<a<<endl;
        } 
    };
};
int main()
{
    outside::inside i;
    i.get(4);
    i.show();
    return 0;
}