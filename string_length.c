#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
    // get a string from user
    string s = get_string();
    
    // set char-counter to 0
    int n = 0;
    
    // increment n till end of the string. 
    // \0 - sign stored in memory indicates end of the string
    while(s[n] != '\0') 
    {
        n++;
    }
    
    // print string length
    printf("%i\n", n);
}
