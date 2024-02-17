#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class retail
{
    int n;
    string product[9];
    float mrp[9];
    public:
    int total;
    void showProduct()
    {
        cout<<"Listed product are:"<<endl;
        cout<<"Bread"<<"          MRP=49"<<endl;
        cout<<"Soap"<<"           MRP=29"<<endl;
        cout<<"Shampoo"<<"        MRP=199"<<endl;
        cout<<"Jam"<<"            MRP=299"<<endl;
        cout<<"Milk"<<"           MRP=39"<<endl;
        cout<<"Tea"<<"            MRP=99"<<endl;
        cout<<"Coffee"<<"         MRP=399"<<endl;
        cout<<"Snacks"<<"         MRP=19"<<endl;
    }
    void getProduct()
    {
        // cout<<"Enter the no of product you want to buy:";
        // cout<<endl;
        // {
        //     cin>>n;
        // }
        cout<<"Enter the product you want to buy:"<<endl;
        int i=0;
        total=0;
        while(i<9)
        {
            cin>>product[i];
            if(product[i]=="Bread"||product[i]=="bread")
            {
                mrp[i]=49;
                total=total+mrp[i];
            }
            else if(product[i]=="Soap"||product[i]=="soap")
            {
                mrp[i]=29;
                total=total+mrp[i];
            }
            else if(product[i]=="Shampoo"||product[i]=="shampoo")
            {
                mrp[i]=199;
                total=total+mrp[i];
            }
            else if(product[i]=="Jam"||product[i]=="jam")
            {
                mrp[i]=299;
                total=total+mrp[i];
            }
            else if(product[i]=="Milk"||product[i]=="milk")
            {
                mrp[i]=39;
                total=total+mrp[i];
            }
            else if(product[i]=="Tea"||product[i]=="tea")
            {
                mrp[i]=99;
                total=total+mrp[i];
            }
            else if(product[i]=="Coffee"||product[i]=="coffee")
            {
                mrp[i]=399;
                total=total+mrp[i];
            }
            else if(product[i]=="Snacks"||product[i]=="snacks")
            {
                mrp[i]=19;
                total=total+mrp[i];
            }
            else
            {
                mrp[i]=0;
                total=total+mrp[i];
            }
            i++;
        }
    }
    void printProduct()
    {
        int i=0;
        cout<<"Product purchased:"<<endl;
        while(i<9)
        {
            cout<<"Product="<<product[i]<<"       MRP="<<mrp[i]<<endl;
            i++;
        }
        cout<<"Total Amount="<<total;
    }
};
int main()
{
    retail r1;
    r1.showProduct();
    r1.getProduct();
    r1.printProduct();
return 0;
}