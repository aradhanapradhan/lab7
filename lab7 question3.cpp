#include <iostream>
using namespace std;
class rectangle
{
	public:
	double length;
	double breadth;
	double area(double length,double breadth)
	{
		return length*breadth;
	}
	double perimeter(double length,double breadth)
	{
		return 2*(length+breadth);
	}
 };
 int main()
 {
 	double length,breadth,area1,area2,perimeter1,perimeter2;
 	rectangle re1;
 	rectangle re2;
 	cout<<"enter the length and breadth of rectangle 1";
 	cin>>re1.length;
 	cin>>re1.breadth;
 	perimeter1=re1.perimeter(re1.length,re1.breadth);
 	area1=re1.area(re1.length,re1.breadth);
 	
 	cout<<"enter the length and breadth of rectangle 2";
 	cin>>re2.length;
 	cin>>re2.breadth;
 	perimeter2=re2.perimeter(re2.length,re2.breadth);
 	area2=re2.area(re2.length,re2.breadth);
 	
 	cout<<"perimeter of rectangle1 is"<<perimeter1<<endl;
 	cout<<"area of rectangle1 is"<<area1<<endl;
 	cout<<"perimeter of rectangle2 is"<<perimeter2<<endl;
 	cout<<"area of rectangle2 is"<<area2<<endl;
 	
 	if(perimeter1>perimeter2)
 	 cout<<"perimeter of rectangle1 is greater than rectangle2"<<endl;
 	else if(perimeter1<perimeter2)
 	 cout<<"perimeter of rectangle1 is less than rectangle2"<<endl;
 	else
 	  cout<<"perimeter of rectangle1 is equal to rectangle2"<<endl;
 	  
 	if(area1>area2)
 	  cout<<"area of rectangle1 is greater than rectangle2"<<endl;
 	else if(area1<area2)
 	  cout<<"area of rectangle1 is less than rectangle2"<<endl;
 	else
 	  cout<<"area of rectangle1 is equal to rectangle2"<<endl;
 	return 0;
 }	