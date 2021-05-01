#include <iostream>
using namespace std;


int main()
{
    double radius;
    double circumference;
    
    //Prompt the user to enter a value for radius
    cout << "Enter radius ";
    cin >> radius;
    
    //Calculate the area of the circle
    circumference = 2.0 * 3.14 * radius;
    
    //Add code to read user input and store in variable radius
    cout << "The circumference of a circle is: " << circumference << endl;
    
    return 0;
    
}

