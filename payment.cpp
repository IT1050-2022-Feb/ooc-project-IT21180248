//IT21177200 A.R.M.S Madusanka MLB 9.2_G1_GROUP 3

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------


class Payment{
	private:
		string type;
		double Amount;
	public:
		Payment();
		Payment(string pType, double pAmount);
		void displayPaymentdetails();	
};


//-----------payment--------

Payment::Payment()
{
	type="";
	Amount=0.0;
}

Payment::Payment(string pType, double pAmount)
{
	type=pType;
	Amount=pAmount;
}

void Payment::displayPaymentdetails()
{
	cout<<"Payment Details : "<<endl;
	cout<<"   Payment Type : "<<type<<endl;
	cout<<"   Payment Amount : "<<setiosflags(ios::fixed)<<setprecision(2)<<Amount<<endl;
}



//------------Main Programm----------

int main()
{
    
    //Payment
    Payment p1("Card",1600);
    Payment p2("Cash on Delivery",1850);

	
	//---------display an output-------

	p1.displayPaymentdetails();
	cout<<endl;

    return 0;
}