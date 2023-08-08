#include<stdint.h>
#include<stdio.h>
#include<conio.h>

#define SWAP_ENDIAN_32(x) (((x) >> 24) | (((x) & 0x00FF0000) >> 8) | (((x) & 0x0000FF00) << 8) | ((x) << 24))

int main() {
    uint32_t value = 0x12345678;
    uint32_t swapped_value = SWAP_ENDIAN_32(value);
    printf("Original value: 0x%x\n", value);
    printf("Swapped value: 0x%x\n", swapped_value);
    return 0;
}
