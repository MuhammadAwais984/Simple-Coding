#include <iostream>
using namespace std;

int main() {
   
    const double priceA = 12.5;
    const double priceB = 25.0; 
    const double priceC = 30.0; 
    
    int quantityA, quantityB, quantityC;
  
    cout << "Enter quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter quantity for Product C: ";
    cin >> quantityC;
   
    double totalA = priceA * quantityA;
    double totalB = priceB * quantityB;
    double totalC = priceC * quantityC;
    double totalCost = totalA + totalB + totalC;
    double discountedTotal = (totalCost > 200) ? totalCost * 0.9 : totalCost;
    double shippingCost = (discountedTotal < 150) ? 15.0 : 0.0;
    double finalTotal = discountedTotal + shippingCost;
    int loyaltyPoints = (finalTotal > 300) ? 50 : 20;
   
    cout << "Total cost for Product A: $" << totalA << endl;
    cout << "Total cost for Product B: $" << totalB << endl;
    cout << "Total cost for Product C: $" << totalC << endl;
    cout << "Overall total cost before discount: $" << totalCost << endl;
    cout << "Total cost after discount (if applicable): $" << discountedTotal << endl;
    cout << "Shipping cost: $" << shippingCost << endl;
    cout << "Final total including shipping: $" << finalTotal << endl;
    cout << "Loyalty points awarded: " << loyaltyPoints << endl;
    cout << "\nThank You\n"<<endl;

    return 0;
}
