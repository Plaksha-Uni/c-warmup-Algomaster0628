#include <cstdio>
#include <cctype>

int main() {
    int lines = 0, words = 0, bytes = 0;
    bool inside_word = false;
    int c;

    while ((c = fgetc(stdin)) != EOF) {
        bytes++;

        if (c == '\n') {
            lines++;
        }

        if (isspace(c)) {
            if (inside_word) {
                words++;
                inside_word = false;
            }
        } else {
            inside_word = true;
        }
    }

    //if the last character was part of a word, count it
    if (inside_word) {
        words++;
    }

    fprintf(stdout, "%7d %7d %7d\n", lines, words, bytes);
    return 0;
}
