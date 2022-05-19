/*IT21174858-RAJAPAKSHA K.R.P
MLB 9.2_G1_GROUP 3 
online fashion store*/


#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------

class Feedback{
	private:
		int feedbackNo;
		string feedback;
		
	public:
		Feedback();
		Feedback(int fbNO,string fb);
		void displayFeedackDetails();		
};



//-----------Feedback---------
Feedback::Feedback()
{
	feedbackNo=0;
	feedback="";
}

Feedback::Feedback(int fbNO,string fb)
{
	feedbackNo=fbNO;
	feedback=fb;
}

void Feedback::displayFeedackDetails()
{
	cout<<"Feedback Details : "<<endl;
	cout<<"   Feedback Id : "<<feedbackNo<<endl;
	cout<<"   Customer Feedback : "<<feedback<<endl;
}


//------------Main Programm----------

int main()
{

    //feedback
    Feedback fb1(657,"Valuable Product....");
    Feedback fb2(547,"Great Quality");
    
	
	//---------display an output-------

	fb1.displayFeedackDetails();
	
    return 0;
}