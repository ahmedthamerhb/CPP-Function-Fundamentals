/*  Project: C++ Function Architecture
    Purpose: Detailed demonstration of the 4 standard types of functions.
    Logic: Showcasing the relationship between Parameters and Return types.
Author: Ahmed Thamer 
  Language: C++
 */


#include <iostream>
using namespace std;

/*Function to have 4 Types:
1. No parameters and No return type
2. parameters and No return type
3. No parameters and return type
4. parameters and return type
*/


//1. No parameters and No return type
void fun1()
{
    cout << "This is function 1" << endl;
}

//2. parameters and No return type
void fun2(int a, int b)
{
    cout << "This is function 2" << endl;
    cout << "The sum of a and b is: " << a + b << endl;
}

//3. No parameters and return type
int fun3()
{
    cout << "This is function 3" << endl;
    return 42;
}

//4. parameters and return type
int fun4(int a, int b)
{
    cout << "This is function 4" << endl;
    return a * b;
}

int main()
{
    fun1(); // Calling function 1
    
    cout << "__________________________________________" << endl;
    fun2(5, 10); // Calling function 2 with parameters
    
    cout << "__________________________________________" << endl;
    int result3 = fun3(); // Calling function 3 and storing the return value
    cout << "The return value of function 3 is: " << result3 << endl;
    
    
    cout << "__________________________________________" << endl;
    int result4 = fun4(5, 10); // Calling function 4 with parameters and storing the return value
    cout << "The return value of function 4 is: " << result4 << endl;

    return 0;
}

/*output:
This is function 1
__________________________________________
This is function 2
The sum of a and b is: 15
__________________________________________
This is function 3
The return value of function 3 is: 42
__________________________________________
This is function 4
The return value of function 4 is: 50
__________________________________________
*/
