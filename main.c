#include <stdio.h>
#include <stdlib.h>

#include "cs50.h"
#include "user.h"
#include "product.h"
#include "auth.h"
#include "screens.h"


int main() {
    Product products[] = {
        product_factory(1,
                        "Carro",
                        "Um otimo carro de familia.",
                        30),
        product_factory(
                2,
                "Computador",
                "Um computador muito bom.",
                20),
        product_factory(
                3,
                "Televisao",
                "Uma televisao muito boa.",
                10)
    };

    printf("\n\tSeja bem-vindo ao mercadinho!\n");
    printf("\tPara comecar, entre com sua conta.\n\n");

    User user;
    string email = get_string("\t  Email: ");
    string password = get_string("\t  Senha: ");
    if(authenticate(email, password, &user)) {
        printf("\n\t  Autenticado com sucesso, seja bem-vindo novamente %s!\n", user.name);
        while (true) {
            printf("\n\tO que voce deseja fazer?\n\n");
            printf("\t1- Ver todos os produtos\n");
            printf("\t2- Sair\n\n");
            int choose = get_int("\t-> ");
            bool exited = false;
            switch (choose) {
                case 1:
                    system("cls");
                    choose = all_products(products, 3);

                    Product choosedProduct;
                    if(find_by_id(choose, &choosedProduct, products, 3)) {
                        one_product(choosedProduct);
                    }
                    break;
                case 2:
                    exited = true;
                    break;
            }
            if(exited) {
                break;
            }
            system("cls");
        }
    } else {
        printf("\n\t  Credenciais incorretas.\n");
        system("PAUSE");
    }


    return 0;
}
