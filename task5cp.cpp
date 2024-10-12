#include<iostream>
using namespace std;

float price(string fruit,string day,int quantity);

int main()
{
    string fruit;
    string day;
    int quantity;

    cout<<"Enter fruit name:";
    cin>>fruit;
    cout<<"Enter day of week (e.g. Monday, Tuesday etc):";
    cin>>day;
    cout<<"enter quantity:";
    cin>>quantity;

    float total=price(fruit,day,quantity);
    if(total!=0)
    {
    cout<<total<<endl;
    }

    return 0;
}
float price(string fruit,string day,int quantity)
{
    float cost;

    if(day=="Sunday" || day=="Saturday")
    {
        if(fruit=="banana")
        {
            cost=2.70;
        }
        else if(fruit=="apple")
        {
            cost=1.25;
        }
        else if(fruit=="orange")
        {
            cost=0.90;
        }
        else if(fruit=="grapefruit")
        {
            cost=1.60;
        }
        else if(fruit=="kiwi")
        {
            cost=3.00;
        }
        else if(fruit=="pineapple")
        {
            cost=5.60;
        }
        else if(fruit=="grapes")
        {
            cost=4.20;
        }
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")
    {
        if(fruit=="banana")
        {
            cost=2.50;
        }
        else if(fruit=="apple")
        {
            cost=1.20;
        }
        else if(fruit=="orange")
        {
            cost=0.85;
        }
        else if(fruit=="grapefruit")
        {
            cost=1.45;
        }
        else if(fruit=="kiwi")
        {
            cost=2.70;
        }
        else if(fruit=="pineapple")
        {
            cost=5.50;
        }
        else if(fruit=="grapes")
        {
            cost=3.85;
        }
    }
    else
    {
        cout<<"error"<<endl;
        cost=0;
    }
    return quantity*cost;
}