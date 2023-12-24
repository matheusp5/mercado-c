//
// Created by Usuario on 12/24/2023.
//

#ifndef MERCADO_ORDER_H
#define MERCADO_ORDER_H

struct Order {
    int id;
    int product;
    int user;
};

typedef struct Order Order;

Order order_factory(int product, int user);
Order* find_by_userid(int id, int* size);

#endif //MERCADO_ORDER_H
