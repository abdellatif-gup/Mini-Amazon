#include <vector>
#include <utility>
#include "Product.h"
#include "Order.h"

class Cart {
private:
    std::vector<std::pair<Product, int>> items; 

public:
    void addItem(const Product& p, int qty);
    void removeItem(int productId);
    void updateQty(int productId, int newQty);
    void displayCart() const;
    double calcTotal() const;
    Order checkout(const Customer& c); 
    void clear();
    bool isEmpty() const;
};
