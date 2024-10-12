#include<iostream>
using namespace std;

float calculateAverage(int english,int maths,int chemistry,int socialScience,int biology);
string calculateGrade(float average);

int main()
{
    string name,grade;
    int english,maths,chemistry,socialScience,biology;
    float average;
    
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter marks in English (/100):";
    cin>>english;
    cout<<"Enter marks in Maths (/100):";
    cin>>maths;
    cout<<"Enter marks in Chemistry (/100):";
    cin>>chemistry;
    cout<<"Enter marks in Social Science (/100):";
    cin>>socialScience;
    cout<<"Enter marks in Biology (/100):";
    cin>>biology;

    average=calculateAverage(english,maths,chemistry,socialScience,biology);
    grade=calculateGrade(average);

    cout<<"Student name: "<<name<<endl;
    cout<<"Percentage: "<<average<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;

    return 0;
}
float calculateAverage(int english,int maths,int chemistry,int socialScience,int biology)
{
    float average=((english+maths+chemistry+socialScience+biology)/500.0)*100.0;
    return average;
}
string calculateGrade(float average)
{
    if(average<=100 && average>=90)
    {
        return "A+";
    }
    if(average<90 && average>=80)
    {
        return "A";
    }
    if(average<80 && average>=70)
    {
        return "B+";
    }
    if(average<70 && average>=60)
    {
        return "B";
    }
    if(average<60 && average>=50)
    {
        return "C";
    }
    if(average<=50 && average>=40)
    {
        return "D";
    }
    if(average<40)
    {
        return "F";
    }
}