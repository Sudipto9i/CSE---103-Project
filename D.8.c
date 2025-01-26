#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char words[100][100]; 
    char letter;
    printf("Enter the number of words: ");
    scanf("%d",&n);
    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    
    printf("Enter the letter to check: ");
    scanf(" %c", &letter);


    printf("\nWords that end with '%c':\n", letter);
    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        if (words[i][len - 1] == letter) { 
            printf("%s\n", words[i]);
        }
    }

    return 0;
}
