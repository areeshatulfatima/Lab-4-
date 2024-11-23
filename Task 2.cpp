#include <iostream>
using namespace std;

int main()
{
	
	
int age;
cout<<"Enter your age: ";
cin>>age;
if (age < 0) 
{
cout<<"Invalid age";
} 
else if (age <= 12) 
{
cout<<"Child";  
} 
    
    
else if (age <= 19) 
{
if (age == 13)
{
cout<<"Just a Teen";
} 
else
{
cout<<"Teenager";
}
} 
    
    
else if (age <= 60) 
{
cout<<"Adult";
} 
    
    
else
{
cout<<"Senior Citizen";
}

return 0;
}

