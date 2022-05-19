//IT21177200 A.R.M.S Madusanka MLB 9.2_G1_GROUP 3

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------

class Unregistered_Customer{
	private:
		int visitor_ID;
		
	public:
		Unregistered_Customer();
		Unregistered_Customer(int vID);
		void displayUnregisteredCustomerDetails();
};

//--------Unregistered Customer-------

Unregistered_Customer::Unregistered_Customer()
{
	visitor_ID=0;
}

Unregistered_Customer::Unregistered_Customer(int vID)
{
	visitor_ID=vID;
}

void Unregistered_Customer::displayUnregisteredCustomerDetails()
{
	cout<<"Unregistered Customers Details :"<<endl;
	cout<<"    Visitor ID : "<<visitor_ID<<endl;
}




//------------Main Programm----------

int main()
{

    //Unregistered Customer
    Unregistered_Customer cus1(6574);
    Unregistered_Customer cus2(9584);
    
	
	//---------display an output-------

	cus1.displayUnregisteredCustomerDetails();
	cout<<endl;

    return 0;
}