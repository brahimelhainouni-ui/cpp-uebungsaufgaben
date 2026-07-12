#include <iostream>
#include <string>
#include "ort.h"

double Ort::get_x() const {
	return x;
}
double Ort::get_y() const {
	return y;
}
void Ort::print()const  {
	cout<<"name :  " <<name<<"kord  "<<"("<<x<<"|"<<y<<")";

}
void Ort::enter_koord(){
	cout<<"enter x value";
	cin>>x;
	cout<<"enter y value";
	cin>>y; 

}
 void Ort::enter_name(){
 	cout<<"geben sie die name:  ";
	cin>>name;
 }

Ort::Ort(){
	name = "ucity";
	x= 0.0;
	y=0.0;
}
Ort::Ort(string name, double x,double y): name(name),x(x),y(y){}

bool Ort::operator==(const Ort& andererOrt) const{
	if (this->x == andererOrt.x && this->y == andererOrt.y){
		return true;
	}
	return false;
} 

bool Ort::operator!=(const Ort& andererOrt)const{
	return !(*this == andererOrt);
}














