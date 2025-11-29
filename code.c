#include <stdio.h>

int main() {
char username1[100], username2[100];
char email1[150], email2[150];
char fixed[20] = "@gmail.com";
int i, j, length1 = 0, length2 = 0;
printf("Enter first username: ");
scanf("%s", username1);
for (i = 0; username1[i]; i++) {
email1[i] = username1[i];
length1++;
}
for (j = 0; fixed[j]; j++) {
email1[i + j] = fixed[j];
}
email1[i + j];
printf("Enter second username: ");
scanf("%s", username2);
for (i = 0; username2[i]; i++) {
email2[i] = username2[i];
length2++;
}
for (j = 0; fixed[j]; j++) {
email2[i + j] = fixed[j];
}
email2[i + j];
printf("\n \t\tRESULTS\n");
printf("User 1 Email: %s\n", email1);
printf("Length of username1: %d\n", length1);
printf("User 2 Email: %s\n", email2);
printf("Length of username2: %d\n", length2);
printf("\nCOMPARISON\n");
if (length1 > length2) {
printf("Username 1 is longer than Username 2.\n");
}
else if (length1 < length2) {
printf("Username 2 is longer than Username 1.\n");

}
else {
printf("Both usernames have equal length.\n");
}
return 0;
}
