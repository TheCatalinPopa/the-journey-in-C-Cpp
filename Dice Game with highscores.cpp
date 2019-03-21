/*3. Scrieți o aplicație interactivă care simulează utilizarea unei perechi de zaruri.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // pt. getch()
#include <string.h>
#include <stdlib.h> // pt. exit(int)
#include <time.h>

int main(void)
{
    unsigned int n1, n2, x; //numere mai mari decat 0
    do
    {
        srand(time(NULL));
        n1 = rand() % 6 + 1;
        n2 = rand() % 6 + 1;
        printf("Perechea: \n");
        printf("%u, %u", n1, n2);
        printf("\n\nApasa 1 pentru a da cu zarul si 0 daca vrei sa termini: ");
        scanf("%d", &x);        
    } while (x == 1);
    _getch();
    return 0;
}
