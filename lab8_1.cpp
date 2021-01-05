#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interest,money,total,intrate,balance;
	int year=1;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>intrate;
	cout << "Enter amount you can pay per year: ";
	cin>>money;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to chang from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	while(loan>0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year;
		cout << setw(13) << left << loan;
		interest = loan*(intrate/100);
		cout << setw(13) << left << interest;
		total=loan+interest;
		cout << setw(13) << left << total;
		if(total<money)money=total;
		cout << setw(13) << left << money;
		balance=total-money;
		cout << setw(13) << left << balance;
		cout << "\n";
		loan = balance	;
		year++;
	}
	return 0;
}