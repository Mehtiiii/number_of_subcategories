#include <stdio.h>

int subcategories (int r, int n) {

    if (r == 0) return n;

    int continue_until = n - r;
    
    for (int i = n - 1; i > continue_until; --i) {
        n *= i;
    }
    
    for (int i = r - 1; i > 1; --i) {
        r *= i;
    }
    
    return n / r;
}

int main( void ) {

    int r, n;
    
    while(1) {
        scanf("%d%d", &r, &n);
        printf(">>%d\n", subcategories(r, n));
    }

    return 0;
}
