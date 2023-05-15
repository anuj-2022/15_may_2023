#include <stdio.h>

void stringCopy(char* destination, const char* source) 
{
    while (*source != '\0') 
    {
        *destination = *source;
        
        destination++;
        source++;
    }
    
    *destination = '\0';
}

int main() {
    const char* source ="THUNDERSOFT HYDERABAD";
    char destination[20];
    
    stringCopy(destination, source);
    
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}

