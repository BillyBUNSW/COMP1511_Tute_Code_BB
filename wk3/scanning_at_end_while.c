#include <stdio.h>

int main(void) {
    int scanned_number;
    int sum = 0;
    
    scanf("%d", &scanned_number);

    while (scanned_number >= 0) {
        sum += scanned_number;
        scanf("%d", &scanned_number);
    }
}
