#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i, j, count;
    char c, *s = malloc(1000 * sizeof(char));
    
    //take input string
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
        
    //calculate the frequency for each digit from 0 to 9    
    for(i = 0; i <= 9; i++)
    {
        count=0;
        
        //search accross all string
        for( j = 0; j < strlen(s); j++)
        {
            //pick a single char
            c = *(s+j);
            
            //if match increment
            if( c >= '0' && c<='9' && atoi(&c) == i)
                count++;
        }
        printf("%d ", count);
    }
    
    return 0;
}
