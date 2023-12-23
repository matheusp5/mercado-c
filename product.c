//
// Created by Mxtheuz on 12/22/2023.
//

#include "product.h"

typedef char* string;

typedef struct Product Product;

Product product_factory(int id, string name, string description, float price) {
    Product product = {
            id,
            name,
            description,
            price
    };
    return product;
}

bool find_by_id(int id, Product *product, Product *products, int size) {
    bool result = false;

    for (int i = 0; i < size; i++) {
        if(products[i].id == id) {
            result = true;
            *product = products[i];
            break;
        }
    }

    return result;
}
