#include<stdio.h>
int main() {
    int permission;
    printf("Enter Permission (1: READ, 2: WRITE, 4: EXECUTE):");
    scanf("%d",&permission);
    if ((permission  & 4) == 4) {
        printf("Access granted: full control\n");
    }
    else if  ((permission & 3) == 3) {
        printf("Access granted: Read and Write\n");
    }
    else if ((permission & 2) == 2) {
        printf("Access granted: Write only\n");
    }
    else if ((permission & 1) == 1) {
        printf("Access granted: read only\n");
    }
    else printf("Access denied!\n");
}