/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
Description:programm for input 1o intergers 
*/
#include <stdlib.h>
void write_to_file() {
FILE *file_ptr;
int num;
file_ptr = fopen("input.txt", "w");
if (file_ptr == NULL) {
printf("Error opening file!\n");
return;
}
printf("Enter 10 integers:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &num);
fprintf(file_ptr, "%d ", num);
}
fclose(file_ptr);
}
