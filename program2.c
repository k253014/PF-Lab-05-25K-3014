#include<stdio.h>
int main() {
 int powerOn;
 char lightColor;
 printf("Enter Power (1: On, 0: Off): ");
 scanf("%d", &powerOn);
 if (powerOn == 1) {
 printf("Enter Light Color: (R/Y/G): ");
 scanf(" %c", &lightColor);
 switch(lightColor) {
 case 'R':
 printf("Stop!\n");
 break;
 case 'Y':
 printf("Caution!\n");
 break;
 case 'G':
 printf("Go!\n");
 break;
 default:
 printf("Invalid light color!\n");
 }
 } else printf("Signal Off!");
}
