#include<iostream>
using namespace std;

float calculate_amout(char service,int mins,int time);

int main()
{
    char service,time;
    int mins;
    float total_amount;

    cout<<"Enter the service code (P/p for Premium, R/r for regular): ";
    cin>>service;

    if(service=='p' || service=='P')
    {
        cout<<"Enter the time of call (D/d for Day, N/n for Night):";
        cin>>time;
    }

    cout<<"Enter the number of minutes:";
    cin>>mins;

    total_amount=calculate_amout(service,mins,time);

    if(service=='p' || service=='P')
    {
        cout<<"service type: Premium"<<endl;
    }
    else if(service=='r' || service=='R')
    {
        cout<<"service type: Regular"<<endl;
    }
    else
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    } 

    cout<<"Total minutes used: "<<mins<<endl;
    cout<<"Amount Due: $"<<total_amount<<endl;

    return 0;
}
float calculate_amout(char service,int mins,int time)
{
    float cost;
    int costMins;

    if(service=='r' || service=='R')
    {
        if(mins>50)                                    //first 50 mins free
        {
            costMins=mins-50;
            return (10.00)+(costMins*0.20);
        }
        else
        {
            return 0; 
        }
    }
    else if(service=='p' || service=='P')
    {
        if((time=='d' || time=='D') && mins>75)        //for 75 mins free 
        {
            costMins=mins-75;
            return (25.00)+(costMins*0.10);
        }
        else 
        {
            return 25.0;
        }

        if((time=='n' || time=='N') && mins>100)  //for 100 mins free
        {
            costMins=mins-7100;
            return (25.00)+(costMins*0.05);
        }
        else
        {
            return 10.0;
        }
    }
}