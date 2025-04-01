#include <iostream>
#include <string>
using namespace std;
class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice(string partNum, string partDesc, int qty, double price)
    {
        partNumber = partNum;
        partDescription = partDesc;
        setQuantity(qty);
        setPricePerItem(price);
    }
    void setPartNumber(string partNum)
    {
        partNumber = partNum;
    }
    string getPartNumber() const
    {
        return partNumber;
    }
    void setPartDescription(string partDesc)
    {
        partDescription = partDesc;
    }
    string getPartDescription() const
    {
        return partDescription;
    }
    void setQuantity(int qty)
    {
        if (qty > 0)
            quantity = qty;
        else
            quantity = 0; // Ensure non-negative quantity
    }
    int getQuantity() const
    {
        return quantity;
    }
    void setPricePerItem(double price)
    {
        if (price > 0)
            price_per_item = price;
        else
            price_per_item = 0.0; // Ensure non-negative price
    }
    double getPricePerItem() const
    {
        return price_per_item;
    }
    double getInvoiceAmount() const
    {
        return quantity * price_per_item;
    }
};
int main()
{
    Invoice invoice("12345", "Hammer", 5, 150.0);
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: Rs" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: Rs" << invoice.getInvoiceAmount() << endl;
    invoice.setQuantity(10);
    invoice.setPricePerItem(120.0);
    cout << "\nUpdated Invoice:" << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: Rs" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: Rs" << invoice.getInvoiceAmount() << endl;
    invoice.setQuantity(-3);
    invoice.setPricePerItem(-50.0);
    cout << "\nAfter setting invalid quantity and price:" << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: Rs" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: Rs" << invoice.getInvoiceAmount() << endl;
    return 0;
}
