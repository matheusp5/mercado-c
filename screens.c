//
// Created by Mxtheuz on 12/23/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "screens.h"
#include "product.h"

int all_products(Product *products, int size) {
    printf("\n\tTodos os Produtos\n\n");
    for (int i = 0; i < size; i++) {
        printf("\t#%d: %s. R$ %.2f\n", products[i].id, products[i].name, products[i].price);
    }
    printf("\n");
    int id = get_int("\t Selecione o ID de um produto -> ");
    return id;
}

void one_product(Product product) {
    system("cls");
    printf("\n\t\t%s #%d\n", product.name, product.id);
    printf("\n\t%s\n", product.description);
    printf("\n\t%.2f\n", product.price);
    getchar();
}