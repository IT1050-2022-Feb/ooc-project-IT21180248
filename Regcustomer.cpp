//MLB 9.2_G1_GROUP 3 online fashion store
//Gunaratne M H B P T
//IT21180552 

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------


class Registered_Customer{
	private:
		int ID;
		string userName;
		string password;
	
	public:
		Registered_Customer();
		Registered_Customer(int cID,string uName,string pw);
		void displayCustomerDetails();
};




//--------Registered Customer------

Registered_Customer::Registered_Customer()
{
	ID=0;
	userName="";
	password="";
}

Registered_Customer::Registered_Customer(int cID,string uName,string pw)
{
	ID=cID;
	userName=uName;
	password=pw;
}

void Registered_Customer::displayCustomerDetails()
{
	cout<<"Registered Customer Details :"<<endl;
	cout<<"    Customer ID : "<<ID<<endl;
	cout<<"    User Name : "<<userName<<endl;
	cout<<"    Password : **********"<<endl;
}





//------------Main Programm----------

int main()
{

	//Registered Customer 
    Registered_Customer regc1(8765,"Saman Silva","986877Saman#");
    Registered_Customer regc2(9876,"Dilshan Perera","Dil8374%");
    
   
	
	//---------display an output-------

	regc1.displayCustomerDetails();
	cout<<endl;

    return 0;
}