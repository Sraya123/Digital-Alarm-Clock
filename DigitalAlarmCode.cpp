#include<iostream>
#include<string.h>
#include<ctime>
#include<time.h>
#include<windows.h>

using namespace std;
void setalarmsound(){
    int i=350;
    while(i=i+4){
        Beep(i,500);
    }
}
void setalarm()
{
    int hour , mins , seconds;
    //Set the alarm time at formate hh:mm:ss for eg 00:01:30
    cout << "Set the Alarm Time at format [HH:MM:SS]: ";
    scanf("%d:%d:%d",&hour,&mins,&seconds);
    while(1)
    {
        /*When the condition satifies it will break out of the loop
        after it will produce a beep sound*/
    
        if (hour == 0 && mins == 0 && seconds == 0)
        {
            break;
        }
        if (seconds == 0 && mins ==0)
        {
            mins = 60;
            hour--;
        }
        if (seconds == 0)
        {
            seconds = 60;
            mins--;
        }
        system("cls");
        cout<<"Remaining Time: "<<hour<<":"<<mins<<":"<<seconds--;
        Sleep(1000);
    }
    
}
int main()
{
    time_t clock;
    time(&clock);
    char *current_local_time_date_year = ctime(&clock);
    current_local_time_date_year[strlen(current_local_time_date_year)-1] = '\0';
    //It will show you local time, current date, current day and current year
    cout << "Your Current Local Time " << current_local_time_date_year << endl;
    cout << endl;
    setalarm();
    setalarmsound();
}
