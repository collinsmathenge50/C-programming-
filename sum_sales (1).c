/* sum_sales.c
   Reads transaction amounts from sales.txt (text), computes total sales.
   Reg:CT100/G/26138/25
   NAME: Mathenge Collins mureithi 
   Description: Transaction and calculation of sales
   
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("sales.txt", "r");
    if (!fp) {
        perror("Error opening sales.txt");
        return 1;
    }

    double amount;
    double total = 0.0;
    int line = 0;

    while (fscanf(fp, "%lf", &amount) == 1) {
        total += amount;
        line++;
    }

    if (!feof(fp)) {
        // Could be malformed line
        fprintf(stderr, "Warning: stopped reading sales.txt before EOF (possible invalid data)\n");
    }

    fclose(fp); // ensure file is properly closed

    printf("Transactions read: %d\n", line);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}