//Name: Nicholas Otieno
//ADM BCS-05-0046/2026
//University Scholarship Awards

#include<iostream>
using namespace std;
int main()
    {
        //User enters Student Name, Exam marks, attendance percentage
        string name;
        int marks, attendance;
    cout<<"\tUniversity Scholarship Awards\n" <<endl;
    cout<<"Enter Student Details" <<endl;
    cout <<"Name: ";
    getline( cin,name );
    cout <<"Marks: ";
    cin>>marks ;
    cout <<"attendance: ";
    cin>> attendance;

        //scholarship eligibility score >=70( attendance>=80 above) score>=50(>=85) below 50
        //full scholarship, Partial scholarship
    string scholarship_status;
    if (marks>=70)
        {
            if (attendance>=80){scholarship_status="Full Scholarship";}

            else{scholarship_status="Partial Scholarship";}
        }
    else if (marks>=60)
        {
            if (attendance>=85){scholarship_status="Full Scholarship";}

            else{scholarship_status="Partial Scholarship";}
        }
    else
        {
            scholarship_status="No Scholarship";
        }


        //student name and scholarship status
    cout<<"Student Name: "<<""<<name<<"\n"
        <<"Student Marks: "<<marks<<"\n"
        <<"Attendance Percentage: "<<attendance<<"%\n"
        <<"Scholarship Status: "<<scholarship_status<<"\n"   ;

    return 0;
    }
