#include <iostream>
#include <conio.h>
using namespace std;
class books{
	private:
		int BookID,Page;
		float Price;
	public:
	void get(){
		cout<<"Enter a BookID: ";
		cin>>BookID;
		cout<<"Enter Page :";
		cin<<Page;
		cout<<"Enter price: ";
		cin>>Price;
	void show(){
		cout<<"BookID ="<<BookID<<endl;
		cout<<"Page ="<<Page<<endl;	
		cout<<"price ="<<Price<<endl;
		}	
	void set(int id,int page,int price)	
		{
			BookID=id;
			Page=pg;
			Price=pr;
		}
		float get_price(){
			return price;
		}
		
};
void main ()
{
book b1,b2;
b1.get_price();
b2.set(3,35,57494.5)
cout<<"\n the detail of most costly book is follows......."<<endl;
if(b1.get_price()>b2.get_price())
b1.show();
else
b2.show();
getch();
}
