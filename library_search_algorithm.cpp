/* Project: Library Search Engine
   Purpose: Check if a specific book exists in the library collection.
   Logic: Using Type 4 functions to search through an array of strings.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>
#include <string>
using namespace std;

// تعريف دالة من نوع 4 للتحقق مما إذا كان الكتاب موجودًا في مجموعة المكتبة
// Function to check if a book exists in the library collection
bool isBookAvailable(const string library[], int size, const string& bookTitle) {
    for (int i = 0; i < size; ++i) {
        if (library[i] == bookTitle) {
            return true; // Book found
        }
    }
    return false; // Book not found
}

int main() {
    // تعريف مجموعة الكتب في المكتبة كمصفوفة من السلاسل النصية
    // Define the library collection as an array of strings
    const int librarySize = 5;

    // مصفوفة تحتوي على عناوين الكتب المتاحة في المكتبة
    // Array containing the titles of books available in the library
    string library[librarySize] = {
        "C++ Programming",
        "Python for Beginners",
        "JavaScript Essentials",
        "HTML and CSS Design",
        "Data Structures and Algorithms"
    };

    // Ask the user for the book title they are looking for
    // اسأل المستخدم عن عنوان الكتاب الذي يبحث عنه
    string bookTitle;
    cout << "Enter the title of the book you are looking for: ";

    // استخدم getline لقراءة العنوان الكامل للكتاب بما في ذلك المسافات
    // Use getline to read the full book title including spaces
    getline(cin, bookTitle);

    // تحقق مما إذا كان الكتاب متاحًا في المكتبة وعرض الرسالة المناسبة
    // Check if the book is available in the library and display the appropriate message
    if (isBookAvailable(library, librarySize, bookTitle)) {
        cout << "The book \"" << bookTitle << "\" is available in the library." << endl;
    } 
    
    else {
        cout << "The book \"" << bookTitle << "\" is not available in the library." << endl;
    }

    return 0;
}

/*output example:
Enter the title of the book you are looking for: C++ Programming
The book "C++ Programming" is available in the library.
__________________________________________________________________________
Enter the title of the book you are looking for: Python for Data Science
The book "Python for Data Science" is not available in the library.
*/
