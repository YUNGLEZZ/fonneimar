// вариант4
#include <stdio.h>
int main(void) {
    int cpu_state[8] = {0};
    int memory[256] = {0};
    int i;
    while(scanf("%d", &i)==1 && i != 0) {
        for(int k = 0; k < 256; k++) {
            memory[k] = i;
        }
    }
}