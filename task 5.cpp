#include <iostream>
using namespace std;

int main()
{
	
	
	
	
int day;
cout<<"Enter a number "; 
cout<<"\n1 for Monday";
cout<<"\n2 for Tuesday";
cout<<"\n3 for Wednesday";
cout<<"\n4 for Thursday";
cout<<"\n5 for Friday";
cout<<"\n6 for Saturday";
cout<<"\n7 for Sunday\n";
cin>>day;

    switch (day) {
        case 1:
            cout<<"Start of the workweek.";
            break;
            
            
        case 2:
            cout<<"It's Tuesday, stay productive.";
            break;
            
            
        case 3:
            cout<<"Midweek motivation!";
            break;
            
            
        case 4:
            cout<<"Almost the weekend.";
            break;
        
		
		case 5:
            cout<<"TGIF!";
            break;
        
		
		case 6:
            cout << "Relax, it's Saturday.";
            break;
        
		
		case 7:
            cout << "Enjoy your Sunday!";
            break;
        
		
		default:
            cout << "Invalid day selection.";
            break;
    }

    return 0;
}


