
#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    // Your logic here
    int i;
    int x,y;
    uint16_t  z=0;
    x=val;
    for (i=7;i>=0;i--){
        y= val & 1<<i;
        x = y >> i;
        z=(z<<2)|x;
        printf("%d\n",z);    
    }
    return z;
}

int main() {
    uint8_t val;
    //scanf("%hhu", &val);

    uint16_t result = spread_bits(128);
    printf("%u", result);
    return 0;
}