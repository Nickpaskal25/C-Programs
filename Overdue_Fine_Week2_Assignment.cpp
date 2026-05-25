//Name: Nicholas Otieno
//ADM: BCS-05-0046/2025
//task 1 calculate book overdue,charge fine.
#include<iostream>
using namespace std;
int main() {
    cout<<"\tLIBRARY CHARGES/BOOK OVERDUE FINE";

    int BookId, Due_Date, Return_Date ;

    //1.input from user(Book ID, Due Date, Return Date ) all ints
    cout<<"\nEnter BookId, Due_Date, Return_Date respectively."
          "\n Press enter or spacebar after every input \n";
    cin>>BookId >> Due_Date >> Return_Date;

    //2 calculate overdue= ReturnDate - DueDate
    int Over_Due = Return_Date-Due_Date;

    //3 if else for fine rates: Fine rates <=7 20, <=14 50, >=15 100.
    int Fine_Rate;
    if (Over_Due<=0)
        {
            Fine_Rate=00;
        }
    else if (Over_Due <=7 )
        {
         Fine_Rate=20;
        }
    else if ((Over_Due<=14))
        {
         Fine_Rate=50;
        }
    else if ((Over_Due>=15))
        {
         Fine_Rate=100;
        };

    //4 Output (BookID, DueDate, ReturnDate, DaysOverdue, FineRate,FineAmount)
    cout<<"\n\t\t !!FINAL OUTPUT!!";
    cout<<"\n You Entered: "
    <<"\n\tBookId: "<<BookId
    <<"\n\tDue_Date: "<< Due_Date
    <<"\n\tReturn_Date: "  << Return_Date
    <<"\n\tDays Overdue: "<<Over_Due<<"days"
    <<"\n\tFine_Rate: Ksh."<<Fine_Rate;
    return 0;
}
