//
// Created by Usuario on 12/24/2023.
//

#include <stdio.h>
#include <malloc.h>
#include "order.h"


int orderId = 1;
Order orders[50];

Order order_factory(int product, int user) {
    Order order = {
            orderId,
            product,
            user
    };
    orders[orderId - 1] = order;
    orderId++;
    return order;
}

Order* find_by_userid(int id,int *size) {
    int count = 0;
    Order* foundOrders = malloc(sizeof(Order) * 50);

    for (int i = 0; i < orderId - 1; i++) {
        if (orders[i].user == id) {
            foundOrders[count++] = orders[i];
        }
    }

    if (count > 0) {
        foundOrders = realloc(foundOrders, sizeof(Order) * count);
    } else {
        free(foundOrders);
        foundOrders = NULL;
    }

    *size = count;

    return foundOrders;
}