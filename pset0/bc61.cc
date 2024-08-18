#include <stdio.h>

int main() {
    int byte_count = 0;
    int c;

    // Read characters one by one untill you reach EOF.
    while ((c = fgetc(stdin)) != EOF) {
        byte_count++;
    }

    // Print the byte count to stdout.
    fprintf(stdout, "%7d\n", byte_count);

    return 0;
}
