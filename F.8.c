#include <stdio.h>
#include <ctype.h> 


int countUppercase(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char word[100];

    
    printf("Enter a word: ");
    scanf("%s", word);

    
    int uppercaseCount = countUppercase(word);
    printf("Number of uppercase letters: %d\n", uppercaseCount);

    return 0;
}
