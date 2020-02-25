//Unit7_DDelgado_Task_1 Dr_T 2-24-2020 STRUCTs C++
#include <iostream>
using namespace std;
//declare structs above int main()
struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //safe space here for out toString() override 
};
 
 
int main() 
{
  timeOfDay t;
  t.Hour = 7;
  t.Minute = 11;
  t.Second = 17;  
  cout << "\nCurrent time: " << endl; //print current data in struct 
  cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  appDate L;
  L.dayOfMonth = 22;
  L.month = 5;
  L.year = 2001;
  cout << "\nDate of birth: " << endl;
  cout << L.month << "/" << L.dayOfMonth << "/" << L.year << endl;

  event eOne;
  eOne.eventName = " Birthday of Dr_T";
  eOne.isUrgent = true;
  //sent the event name 
  eOne.eventDate.dayOfMonth = 24;// instance.memberStruct.number Variable
  eOne.eventDate.month = 2;
  eOne.eventDate.year = 2020;
  //set the event time
  eOne.eventTime = t; //use data from t to populate eOne.eventTime 

  //print all elements of eOne to the screen 
  cout << "\nElements in the event: " << endl;
  cout << "Event Name: " << eOne.eventName << endl;


  string status = "";
  eOne.isUrgent = true;
  status = (eOne.isUrgent) ? "yes" : "no";
  cout << "Is the event urgent: " << status << endl;

  cout << "Day: " << eOne.eventDate.month << "/" 
                  << eOne.eventDate.dayOfMonth << "/"
                  << eOne.eventDate.year;

  cout << "\nTime: " << eOne.eventTime.Hour << "/" 
                  << eOne.eventTime.Minute << "/"
                  << eOne.eventTime.Second;


return 0;
}