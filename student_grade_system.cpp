/* Project: Student Grade Manager
   Purpose: Calculate grade levels and status using functions.
   Logic: Demonstrates Type 4 functions with multiple return paths.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>
#include <string>
using namespace std;

// function to determine the student's grade based on the average score
// دالة لتحديد تقدير الطالب بناءً على المعدل
string getGradeLetter(double average) {
    if (average >= 90) {
        return "A (Excellent)";
    }
    else if (average >= 80) {
        return "B (Very Good)";
    }
    else if (average >= 70) {
        return "C (Good)";
    }
    else if (average >= 60) {
        return "D (Acceptable)";
    }
    else if (average >= 50) {
        return "E (Pass)";
    }
    else {
        return "F (Fail)";
    }
}

// function to determine pass or fail status
// دالة لتحديد حالة النجاح أو الرسوب
string checkStatus(double average) {
    return (average >= 50) ? "Passed" : "Failed";
}

int main() {

    // Variables to store student name and average score
    // متغيرات لتخزين اسم الطالب ومعدل الدرجات
    string studentName;
    double studentAverage;

    cout << "=== Student Management System ===" << endl;
    cout << "Enter Student Name: ";
    cin >> studentName;
    
    cout << "Enter Student Average (0-100): ";
    cin >> studentAverage;

    // Calling the functions and receiving results
    // استدعاء الدوال واستلام النتائج
    string grade = getGradeLetter(studentAverage);
    string status = checkStatus(studentAverage);

    cout << "---------------------------------" << endl;
    cout << "Student: " << studentName << endl;
    cout << "Average: " << studentAverage << "%" << endl;
    cout << "Grade:   " << grade << endl;
    cout << "Status:  " << status << endl;
    cout << "---------------------------------" << endl;

    return 0;
}

/*output:
=== Student Management System ===
Enter Student Name: Ahmed
Enter Student Average (0-100): 100
---------------------------------
Student: Ahmed
Average: 100%
Grade:   A (Excellent)
Status:  Passed
---------------------------------

*/
