//IT21180248,FERNANDO M.B.S.D,SLIIT ,MLB_9.2_G1_ONLINE FASHION STORE 

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

class Admin{
	private:
		int admin_ID;
		string Name;
	
	public:
		Admin();
		Admin(int aID,string aName);
		void displayAdminDetails();
}; 

Admin::Admin()
{
	admin_ID=0;
	Name="";
}

Admin::Admin(int aID,string aName)
{
	admin_ID=aID;
	Name=aName;
}

void Admin::displayAdminDetails()
{
	cout<<"Admin Details : "<<endl;
	cout<<"   Admin ID : "<<admin_ID<<endl;
	cout<<"   Admin Name : "<<Name<<endl;
}

int main()
{
	//Admin 
	Admin ad1(997788,"Thiwanka Suresh");
	Admin ad2(887766,"Suresh Maliyadde");
	
	ad1.displayAdminDetails();
	cout<<endl;
	
	return 0;
}