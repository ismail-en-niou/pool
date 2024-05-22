
#include <stdio.h>
unsigned char swap_bits(unsigned char octet) {
    // Mask to isolate the lower 4 bits (right half)
    unsigned char right_half = octet & 0x0F;

    // Mask to isolate the upper 4 bits (left half)
    unsigned char left_half = octet & 0xF0;

    // Shift the right half to the left by 4 positions
    right_half <<= 4;

    // Shift the left half to the right by 4 positions
    left_half >>= 4;

    // Combine the swapped halves
    return right_half | left_half;
}


int main() {
    unsigned char byte; // Binary: 01000001

    printf("Original byte: %02X\n", byte);

    unsigned char swapped_byte = swap_bits(byte);

    printf("Swapped byte: %02X\n", swapped_byte);

    return 0;
}
