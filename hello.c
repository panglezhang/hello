#include <stdio.h>

int main(int argc, char** argv) {
    const char* name = argc > 1 ? (const char*)argv[1] : (const char*)"world";
    printf("Hello %s!\n", name);
    return 0;
}
