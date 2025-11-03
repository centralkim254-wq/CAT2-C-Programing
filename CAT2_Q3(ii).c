/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
Description: programm to read integers 
*/
void process_file() {
    FILE *input_file, *output_file;
    int num, sum = 0, count = 0;
    double average;

    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        return;
    }

    while (fscanf(input_file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(input_file);

    if (count > 0) {
        average = (double)sum / count;
    } else {
        average = 0.0;
    }

    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file!\n");
        return;
    }

    fprintf(output_file, "Sum: %d\n", sum);
    fprintf(output_file, "Average: %.2f\n", average);
    fclose(output_file);
}
