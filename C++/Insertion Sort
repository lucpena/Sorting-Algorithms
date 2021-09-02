#include <iostream>
#include <stdint.h>

int main() {

    ////////////////////////////////////////////////////
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ////////////////////////////////////////////////////

    int32_t arr[1000000] = { 0 }, counter = 0, input = 0,
        aux = 0, testCases = 0, size = 0, ans = 0;

    //scanf("%d", &testCases);
    std::cin >> testCases;

    if (testCases <= 5) {

        for (int32_t k = testCases; k > 0; k--) {

            size = 0, ans = 0, counter = 0;

            //scanf("%d", &size);
            std::cin >> size;

            if (size <= 100000) {

                while (counter < size) {

                    //scanf("%d", &input);
                    std::cin >> input;
                    arr[counter] = input;
                    counter++;

                }

                int32_t i, key, j;

                for (i = 1; i < counter; i++) {

                    key = arr[i];
                    j = i - 1;

                    if( arr[i] <= arr[i - 1] ){
                        while (j >= 0 && arr[j] > key) {

                            arr[j + 1] = arr[j];
                            j--;
                            ans++;

                        }
                    }

                    arr[j + 1] = key;

                }

            }

            // Mostra resultado
            std::cout << ans << '\n';
            //printf("%d\n", ans);

        }

    }

    return 0;

}
