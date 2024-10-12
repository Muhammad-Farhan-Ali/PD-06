#include<iostream>
#include<iomanip>
using namespace std;

float calaculateHotelPriceApartment(string month,int stay);
float calaculateHotelPriceStudio(string month,int stay);

int main()
{
    string month;
    int stay;

    cout<<"Enter the month (May, June, July, August, September, October):";
    cin>>month;
    cout<<"Enter days of stay:";
    cin>>stay;

    float apartment=calaculateHotelPriceApartment(month,stay);
    float studio=calaculateHotelPriceStudio(month,stay);

    cout<<"Apartment: $"<<fixed<<setprecision(6)<<apartment<<endl;
    cout<<"studio: $"<<fixed<<setprecision(6)<<studio<<endl;

    return 0;
}
float calaculateHotelPriceApartment(string month,int stay)
{
    int disc=0.0;
    float amount_apartment;

    if(month=="May" || month=="October")
    {
        amount_apartment=65;
        if(stay>14)
        {
            disc=30;
        }
        else if(stay>7)
        {
            disc=5;
        }
    }
    else if(month=="June" || month=="September")
    {
        amount_apartment=68.70;
        if(stay>14)
        {
            disc=20;
        }
    }
    else if(month=="August" || month=="July")
    {
        amount_apartment=77;
    }

    if(stay>14)
    {
        disc=10;
    }

    return ((amount_apartment*stay)-((amount_apartment*stay)*disc/100.0));
}
float calaculateHotelPriceStudio(string month,int stay)
{
    int disc=0.0;
    float amount_studio;

    if(month=="May" || month=="October")
    {
        amount_studio=50;
        if(stay>14)
        {
            disc=30;
        }
        else if(stay>7)
        {
            disc=5;
        }
        
    }
    else if(month=="June" || month=="September")
    {
        amount_studio=75.20;
        if(stay>14)
        {
            disc=20;
        }
    }
    else if(month=="August" || month=="July")
    {
        amount_studio=76;
    }
    return ((amount_studio*stay)-((amount_studio*stay)*disc/100.0));
}