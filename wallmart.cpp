#include <iostream>
using namespace std;

int main() {
    char productType;
    double purchaseAmount, discount = 0.0, netPayment;
    int age;

    
    cout << "Enter Product Type (F for Food, C for Cloth): ";
    cin >> productType;

    
    cout << "Enter Purchase Amount: ";
    cin >> purchaseAmount;

    
    switch(productType) {
        case 'F':
            if (purchaseAmount >= 5000)
                discount = 0.50 * purchaseAmount;
            else if (purchaseAmount >= 2000)
                discount = 0.20 * purchaseAmount;
            else if (purchaseAmount >= 500)
                discount = 0.10 * purchaseAmount;
            break;

        case 'C': 
        
            cout << "Enter Age: ";
            cin >> age;

            if (age >= 40) {
                if (purchaseAmount >= 5000)
                    discount = 0.50 * purchaseAmount;
                else if (purchaseAmount >= 2000)
                    discount = 0.20 * purchaseAmount;
                else if (purchaseAmount >= 500)
                    discount = 0.10 * purchaseAmount;
            } else if (age >= 20) {
                if (purchaseAmount >= 5000)
                    discount = 0.60 * purchaseAmount;
                else if (purchaseAmount >= 2000)
                    discount = 0.30 * purchaseAmount;
                else if (purchaseAmount >= 500)
                    discount = 0.15 * purchaseAmount;
            } else {
                if (purchaseAmount >= 2500)
                    discount = 0.50 * purchaseAmount;
            }
            break;

        default:
            cout << "Invalid Product Type!" << endl;
            return 1;
    }

    netPayment = purchaseAmount - discount;

    
    cout << "Product Type: " << productType << endl;
    cout << "Purchase Amount: " << purchaseAmount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Net Payment: " << netPayment << endl;

    return 0;
}