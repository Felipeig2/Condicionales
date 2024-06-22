#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>


bool es_primo(int i);

int main(int argc, char* argv[]){
int n = atoi(argv[1]);

for(int i = 2; i <= n; i++)

 if (es_primo(i)) {
        n %= i;
            printf("%d ", i);
        }

}
bool es_primo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
     return true;
}

/*
 if( I % 2 == 0){
i += 1;
}

else{

}

return 0;
}
bool is_prime(int n){

    return true;
} */