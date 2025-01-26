#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; 

    
    printf("Enter a word: ");
    scanf("%s", word);
    char first = word[0];                        
    char last = word[strlen(word) - 1];          

    
    if (first == last) {
        printf("The word \"%s\" starts and ends with the same letter.\n", word);
    } else {
        printf("The word \"%s\" does not start and end with the same letter.\n", word);
    }

    return 0;
}
