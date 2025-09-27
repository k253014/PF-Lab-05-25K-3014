#include<stdio.h>
int main() {
 char room, action;
 printf("Enter Room: (K:Kitchen, L:Living room): ");
 scanf("%c", &room);
 printf("Enter Action: (L:Lights, T:Thermostat): ");
 scanf(" %c", &action);
 switch (room) {
 case 'L':
 switch (action) {
 case 'L':
 printf("Adjusting ambient lighting!\n");
 break;
 case 'T':
 printf("Setting living room temperature.");
 break;
 default:
 printf("Invalid action.");
 }
 break;
 case 'K':
 switch (action) {
 case 'L':
 printf("Turning on bright task lighting!\n");
 break;
 case 'T':
 printf("Setting kitchen temperature.");
 break;
 default:
 printf("Invalid action.");
 }
 break;
 default:
 printf("Invalid Room!\n");
 }