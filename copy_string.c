#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *
 * String is array of chars
 * q w e r t y /0 
 * 
 * at the end we have /0 which indicades end of the string 
 */

int main(void)
{
    printf("s: ");
    char *s = get_string();
    
    // check given string is NULL
    if(s == NULL)
    {
        return 1;
    }
    
    // allocate memory 
    char *t = malloc(strlen(s) + 1);
    
    // copy chars into allocated memory which is empty before loop
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }
    
    // make copied char* first character to upper case
    if(strlen(t) > 0) 
    {
        t[0] = toupper(t[0]);
    }
    
    // print result
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
}
