#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);



    char alphabets[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &alphabets[i]); // Note the space before %c to consume the newline character
    }

    int nmbr_Of_vwls = 0;
    for (int i = 0; i < n; i++) {
        
        if ((alphabets[i] == 'a' || alphabets[i] == 'e' || alphabets[i] == 'i' || alphabets[i] == 'o' || alphabets[i] == 'u' ||
             alphabets[i] == 'A' || alphabets[i] == 'E' || alphabets[i] == 'I' || alphabets[i] == 'O' || alphabets[i] == 'U')) {
            
            nmbr_Of_vwls++;
        }
    }

    printf(" %d\n", nmbr_Of_vwls);

    return 0; // Exit successfully
}
