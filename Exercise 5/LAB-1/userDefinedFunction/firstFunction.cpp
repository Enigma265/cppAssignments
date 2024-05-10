#include <iostream>
using namespace std;
 
 //declering prototypes.
 double large(double x, double y);
 double compareThree(double x, double y, double z);

 int main()
 {
    double one, two;
    cout << "Line 2: The larger of 5 and 10 is " << large(5, 10) << endl; 
    cout << "Line 3: Enter two numbers: ";
        cin >> one >> two; 
    cout << "Line 6: The larger of " << one << " and " << two << " is " << large(one, two) << endl;
 }
 
 double large(double x, double y)
 {
    if (x >= y)
        return x;
    else
        return y;
 }

 double compareThree(double x, double y, double z)
 {
    return large(x, large(y, z));
 }