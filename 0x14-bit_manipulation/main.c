#include "main.h"
int main() {
    // Write C code here
if (get_endianness()) {
        printf("This system is little-endian.\n");
    } else {
        printf("This system is big-endian.\n");
    }
    return 0;
}
