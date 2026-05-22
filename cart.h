#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
private:
    std::vector<Product> products;

public:
    void addProduct(Product p);
    void removeProduct(int productId);
    void displayCart();
    float calculateTotal();
    std::vector<Product> getProducts();
};

#endif