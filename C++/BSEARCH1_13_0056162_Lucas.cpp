/*

    Lucas Araújo Pena - 13/0056162

    Conta no SPOJ: @lucpena
    Link para submissões: https://www.spoj.com/status/lucpena/


    III. Binary Search
    status: Recusado (Wrong Answer on Master Judge)


*/


#include <iostream>
#include <stdint.h>

int main() {

    int32_t arr[100000], counter = 0, a = 0,
        number_of_elements = 0, queries = 0;

    // Pega os valores N e Q
    scanf("%d", &number_of_elements);
    scanf("%d", &queries);

    // Recece o array
    while (counter < number_of_elements) {

        scanf("%d", &a);
        arr[counter] = a;
        counter++;

    }

    for (int32_t i = 0; i < queries; i++) {

        int32_t inicio = 0, posicao = 0;
        int32_t size = counter - 1;
        bool flag = false;
        const int8_t minus = -1;

        int32_t valor = 0;
        scanf("%d", &valor);


        while (inicio <= size) {

            posicao = (inicio + size) / 2;

            if (arr[posicao] == valor) {

                printf("%d\n", posicao);
                flag = true;
                break;

            }

            else {

                if (arr[posicao] > valor)
                    size = posicao - 1;

                else {
                    inicio = posicao + 1;
                }

            }

        }

        if (!flag)
            printf("%d\n", minus);


    }

    return 0;
}