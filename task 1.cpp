#include <iostream>
using namespace std;

int main() {
double num;
cout<<"Enter a number: ";
cin>>num;

if (num > 0) 
{
    	
if (num > 100) 
{
cout<<"The number is large";
} 
else
{
cout<<"The number is small";
}    
}
 

else if (num < 0) 
{
if (num < -100) 
{
cout<<"The number is very Small";
} 
else 
{
cout<<"The number is Small and Negative";
}
           
}
	 
	 
else 
{
cout<<"The number is zero";
}

return 0;
}

