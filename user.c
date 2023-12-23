//
// Created by Mxtheuz on 12/22/2023.
//

#include "user.h"

typedef char* string;

typedef struct User User;

User user_factory(int id, string name, string email, string password) {
    User user = {
            id,
            name,
            email,
            password
    };
    return user;
}
