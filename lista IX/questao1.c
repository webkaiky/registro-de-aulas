#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int i, A[8];
    for (i = 0; i <= 7; i++) {
        printf ("Digite o %d valor inteiro: ", i + 1);
        scanf ("%d", &A[i]);
    }
    printf ("\nValores na ordem inversa:\n");
    for (i = 7; i >= 0; i--) {
        printf ("%d", A[i]);
    }
    return (0);
}