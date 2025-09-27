#include<stdio.h>
int main() {
 int hasPrerequisite, isCourseFull;
 printf("Have Prerequisite? (1:Y, 0:N): ");
 scanf("%d",&hasPrerequisite);
 printf("Is course Full? (1:Y, 0:N): ");
 scanf("%d",&isCourseFull);
 if (hasPrerequisite == 1) {
 if (isCourseFull == 1) printf("Course Full!\n");
 else printf("You are enrolled!");
 } else {
 if (isCourseFull == 1)
 printf("Cannot enroll: prerequisite missing and course is full!\n");
 else printf("Cannot enroll: prerequisite missing\n");
 }
}