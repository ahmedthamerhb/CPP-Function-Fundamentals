/* Project: Smart Bill Calculator
   Purpose: Calculate the final price after applying a discount and tax.
   Logic: Demonstrates Type 4 functions for financial calculations.
   Author: Ahmed Thamer
   Language:C++
*/

#include <iostream>
using namespace std;

// Function to calculate the final price after discount and tax
double calculateFinalPrice(double originalPrice, double discountPercent, double taxPercent) {
    // Calculate the discount amount
    double discountAmount = (discountPercent / 100) * originalPrice;
    
    // Calculate the price after discount
    double priceAfterDiscount = originalPrice - discountAmount;
    
    // Calculate the tax amount
    double taxAmount = (taxPercent / 100) * priceAfterDiscount;
    
    // Calculate the final price
    double finalPrice = priceAfterDiscount + taxAmount;
    
    return finalPrice;
}

int main() {
    double originalPrice, discountPercent, taxPercent;

    // Get user input for original price, discount percentage, and tax percentage
    cout << "Enter the original price: ";
    cin >> originalPrice;
    
    cout << "Enter the discount percentage: ";
    cin >> discountPercent;
    
    cout << "Enter the tax percentage: ";
    cin >> taxPercent;

    // Calculate the final price
    double finalPrice = calculateFinalPrice(originalPrice, discountPercent, taxPercent);

    // Display the final price
    cout << "The final price after applying discount and tax is: " << finalPrice << endl;

    return 0;
}

/*Output:
Enter the original price: 100
Enter the discount percentage: 10
Enter the tax percentage: 5
The final price after applying discount and tax is: 94.5
*/
