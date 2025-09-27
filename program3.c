#include<stdio.h>
#include<math.h>
int main() {
 int a,b,c;
 float discriminant;
 printf("Enter a,b,c for (ax^2 + bx + c = 0):");
 scanf("%d %d %d",&a,&b,&c);
 discriminant = pow(b,2) - 4 * a * c;
 if(discriminant > 0) printf("Two real roots!\n");
 else if (discriminant == 0) printf("One real root!\n");
 else printf("Imaginary roots!\n");
 return 0;
}
