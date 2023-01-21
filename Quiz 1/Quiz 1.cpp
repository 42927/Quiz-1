#include <iostream>
using namespace std;
 class Shape {
	public:
		

virtual void calculateArea(){
	cout<<"Calculate area of two Dim"<<endl ;
}

virtual void printArea(){
cout<<" Area of a Circle";
}
};

class TwoDim : public Shape{

public:

	virtual void calculateTwoDimArea(){
	
 cout<<"Calculate two Dim Area of Triangle"<<endl;}};
class ThreeDim : public Shape{
 public:
 	virtual void calculateThreeDimArea(){
	
 
 cout<<"Calculate three Dim Area of Triangle"<<endl;
 }};
 class Circle : public TwoDim{
 	public:
 	void printArea(){
 		cout<<"Area of a Circle"<<endl;
	 }
 };
 class Triangle : public TwoDim{
 	public:
	 void printArea(){
	 	
 		cout<<" Area of a Circle"<<endl;
	 }
 };
 class Rectangle : public TwoDim {
 	
	 public:
	 void printArea(){
	 	
	 	
 		cout<<" Area of a Circle"<<endl;
	 }
 };
 class Cube :  public ThreeDim{
 	 public :
	  void printArea(){
	  	
	  	
 		cout<<" Area of a Circle"<<endl;
	 }
 };
  class Cone : public ThreeDim{
  	public:
	  void printArea(){
	  	
	  	
	  	
  		cout<<" Area of a Circle"<<endl;
	  }
  };
 
int main()
{
Shape* obj1 = new Shape();
TwoDim* obj2 = new TwoDim();
ThreeDim* obj3 = new ThreeDim();
TwoDim* obj4 = new Circle();
TwoDim* obj5 = new Triangle();
Circle* obj6 = new Circle();
Rectangle* obj7 = new Rectangle();
Cube* obj8 = new Cube();
Cone* obj9 = new Cone();
obj7->printArea();
obj8->printArea();
obj9->printArea();
obj8->calculateThreeDimArea();
obj6->calculateTwoDimArea();
}
