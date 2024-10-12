#include<iostream>
using namespace std;

string decideActivity(string temp,string humidity);

int main()
{
    string temp,humidity;

    cout<<"Enter temperature (warm or cold):";
    cin>>temp;
    cout<<"Enter humidity (dry or humid):";
    cin>>humidity;

    cout<<"Recommended activity: "<<decideActivity(temp,humidity)<<endl;

    return 0;
}
string decideActivity(string temp,string humidity)
{
    string activity;

    if(temp=="warm" && humidity=="dry")
    {
        activity="Play Tennis!";
    }
    else if(temp=="warm" && humidity=="humid")
    {
        activity="Swim!";
    }
    else if(temp=="cold" && humidity=="dry")
    {
        activity="Play Basketball!";
    }
    else if(temp=="cold" && humidity=="humid")
    {
        activity="Watch TV!";
    }
    else 
    {
        activity="Invalid input!";
    }

    return activity;
}