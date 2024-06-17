#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 16; row++){ // Made changes
    // unsigned short rowBits = font_11x16[(unsigned char)c][row];
    for (char col = 0; col < 11; col++){ // Made changes
      unsigned short rowBits = font_11x16[(unsigned char)c][col]; // Made changes
      unsigned short colMask = 1 << row; /* mask to solect bit associated bit */ // made changes
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    if (row < 15)
      putchar('\n');
  }
}
