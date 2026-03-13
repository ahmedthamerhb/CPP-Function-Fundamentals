/* Project: Mini Inventory & Sales Manager
   Purpose: Manage products, check stock, and process sales.
   Logic: Demonstrates Type 4 functions with data updating logic.
   Author: Ahmed Thamer
   Language: C++
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// دالة لمعالجة عملية البيع وتحديث المخزون
// Function to process sale and update stock
// خليت النوع البياني للدالة bool عشان ترجع true لو العملية نجحت و false لو فشلت (مثلاً: لما المخزون غير كافٍ)
// The function takes the stock by reference to update it, the price of the product, the quantity to sell, and a reference to total sales to update it as well.
bool processSale(int& stock, double price, int quantity, double& totalSales) {
    // Check if the requested quantity is available in stock
    // التحقق من توفر الكمية المطلوبة في المخزون
    if (quantity <= stock) {
        // Calculate the total price for the sale
        // تحديث المخزون (بالمرجع)
        stock -= quantity; 
        // Calculate the total price for the sale and add it to total sales (also by reference)
        // إضافة المبلغ للمبيعات الكلية
        totalSales += (price * quantity); 
        return true;
    }
    // stock is insufficient for the requested quantity
    // المخزون غير كافٍ
    return false;
}

int main() {
    // Product data (e.g., a laptop)
    // بيانات المنتج (مثلاً: لابتوب)
    string productName = "Gaming Laptop";
    double productPrice = 1200.00;
    int productStock = 10;
    double totalStoreRevenue = 0.0;

    // Menu-driven interface for the store management system
    // واجهة قائمة لإدارة المتجر
    int choice;
    do {
        cout << "\n=== " << productName << " Store Management ===" << endl;
        cout << "1. View Product Info" << endl;
        cout << "2. Process Sale (Sell)" << endl;
        cout << "3. View Total Revenue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        // Handle user choices and call the appropriate functions
        // التعامل مع اختيارات المستخدم واستدعاء الدوال المناسبة
        if (choice == 1) {
            cout << "Product: " << productName << " | Price: $" << productPrice << " | In Stock: " << productStock << endl;
        } 
        
        // If the user chooses to process a sale, we ask for the quantity and call the processSale function to handle the logic of checking stock and updating totals.
        // إذا اختار المستخدم معالجة البيع، نطلب الكمية وندعو دالة processSale للتعامل مع منطق التحقق من المخزون وتحديث الإجماليات.
        else if (choice == 2) {
            int qty;
            cout << "Enter quantity to sell: ";
            cin >> qty;
            
            // Process the sale and update stock and total revenue accordingly
            // معالجة البيع وتحديث المخزون والإيرادات الكلية بناءً على ذلك
            if (processSale(productStock, productPrice, qty, totalStoreRevenue)) {
                cout << "Sale Successful! Remaining Stock: " << productStock << endl;
            } 
            // If the sale cannot be processed due to insufficient stock, we inform the user.
            // إذا لم تتمكن عملية البيع من المعالجة بسبب نقص المخزون، نعلم المستخدم بذلك.
            else {
                cout << "Error: Not enough stock available!" << endl;
            }
        }
        // If the user chooses to view total revenue, we display the total store revenue calculated from all sales.
        // إذا اختار المستخدم عرض الإيرادات الكلية، نعرض إجمالي إيرادات المتجر المحسوبة من جميع المبيعات.
        else if (choice == 3) {
            cout << fixed << setprecision(2);
            cout << "Total Store Revenue: $" << totalStoreRevenue << endl;
        }

    }
    
    // The loop continues until the user chooses to exit by entering 4. After exiting, we display a closing message.
    // تستمر الحلقة حتى يختار المستخدم الخروج بإدخال 4. بعد
    while (choice != 4);

    // Display closing message and exit the program
    // عرض رسالة إغلاق والخروج من البرنامج
    cout << "System Closed. Have a great day!" << endl;
    return 0;
}


/*output example:
=== Gaming Laptop Store Management ===
1. View Product Info
2. Process Sale (Sell)
3. View Total Revenue
4. Exit
Enter Choice: 1
Product: Gaming Laptop | Price: $1200.00 | In Stock: 10
_________________________________________________________________________
=== Gaming Laptop Store Management ===
1. View Product Info
2. Process Sale (Sell)
3. View Total Revenue
4. Exit
Enter Choice: 2
Enter quantity to sell: 3
Sale Successful! Remaining Stock: 7
_________________________________________________________________________
=== Gaming Laptop Store Management ===
1. View Product Info
2. Process Sale (Sell)
3. View Total Revenue
4. Exit
Enter Choice: 3
Total Store Revenue: $3600.00
_________________________________________________________________________
=== Gaming Laptop Store Management ===
1. View Product Info
2. Process Sale (Sell)
3. View Total Revenue
4. Exit
Enter Choice: 2
Enter quantity to sell: 8
Error: Not enough stock available!
_________________________________________________________________________
=== Gaming Laptop Store Management ===
1. View Product Info
2. Process Sale (Sell)
3. View Total Revenue
4. Exit
Enter Choice: 4
System Closed. Have a great day!
_________________________________________________________________________
*/
