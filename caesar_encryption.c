#include <cs50.h>
#include <string.h>
#include <stdio.h>

void encrypt_string(string encrypt_value, int encrypt_key);

/**
 * Program: Caesar encryptor
 * 
 * Background: 
 * - Unencrypted text is 'plaintext'
 * - Encrypted text is 'ciphertext'
 * 
 */ 

int main(int argc, string argv[]) 
{
    
    if(argc == 2)
    {
        printf("plaintext: ");
        
        // get word to encrypt
        string s = get_string();
        
        encrypt_string(s, atoi(argv[1]));
    } 
    else
    {
        printf("Usage: ./caesar k\n");
    }
    
}


void encrypt_string(string encrypt_value, int encrypt_key)
{
    
    if(encrypt_key > 26)
    {
        encrypt_key = encrypt_key % 26;
    }
    
    printf("ciphertext: ");
    
    for(int i = 0, n = strlen(encrypt_value); i < n; i++) 
    { 
        
        // For lower case decrypt
        if(encrypt_value[i] >= 'a' && encrypt_value[i] <= 'z')
        {
            if((encrypt_value[i] + encrypt_key) <= 'z')
            {
                printf("%c", encrypt_value[i] + encrypt_key);
            }
            else if((encrypt_value[i] + encrypt_key) > 'z')
            {
                int result_value = (encrypt_value[i] + encrypt_key) - 'z' - 1;
                printf("%c", 'a' + result_value);
            }
        }
        
        // For upper case decrypt
        else if(encrypt_value[i] >= 'A' && encrypt_value[i] <= 'Z')
        {
            if((encrypt_value[i] + encrypt_key) <= 'Z')
            {
                printf("%c", encrypt_value[i] + encrypt_key);
            }
            else if((encrypt_value[i] + encrypt_key) > 'Z')
            {
                int result_value = (encrypt_value[i] + encrypt_key) - 'Z' - 1;
                printf("%c", 'A' + result_value);
            }
        }
        
        // Default when sign is not alphabetical
        else 
        {
            printf("%c", encrypt_value[i]);
        }
        
    }
    printf("\n");
}
