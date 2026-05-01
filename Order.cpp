
#include "Order.h"

Order::Order(vector<Product*> p, double t) {
    products = p;

    // 🎁 remise automatique
    if (t > 5000) {
        t = t * 0.9; // -10%
    }

    total = t;
}

double Order::getTotal() {
    return total;
}