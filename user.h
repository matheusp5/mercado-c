//
// Created by Mxtheuz on 12/22/2023.
//

#ifndef MERCADO_USER_H
#define MERCADO_USER_H

#include "cs50.h"

struct User {
    int id;
    string name;
    string email;
    string password;
};

typedef struct User User;

User user_factory(int id, string name, string email, string password);

#endif //MERCADO_USER_H
