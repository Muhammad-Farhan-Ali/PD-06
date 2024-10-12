#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

string checkStudentstatus(int examHours,int examMins,int studentHours,int studentMins);

int main()
{
    int examHours,examMins,studentHours,studentMins;

    cout<<"Enter Exam starting time (hours):";
    cin>>examHours;
    cout<<"Enter Exam starting time (mins):";
    cin>>examMins;
    cout<<"Enter student hour of arrival:";
    cin>>studentHours;
    cout<<"Enter student minutes of arrival:";
    cin>>studentMins;

    cout<<checkStudentstatus(examHours,examMins,studentHours,studentMins)<<endl;

    return 0;
}
string checkStudentstatus(int examHours,int examMins,int studentHours,int studentMins)
{
    if(studentHours==examHours)
    {
       if(studentMins==examMins)
       {
        return "On Time\n";
       } 
       else if(studentMins>examMins)
       {
        return "Late!\n"+to_string(studentMins-examMins)+" mins after start!";
       }
       else if((studentMins<examMins) && (examMins-studentMins)<30)
       {
        return "On Time!\n"+to_string(examMins-studentMins)+" mins before start!";
       }
       else if((studentMins<examMins) && (examMins-studentMins)>30)
       {
        return "Early!\n"+to_string(examMins-studentMins)+" mins before start!";
       }
    }
    else if(studentHours>examHours)
    {
        if(studentMins==examMins)
       {
        return "Late!\n1:00 hour after start!";
       } 
       else if((studentMins>examMins) && (studentMins-examMins)<30)
       {
        return "Late!\n"+to_string((studentHours-examHours)*60-(studentMins-examMins))+" mins after start!";
       }
       else if((studentMins>examMins) && (studentMins-examMins)>=30)
       {
        return "Late!\n"+to_string(studentHours-examHours)+":"+to_string(studentMins-examMins)+" hours after start!";
       }
       else if((studentMins<examMins))
       {
        return "Late!\n"+to_string((studentHours-examHours)*60-(examMins-studentMins))+" mins sfter start!";
       }
    }
    else if(studentHours<examHours)
    {
    if(studentMins==examMins)
       {
        return "Early!\n1:00 hour before start!";
       } 
       else if((studentMins>examMins) && (studentMins-examMins)<=30)
        {
        return "On Time!\n"+to_string((examHours-studentHours)*60-(studentMins-examMins))+" mins before start!";
       }
       else if((studentMins>examMins) && (studentMins-examMins)>30)
       {
        return "Early!\n"+to_string((examHours-studentHours)*60-(studentMins-examMins))+" mins before start!";
       }
       else if((studentMins<examMins))
       {
        return "Early!\n"+to_string(examHours-studentHours)+":"+to_string(examMins-studentMins)+" mins before start!";
       }
    }
}