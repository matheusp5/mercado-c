//
// Created by Mxtheuz on 12/22/2023.
//

#include <stdbool.h>
#include "user.h"
#include <string.h>

bool authenticate(char* email, char* password, User *user) {
    User user1 = {
            1,
            "Matheus Piccoli",
            "matheus@gmail.com",
            "matheus"
    };
    User user2 = {
            2,
            "Josevaldo",
            "josevaldorh@gmail.com",
            "rg@@123"
    };
    User user3 = {
            3,
            "Pedro",
            "pedrofinanceiro@gmail.com",
            "financeiro@@123"
    };
    User users[] = {
            user1,
            user2,
            user3
    };
    bool result = false;

    for (int i = 0; i < sizeof(users) / sizeof(users[0]); ++i) {
        if(strcmp(users[i].email, email) == 0 && strcmp(users[i].password, password) == 0) {
            *user = users[i];
            result = true;
        }
    }

    return result;


}
