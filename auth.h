//
// Created by Mxtheuz on 12/22/2023.
//

#ifndef MERCADO_AUTH_H
#define MERCADO_AUTH_H

#include <stdbool.h>
#include "user.h"

bool authenticate(char* email, char* password, User *user);

#endif //MERCADO_AUTH_H
