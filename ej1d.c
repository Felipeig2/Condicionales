#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num = atoi(argv[1]);
    if (num == 0){
        printf("El numero es 0");
    }
    else if (num > 0){
        printf("El numero es positivo");
    }
    else{
        printf("El numero es negativo");
    }

    return 0;
}