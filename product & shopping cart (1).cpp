/*
NAME= L.A.I.KUMARA
IT NUMBER= IT21180484
GROUP= MLB 9.2 G1 (GROUP 3, ONLINE FASHION STORE)
*/

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//-----------class implimation--------


class Product{
    protected:
        int product_ID;
        string productName;
        double productPrice;
    public:
    	Product();
    	Product(int p_ID,string pName,double pPrice);
        void displayproductDetails();
        float getProductPrice();
       
};
class Shopping_cart{
	protected:
		int totalProduct;
		double totalAmount;
	public:
		Shopping_cart();
		Shopping_cart(int tProduct);
		void displayShoppingCartDetails();
		void addAmount(int tAmount,Product *p);		
};




//--------Product------

Product::Product()
{
	product_ID=0;
	productName="";
	productPrice=0;
}

Product::Product(int p_ID,string pName,double pPrice)
{
	product_ID=p_ID;
	productName=pName;
	productPrice=pPrice;
}

void Product::displayproductDetails()
{
	cout<<"Product Details : "<<endl;
    cout<<"   Product ID :"<<product_ID<<endl;
    cout<<"   Product Name :"<<productName<<endl;
    cout<<"   Product Price :"<<productPrice<<endl;

}

float Product::getProductPrice()
{
	return productPrice;
}
//----------shoping_cart-----------


Shopping_cart::Shopping_cart()
{
	totalProduct=0;
}

Shopping_cart::Shopping_cart(int tProduct)
{
	totalProduct=tProduct;
}

void Shopping_cart::addAmount(int tProduct,Product *p)
{
	totalAmount=(totalProduct * p->getProductPrice());
	
}

void Shopping_cart::displayShoppingCartDetails()
{
	cout<<"Shopping Cart Details : "<<endl;
	cout<<"   Product Quantity : "<<totalProduct<<endl;
	cout<<"   Total Amount : "<<totalAmount<<endl;
}




//------------Main Programm----------

int main()
{
	
    
	//Product constructor
    Product pdt1(1234,"T-shirt",1200.00);
	Product pdt2(4567,"frock",1500.00);
	
	 //Shopping Cart
    Shopping_cart sc1(2);
    Shopping_cart sc2(3);
   
	
	//---------display an output-------

	sc1.displayShoppingCartDetails();
	cout<<endl;
	pdt1.displayproductDetails();

	
    return 0;
}