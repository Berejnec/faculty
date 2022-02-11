#include <stdio.h>
#include <math.h>

double calculareK(int n) {
    int i;
    double k = 1;

    for(i = 0; i < n; i++)
        k = k * sqrt(1 + pow(2,-2*i));

    return k;
}
double CordicCos(double theta) {
    int n;
    printf("Numar pasi:");
    scanf("%d", &n);
    double x[n+1], y[n+1], z[n+1];
    x[0] = 1 / calculareK(n);
    y[0] = 0;
    z[0] = theta;

    int i;

    for(i = 0; i < n; i++)
    {
        printf("x[%d] = %.8f, y[%d] = %.8f, z[%d] = %.8f\n",i,x[i],i,y[i],i,z[i]);
        double exponent = pow(2, -i);
        printf("alfa[%d] = %.8f\n", i, atan(exponent));
        if(z[i] >= 0)
        {
            x[i+1] = x[i] - (exponent * y[i]);
            y[i+1] = y[i] + (exponent * x[i]);
            z[i+1] = z[i] - atan(exponent);
        }
        else
        {
            x[i+1] = x[i] + (exponent * y[i]);
            y[i+1] = y[i] - (exponent * x[i]);
            z[i+1] = z[i] + atan(exponent);
        }
    }
    return x[n];
}

double eroareAproximare(double CosCordic, double CosStandard) { // functie pentru a calcula eroarea de aproximare
    return CosCordic - CosStandard;
}

int main() {
    double cordicCos = CordicCos(M_PI / 6);
    printf("K = %.8f\n", calculareK(8));
    printf("cos(pi/6) cu metoda Cordic : %.8f\n", cordicCos);  // afisam rezultatul cu 8 zecimale
    printf("cos(pi/6) cu functia cos din libraria C : %.8f\n", cos(M_PI / 6));
    printf("Eroarea de aproximare este %.8f", eroareAproximare(cordicCos, cos(M_PI / 6))); // eroarea de aproximare
}