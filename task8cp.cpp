#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyBallGames(string year,int holidays,int weekends);

int main()
{
    string year;
    int holidays,weekends;
    int play;

    cout<<"Enter year type:";
    cin>>year;
    cout<<"Enter number of holidays:";
    cin>>holidays;
    cout<<"Enter number of weekends:";
    cin>>weekends;

    play=calculateVolleyBallGames(year,holidays,weekends);

    cout<<play<<endl;

    return 0;
}
int calculateVolleyBallGames(string year,int holidays,int weekends)
{
    float playHoliday,playSatWeekend,playHomeWeekend;
    float satWeekend,homeWeekend;
    float playtime;

    homeWeekend=weekends;
    satWeekend=48-weekends;

    playHoliday=(2.0/3.0)*holidays;
    playSatWeekend=(3.0/4.0)*satWeekend;
    playHomeWeekend=(3.0/4.0)*homeWeekend;

    playtime=playHoliday+playSatWeekend+playHomeWeekend;

    if(year=="leap")
    {
        playtime=playtime+(playtime*15.0/100.0);
        return round(playtime);
    }
    else if(year=="normal")
    {
        return round(playtime);
    }

}