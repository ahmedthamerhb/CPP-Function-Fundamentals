/* Project: Smart Shipping Calculator
   Purpose: Calculate delivery costs based on weight, distance, and service type.
   Logic: Demonstrates Type 4 functions with multiple business rules.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>

// library for string handling and formatting output
// مكتبة للتعامل مع النصوص وتنسيق المخرجات
#include <string>

// library for setting precision in output
// مكتبة لتحديد دقة الأرقام في المخرجات
#include <iomanip>

using namespace std;

// Function to calculate shipping cost
// دالة حساب تكلفة الشحن
double calculateShipping(double weight, double distance, int serviceType) {

   // Base cost calculation to determine the cost based on weight and distance
   // تكلفة ثابتة للشحن بالإضافة إلى تكلفة متغيرة بناءً على الوزن والمسافة
   double baseRate = 5.0; 
   double costPerKg = 1.2;
   double costPerKm = 0.5;

   //  Calculate the total cost based on weight and distance
   // حساب التكلفة الأساسية بناءً على الوزن والمسافة
   double total = baseRate + (weight * costPerKg) + (distance * costPerKm);

   // إضافة رسوم إضافية بناءً على نوع الخدمة
   // 1: Standard (No extra), 2: Fast (+50%), 3: International (+100%)
   if (serviceType == 2) {
     // fast service 
     // خدمة سريعة
     total += total * 0.5; 
   } 

   else if (serviceType == 3) {
     // international service
     // خدمة دولية
     total += total * 1.0; 
   }
   // Return the total cost after applying all rules
   //  إرجاع التكلفة الإجمالية بعد تطبيق جميع القواعد
   return total;
}

int main() {
   double weight, distance;
   int service;

   // User input for weight, distance, and service type
   // إدخال المستخدم للوزن والمسافة ونوع الخدمة
   cout << "=== Global Logistics Shipping System ===" << endl;
   cout << "Enter Package Weight (kg): ";
   cin >> weight;

   cout << "Enter Delivery Distance (km): ";
   cin >> distance;

   cout << "Select Service Type (1:Standard, 2:Fast, 3:International): ";
   cin >> service;
   
   // Prompt user to select service type and validate input
   //  طلب من المستخدم اختيار نوع الخدمة والتحقق من صحة الإدخال
   if (service >= 1 && service <= 3) {
      
   //  Calculate the final shipping cost using the function
   // استدعاء الدالة
   double finalCost = calculateShipping(weight, distance, service);

   // Output the final cost with proper formatting
   // عرض التكلفة النهائية مع تنسيق مناسب
   cout << fixed << setprecision(2);
   cout << "----------------------------------------" << endl;
   cout << "Weight: " << weight << " kg" << endl;
   cout << "Distance: " << distance << " km" << endl;
   cout << "Total Shipping Cost: $" << finalCost << endl;
   cout << "----------------------------------------" << endl;

   }
   else {
     cout << "Invalid service type selected. Please choose 1, 2, or 3." << endl;
   }

   return 0;
}

/*output example:
=== Global Logistics Shipping System ===
Enter Package Weight (kg): 10
Enter Delivery Distance (km): 100
Select Service Type (1:Standard, 2:Fast, 3:International): 1
----------------------------------------
Weight: 10.00 kg
Distance: 100.00 km
Total Shipping Cost: $75.00
________________________________________________________________________
=== Global Logistics Shipping System ===
Enter Package Weight (kg): 5
Enter Delivery Distance (km): 50
Select Service Type (1:Standard, 2:Fast, 3:International): 2
----------------------------------------
Weight: 5.00 kg
Distance: 50.00 km
Total Shipping Cost: $82.50
________________________________________________________________________
=== Global Logistics Shipping System ===
Enter Package Weight (kg): 20
Enter Delivery Distance (km): 200
Select Service Type (1:Standard, 2:Fast, 3:International): 3
----------------------------------------  
Weight: 20.00 kg
Distance: 200.00 km
Total Shipping Cost: $240.00
*/
