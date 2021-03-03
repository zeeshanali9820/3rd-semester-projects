#include<iostream>
using namespace std;
int main()
{
	double height,weight,BMI;
	cout<<"enter height in inches : ";
	cin>>height;
	cout<<"enetr weight in pounds : ";
	cin>>weight;
	BMI=((weight)/((height)*(height)))*703;
	if(BMI<16.0)
	cout<<"seriously underweight";
 else if(16.0<BMI && BMI<18.0)
	cout<<"underweight";
	else if(18.0<BMI && BMI<24.0)
	cout<<"normel weight";
	else if(24.0<BMI && BMI<29.0)
	cout<<"overweight";
	else if(29.0<BMI && BMI<35.0)
	cout<<"seriously overweight";
	else if(BMI>35.0)
	cout<<"gravely overweight";
	
}
