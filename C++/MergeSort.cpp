#include <iostream>
#include <stdint.h>
#include <math.h>

void merge( int32_t* arr, int32_t inicio, int32_t meio, int32_t fim );

void mergeSort( int32_t* arr, int32_t inicio, int32_t fim ) {

    int32_t meio = 0;

    if( inicio < fim ) {

        meio = std::floor( (inicio+fim) / 2 );
        mergeSort( arr, inicio, meio) ;
        mergeSort( arr, meio + 1, fim );
        merge( arr, inicio, meio, fim );

    }

}

void merge( int32_t* arr, int32_t inicio, int32_t meio, int32_t fim ) {

    int32_t  fim1 = 0, fim2 = 0, p1, p2, tamanho, i, j, k;
    int32_t* temp;

    tamanho = fim - inicio + 1;

    p1 = inicio;
    p2 = meio + 1;

    temp =  ( int32_t* ) malloc( tamanho*sizeof( int32_t ) );

    if( temp != NULL ) {

        for( i = 0; i < tamanho; i++ ){
            if( !fim1 && !fim2 ){

                // Combina o array ordenado
                if( arr[p1] < arr[p2] )
                    temp[i] = arr[p1++];

                else
                    temp[i] = arr[p2++];

                // Checa se o srray terminou
                if( p1 > meio )
                    fim1 = 1;
                
                if( p2 > fim )
                    fim2 = 1;

            }

            // Copia o que sobrar
            else {

                if( !fim1 )
                    temp[i] = arr[p1++];

                else
                    temp[i] = arr[p2++];

            }

        }

        // Passa do array auxiliar para o array original
        for( j = 0, k = inicio; j < tamanho; j++, k++ )
            arr[k] = temp[j];

    }

    free( temp );

}

int main(){

    int32_t arr[100000], counter = 0, a = 0;
    //std::vector<int32_t> vx;
 
    
    while( scanf("%d",&a) != EOF ) {
    
        //vx.push_back( a );
        arr[counter] = a;
        counter++;

    }


    mergeSort( arr, 0, counter );
    

    // Mostra resultado
    for( int32_t j = 1 ; j <= counter; j++ ) {

        //int32_t toPrint = vx.at(j);
        //std::cout << "sample" << std::endl;

	    printf("%d ", arr[j]);

    }
    
    std::cin.ignore();
    

    return 0;
}
