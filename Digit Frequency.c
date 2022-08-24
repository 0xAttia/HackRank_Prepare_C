#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char *s = malloc(1000 * sizeof(char));
    
    //take input string
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
        
    //calculate the frequency for each digit from 0 to 9    
    for(int i = 0; i <= 9; i++)
    {
        int count = 0;
        
        //search accross all string
        for(int j = 0; j < strlen(s); j++)
        {
            //if match increment
            if( s[j] == i+ '0')
                count++;
        }
        printf("%d ", count);
    }
    
    return 0;
}
