/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
Description: programm that reads and display 
*/
void display_files() {
FILE *input_file, *output_file;
char ch;
printf("--- Contents of input.txt ---\n");
input_file = fopen("input.txt", "r");
if (input_file == NULL) {
printf("Error opening input file!\n");
} else {
while ((ch = fgetc(input_file)) != EOF) {
putchar(ch);
}
fclose(input_file);
}
printf("\n");
printf("--- Contents of output.txt ---\n");
output_file = fopen("output.txt", "r");
if (output_file == NULL) {
printf("Error opening output file!\n");
} else {
while ((ch = fgetc(output_file)) != EOF) {
putchar(ch);
}
fclose(output_file);
}
printf("\n");
}
