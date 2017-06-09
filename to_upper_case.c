#include <cs50.h>
#include <stdio.h>
#include <string.h>

void toUpperCase(string s);

int main(void)
{
    // get string from user
    string s = get_string();
    
    // Change characters to upper case
    toUpperCase(s);
    
}

void toUpperCase(string s)
{
    if(s != NULL)
    {
        for(int i = 0, n = strlen(s); i < n; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - ('a'-'A'));
            }
            else 
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
