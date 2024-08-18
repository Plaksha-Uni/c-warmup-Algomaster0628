#include <cstring>
#include <cassert>
#include <cstdio>

// Array Implementation.
char* mystrstr_array(const char* s1, const char* s2) {
    if (s2[0] == '\0') {
        return (char*)s1;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        int j;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (s2[j] == '\0') {
            return (char*)&s1[i];
        }
    }

    return nullptr;
}

// Pointer Implementation.
char* mystrstr_pointer(const char* s1, const char* s2) {
    if (*s2 == '\0') {
        return (char*)s1;
    }

    for (; *s1 != '\0'; s1++) {
        const char* p1 = s1;
        const char* p2 = s2;
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            return (char*)s1;
        }
    }

    return nullptr;
}


int main(int argc, char* argv[]) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr_array(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr_array(argv[1], argv[2]));
    printf("mystrstr_pointer(\"%s\",\"%s\" = %p\n",
	   argv[1], argv[2], mystrstr_pointer(argv[1],argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr_array(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr_pointer(argv[1], argv[2]));
}
