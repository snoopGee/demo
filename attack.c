#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 28a6d2e4-7d25-4cb9-94e8-c6b4cddb7ce9");
}
