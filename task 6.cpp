#include <iostream>
using namespace std;

int main() {
    int score;
    cout<<"Enter your exam score out of 100\n";
    cin>>score;

    if (score<0 || score>100) 
    {
        cout<<"Invalid score. Please enter a score between 0 and 100.";
    } 
    else 
    {
        if (score >= 90) 
        {
            cout<<"Grade: A";
        } 
        else if (score >= 80) 
        {
            if (score >= 85) 
            {
                cout<<"Grade: B+";
            } 
            else 
            {
                cout<<"Grade: B";
            }
        } 
        else if (score >= 70) 
        {
            if (score >= 75) 
            {
                cout<<"Grade: C+";
            } 
            else 
            {
                cout<<"Grade: C";
            }
        } 
        else if (score >= 60) 
        {
            cout<<"Grade: D";
        } 
        else 
        {
            cout<<"Grade: F";
        }
    }

    return 0;
}

