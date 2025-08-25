#include <stdio.h>
#include <math.h>

int main(){

    printf("Welcome!\n\n");
    printf("This program calculates:\n(1)Area(of a circle)\n");
    printf("(2)Circumference(of a circle)\n(3)Volume(of a sphere)\n(4)Surface Area(of a sphere)\nUPTO 2 DECIMAL PLACES\n\n");
    printf("Radius of both the Circle and the Sphere is r(in m)(All measurements are done in SI units).\n\n");

    double r = 0.0;
    double AreaC = 0.0;
    double AreaS = 0.0;
    double Circumference = 0.0;
    double Volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius(r): ");
    scanf("%lf", &r);

    AreaC = PI*pow(r,2);
    Circumference = 2*PI*r;
    Volume = (4.0/3.0)*PI*pow(r,3);
    AreaS = 4*PI*pow(r,2);

    printf("\nArea(of the circle): %.2lf\n",AreaC);
    printf("Circumference(of the circle): %.2lf\n",Circumference);
    printf("Volume(of the sphere): %.2lf\n",Volume);
    printf("Surface Area(of the sphere): %.2lf\n",AreaS);


    
    



    return 0;
}