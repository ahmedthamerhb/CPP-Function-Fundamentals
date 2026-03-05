/* Project: Even/Odd Checker
    Function Type: Type 4 (Parameters, Return)
    Description: Demonstrates a pure logic function that takes 
                an integer parameter and returns a string result,
                separating UI from Logic.
    Author: Ahmed Thamer
    Language: C++
*/

#include <iostream>
using namespace std;

// Function to check if a number is even or odd, function have no parameters and return type is string.
string checkEvenOdd(int number) {
    
    // Check if the number is even or odd and return the corresponding string.
    if (number % 2 == 0) {
        return "Even";
    } 
    
    else {
        return "Odd";
    }
}

int main() {
    
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    string result;

    // Call the function to check if the number is even or odd and store the
    result = checkEvenOdd(number);

    // Print the result to the console.
    cout << "The number is " << result << "." << endl; 
    return 0;
}

/*output:
Enter a number: 5
The number is Odd.
_____________________
Enter a number: 10
The number is Even.
*/
