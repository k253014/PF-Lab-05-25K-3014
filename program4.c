#include<stdio.h>
#include<string.h>
int main() {
 char username[20];
 char password[20];
 printf("Please enter your username: ");
 scanf("%s", username);
 printf("Please enter your password: ");
 scanf("%s", password);
 if (strcmp(username, "john.doe") == 0){
 if (strcmp(password,"12345678") == 0) printf("User logged in!\n");
 else printf("Password is incorrect!\n");
 } else printf("Username not found!\n");
}
