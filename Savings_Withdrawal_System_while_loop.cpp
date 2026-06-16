///Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 4 Activity: Loops

/*
Task 2: Savings Withdrawal System (while loop)
A mobile money agent wants to create a simple system that allows customers to withdraw
money repeatedly until they choose to stop. Write a C++ program that performs the
following tasks:
i. Declares a variable to store account balance and withdrawal amount.
ii. Uses a while loop to allow repeated withdrawals as long as the balance is
sufficient.
iii. After each withdrawal:
? Deducts the amount from the balance
? Displays the remaining balance
iv. The loop should stop when:
? The withdrawal amount is greater than the balance, OR
? The balance becomes zero
 */
#include <iostream>
using namespace  std;

int main()
  {
    cout <<"\tSavings Withdrawal System " <<endl;
    double acc_Bal = 40000, Withdraw_Amt,New_Balance;


    int i = 0;
    while ( i >= 0) {
        cout <<"\n Enter amount to withdraw" <<endl;
        cin >> Withdraw_Amt;

        if (Withdraw_Amt > acc_Bal or acc_Bal == 0) {
            cout <<"Please Try A lower amount";
        }

        else {
            New_Balance =  acc_Bal - Withdraw_Amt;

            cout<<"\n\tYour Acc Balance Was Ksh."<<acc_Bal
               <<"\n\tYou have Withdrawn Ksh."<<Withdraw_Amt
               <<"\n\tYour New balance is Ksh."<<New_Balance
              ;
            acc_Bal = New_Balance;
        }
    i +=1;

    }

    return 0;
  }
