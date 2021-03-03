#include <iostream>
using namespace std;
int main()
{
   int num;
   bool flag = true;
   cout<<"Enter any positive integer): ";
   cin>>num;

   int z=2;
    while(z<=num/2)
{
    if(num % z == 0)
   {
      flag = false;
      break;
   }
   z++;
}
   if (flag==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
