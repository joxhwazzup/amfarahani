#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
    double radius;
    double area;
    
    //Prompt the user to enter a value for radius
    cout << "Enter radius ";
    cin >> radius;
    
    //Calculate the area of the circle
    area = 3.14 * radius * radius;
    
    //Add code to read user input and store in variable radius
    cout << "The area of a circle is: " << area << endl;
    
    return 0;
    
}
