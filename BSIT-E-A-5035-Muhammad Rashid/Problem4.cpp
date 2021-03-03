#include <iostream>

using namespace std;


void sortNum(int &, int &, int &);

int main ()
{
int num1, num2, num3;

cout << "This program will ask you to enter 3 integer numbers and it will ";

cout << "sort the numbers into their ascending order. " << endl << endl;


cout << "Enter the 3 integers that you wish to sort: " << endl;

cin >> num1 >> num2 >> num3;

cout << "\n" << "The ascending order for the 3 numbers you just entered are: " << endl;


sortNum(num1,num2,num3);
}


void sortNum (int &num1, int &num2, int &num3)
{

int lowest, middle, highest;

if (num1 < num2 && num2 < num3)
{
lowest = num1;
middle = num2;
highest = num3;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
else if (num2 < num1 && num1 < num3)
{
lowest = num2;
middle = num1;
highest = num3;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
else if (num3 < num2 && num2 < num1)
{
lowest = num3;
middle = num2;
highest = num1;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
else if (num3 < num1 && num1 < num2)
{
lowest = num3;
middle = num1;
highest = num2;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
else if (num2 < num3 && num3 < num1)
{
lowest = num2;
middle = num3;
highest = num1;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
else if (num1 < num3 && num3 < num2)
{
lowest = num1;
middle = num3;
highest = num2;

cout << lowest << endl;
cout << middle << endl;
cout << highest << endl;
}
}



