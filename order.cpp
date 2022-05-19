//MLB 9.2_G1_GROUP 3 online fashion store
//Gunaratne M H B P T
//IT21180552

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------


class Orders{
    private:
        int orderID;
        string ordate;

    public:
    	Orders();
    	Orders(int oID,string Date);
        void displayOrderDetails();
};

//----------Order--------

void Orders::displayOrderDetails()
{
	//cout<<"Order Details :"<<endl;
	cout<<"Order Details : "<<endl;
	cout<<"   Order ID : "<<orderID<<endl;
	cout<<"   Order Date : "<<ordate<<endl;
}

Orders::Orders()
{
	orderID=0;
	ordate="";
}

Orders::Orders(int oID,string Date)
{
	orderID=oID;
	ordate=Date;
}



//------------Main Programm----------

int main()
{

	
    //Order constructor
    Orders oo1(4235,"12/02/2022");
    Orders oo2(8231,"02/02/2022");
    
   
    
	
	//---------display an output-------

	oo1.displayOrderDetails();
	cout<<endl;

	
    return 0;
}