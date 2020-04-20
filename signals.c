#include <signal.h>
#include<stdio.h>
#include<stdlib.h>
int beeps=0;

void handler(int sig) {
    if (beeps<5) {
        alarm(3);
        beeps++;
    } else {
        printf("Done\n");
        exit(0);
    }
}

int main() {
    signal(SIGALRM, handler);
    alarm(3);

    while(1) { printf("hello "); }
    exit(0);
}

