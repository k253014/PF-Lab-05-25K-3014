#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 65) printf("Discount!\n");
    else if (age > 5) printf("Standard\n");
    else printf("Free\n");
}