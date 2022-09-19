#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    printf("Program Luas dan Keliling Lingkaran \n");
    printf ("===================================== \n");
    printf ("by M.aly roiyan \n");

    float r = 0;
    float L = 0;
    float K = 0;
    const float phi = 3.14;

    printf ("Masukan jari-jari = ");
    scanf ("%f", &r);

    L = phi*r*r;
    printf ("Luasnya adalah %.2f\n" , L);

    K = 2*phi*r;
    printf ("Kelilingnya adalah %.2f\n" , K);

    return 0;
}
