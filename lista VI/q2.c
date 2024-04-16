#include <stdio.h> 
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int n, d;
    printf ("Digite o valor do numerador: ");
    scanf ("%i", &n);
    printf ("Digite o valor do denominador: ");
    scanf ("%i", &d);
    if (d == 0){
        printf ("A divisao e indefinida!");
    }
    else {
        if (n % d == 0){
            printf("e divisivel!");
        }
        else {
            printf ("nao e divisivel!");
        }
    }
    return (0);
}