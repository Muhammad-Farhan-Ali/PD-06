#include<iostream>
using namespace std;

string checkPointPosition(int h,int x,int y);

int main()
{
    int h,x,y;
    string result;

    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter x coordinate:";
    cin>>x;
    cout<<"Enter y coordinate:";
    cin>>y;

    result=checkPointPosition(h,x,y);

    cout<<result<<endl;

    return 0;
}
string checkPointPosition(int h,int x,int y)
{
    if((x==0 && y<=h) || (y==0 && x<=h*3) || (y<=h && x==h*3) || (x==h && (y>=h && y<=h*4)) || (x==h*2 && (y>=h && y<=h*4)))
    {
        return "Border!";
    }
    else if((y<h && x<h*3) || ((x>h && x<h*2) && (y>h && y<h*4)))
    {
        return "Inside!";
    }
    else
    {
        return "Outside!";
    }
}