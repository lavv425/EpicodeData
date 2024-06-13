#include <stdio.h>
#include <math.h> // Per la funzione sqrt() e la costante M_PI
#define M_PI 3.14159265358979323846 //PER SICUREZZA PRENDO IL VALORE, MATH LO HA MA EVITO EVENTUALI ERRORI

int main()
{
    double D;
    double areaQuadrato, areaCerchio, areaTriangolo;

    printf("Inserisci il valore del lato/diametro D: ");
    scanf("%lf", &D);

    // Calcolo dell'area del quadrato
    areaQuadrato = D * D;

    // Calcolo dell'area del cerchio
    areaCerchio = M_PI * (D / 2) * (D / 2);

    // Calcolo dell'area del triangolo equilatero
    areaTriangolo = (sqrt(3) / 4) * D * D;

    // Stampa dei risultati
    printf("Area del quadrato con lato D = %.2f: %.2f\n", D, areaQuadrato);
    printf("Area del cerchio con diametro D = %.2f: %.2f\n", D, areaCerchio);
    printf("Area del triangolo equilatero con lato D = %.2f: %.2f\n", D, areaTriangolo);

    return 0;
}
