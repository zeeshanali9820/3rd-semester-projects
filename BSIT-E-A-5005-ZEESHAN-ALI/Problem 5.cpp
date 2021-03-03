#include <iostream>
using namespace std;
int mounth,year;
int main(int argc, char *argv[])
{
cout<<"enter month number : ";
cin>>mounth;
cout<<"enter year number : ";
cin>>year;
switch (mounth){
case 1:
 cout<<"January "<<year<<" has 31 days"<<endl;
 break;
case 2:
 if (year%4==0) cout<<"February "<<year<<" has 29 days"<<endl;
 else cout<<"January "<<year<<" has 28 days"<<endl;
 break;
case 3:
 cout<<"March "<<year<<" has 31 days"<<endl;
 break; 
case 4:
 cout<<"April "<<year<<" has 30 days"<<endl;
 break; 
case 5:
 cout<<"May "<<year<<" has 31 days"<<endl;
 break;  
case 6:
 cout<<"June "<<year<<" has 30 days"<<endl;
 break; 
case 7:
 cout<<"July "<<year<<" has 31 days"<<endl;
 break; 
case 8:
 cout<<"August "<<year<<" has 31 days"<<endl;
 break;
case 9:
 cout<<"September "<<year<<" has 30 days"<<endl;
  break; 
case 10:
 cout<<"October "<<year<<" has 31 days"<<endl;
 break;  
case 11:
 cout<<"November "<<year<<" has 30 days"<<endl;
 break;
case 12:
 cout<<"December "<<year<<" has 31 days"<<endl;
 break; 
default: 
 cout<<"invalid month"<<endl;
 break; 
} 

system("PAUSE");
return 0;
}
