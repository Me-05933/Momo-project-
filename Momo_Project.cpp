#include <iostream>
using namespace std;

int main() {
	const int defaultpin = 0000;
	int attempts = 0;
	int select;
	float reference;
	char option;
	char Y;
	char N;
	int number;
	float amount;
	int pin; 
	int c_pin;
	int new_pin;
	float balance, counter;
	string digits;
	balance=1000;
cout<<"Main Menu"<<endl;
cout<<"1. My Wallet"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Send Money "<<endl;
cout<<"4. Allow cash out" <<endl;
cout<<"5. MoMoPay & Pay bill" <<endl;
cout<<"6. Financial Services" <<endl;
cout<<"7. Exit"<<endl;
cout<<"Please explore by selecting from the above options"<<endl;
cin>>select;
if(select==1)
{
	do{
		cout<<"Please enter your 4-digit PIN: "<<endl;
		cin>>pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin == defaultpin){
			cout<<"Your balance is 1000";	
		}
	} while (pin != defaultpin && attempts <3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}
}

else if(select==2)
{
	cout<<" Are You Sure You Want To Change Your Pin  "<<endl;
	cout<<" Choose Y/N "<<endl;
	cin>>option;
	if(option == 'Y'){
		cout<<"Enter New Pin" <<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<" Your New Pin Is "<<new_pin;
		
	}
}
else if(select==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	if(amount > 1000){
		cout << "Your Balance Is Insufficient to perform this transaction" <<endl;
		cout << "Please try entering amount again. Your remaining balance is "<<balance<<endl;
		cin>>amount;
		
	}
	else if(amount <= 1000)
	{
	cout<<"Transfer "<<amount<<" to "<<number<<endl;
    }
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<"Please enter your PIN: "<<endl;
	cin>> pin;
	do{
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
			cin>>pin;
			cout<<"Incorrect PIN. Please try again" <<endl;
			cin>>pin;
			cout<<"You have been blocked from accessing your account due to maximum incorrect PIN entered. call 100 for more info. Thank you!";
		}
		else if (pin == defaultpin){
			cout<<"You have successfully sent "<<amount<< " to " <<number<<endl;
			cout<<"Your current balance is "<<balance-amount<<endl;	
		}
	} while (pin != defaultpin && attempts > 3);
	if(attempts > 3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}

	}
	else if(select == 4){
		cout<<"Are you sure you want to allow cash out"<<endl;
		cout<<"choose Y/N"<<endl;
		cin>>option;
		if(option == 'Y'){
		cout<<"Enter PIN" <<endl;
		cin>>pin;
		cout<<" Cash out is allowed successfully "<<endl;
		
	}
	}
	else if(select == 5){
		cout<<"MomoPay & Paybills"<<endl;
		cout<<"Your will recieve a message shortly" <<endl;
	}
		else if(select == 6){
		cout<<"Bank services" <<endl;
		cout<<"Your will recieve a message shortly" <<endl;
	}
	
	else if(select == 7) {
		cout << "You have declined this process.";
	}	
	
	
	return 0;
}


















