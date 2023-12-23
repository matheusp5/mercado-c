//
// Created by Mxtheuz on 12/22/2023.
//

#include "cs50.h"

#ifndef MERCADO_PRODUCT_H
#define MERCADO_PRODUCT_H

struct Product {
    int id;
    string name;
    string description;
    float price;
};

typedef struct Product Product;

Product product_factory(int id, string name, string description, float price);
bool find_by_id(int id, Product *product, Product *products, int size);

#endif //MERCADO_PRODUCT_H
