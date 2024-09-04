// Day 4 learning cpp
#include <iostream>
using namespace std;

int main(){
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

// The addition assignment operator (+=) adds a value to a variable:
    int x = 10;
    x += 5;
// use the greater than operator (>) to find out if 5 is greater than 3:
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3

// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
    return 0;
}