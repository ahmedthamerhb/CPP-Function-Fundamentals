/* Project: Password Strength Checker
   Purpose: Analyze password security based on length.
   Logic: Demonstrates Type 4 functions with String processing.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>
#include <string>
using namespace std;

// Function to check the strength of a password
string checkPasswordStrength(const string& password) {
    if (password.length() < 6) {
        return "Weak";
    } 
    
    else if (password.length() < 12) {
        return "Moderate";
    }
    
    else {
        return "Strong";
    }
}

int main() {
    string password;

    // Get user input for the password
    cout << "Enter your password: ";
    cin >> password;

    // Check the strength of the password
    string strength = checkPasswordStrength(password);

    // Display the strength of the password
    cout << "Your password is: " << strength << endl;

    return 0;
}

/*Output:
Enter your password: mypass
Your password is: Weak
__________________________________________
Enter your password: mypassword
Your password is: Moderate
__________________________________________
Enter your password: myverystrongpassword
Your password is: Strong
*/
