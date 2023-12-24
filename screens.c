//
// Created by Mxtheuz on 12/23/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "screens.h"
#include "product.h"
#include "order.h"

int all_products(Product *products, int size) {
    printf("\n\tTodos os Produtos\n\n");
    for (int i = 0; i < size; i++) {
        printf("\t#%d: %s. R$ %.2f\n", products[i].id, products[i].name, products[i].price);
    }
    printf("\n");
    int id = get_int("\t Selecione o ID de um produto -> ");
    return id;
}

void one_product(Product product, int userId) {
    system("cls");
    printf("\n\t\t%s #%d\n", product.name, product.id);
    printf("\n\t%s\n", product.description);
    printf("\tR$ %.2f\n", product.price);
    string choose = get_string("\n\tDeseja comprar? (S/N) ");
    if(strcmp(choose, "S") == 0) {
        order_factory(product.id, userId);
    }
}