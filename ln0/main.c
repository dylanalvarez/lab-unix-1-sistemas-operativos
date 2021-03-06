#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void ln0(const char *original, const char *link) {
    if (symlink(original, link) == -1) { perror(""); }
}

int main(int argc, char *argv[]) {
    if (argc < 3) { return -1; }
    ln0(argv[1], argv[2]);
    return argc & 0;
}
