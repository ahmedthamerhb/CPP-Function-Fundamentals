/* Project: Secure OTP Generator
   Purpose: Generate a random 6-digit verification code.
   Logic: Using Type 4 functions with Random Number Generation.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>

// library for generating random numbers
// مكتبة توليد الأرقام العشوائية
#include <cstdlib>

// library for time to set the seed for randomness
// مكتبة الوقت لضبط وقت العشوائية
#include <ctime>  

// library for string manipulation
// مكتبة التعامل مع النصوص
#include <string>

using namespace std;

// دالة لتوليد رمز تحقق بطول معين
// Function to generate an OTP of a specific length
string generateOTP(int length) {
    string otp = "";
    
    for (int i = 0; i < length; i++) {

        // here we generate a random digit between 0 and 9
        // توليد رقم عشوائي بين 0 و 9
        int digit = rand() % 10; 

        // here we convert the digit to a string and append it to the OTP
        // تحويل الرقم إلى نص وإضافته للكود
        otp += (digit+'0');
    }
    
    return otp;
}

int main() {

    // Seeding the random number generator with the current time
    // ضبط رقم عشوائي باستخدام الوقت الحالي
    srand(time(0)); 

    cout << "=== Security Authentication System ===" << endl;
    cout << "Generating your secure OTP..." << endl;

    // calling the function to generate a 6-digit OTP
    // استدعاء الدالة لتوليد كود مكون من 6 أرقام
    string myOTP = generateOTP(6);

    // showing the OTP to the user
    // عرض رمز التحقق للمستخدم
    cout << "--------------------------------------" << endl;
    cout << "Your Verification Code is: " << myOTP << endl;
    cout << "Please do not share this code with anyone." << endl;
    cout << "--------------------------------------" << endl;

    return 0;
}

/*output example:
=== Security Authentication System ===
Generating your secure OTP...
--------------------------------------
Your Verification Code is: 667714
Please do not share this code with anyone.
--------------------------------------
________________________________________________
=== Security Authentication System ===
Generating your secure OTP...
--------------------------------------
Your Verification Code is: 465995
Please do not share this code with anyone.
--------------------------------------
*/
