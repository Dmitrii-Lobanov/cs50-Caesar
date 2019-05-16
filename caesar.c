#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    if(argc != 2)
    {
        printf("Usage: ./caesar 1\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    if(key<0)
    {
      printf("Usage: ./caesar 1\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("Plaintext: ");
        printf("Ciphertext: ");
        
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if(islower(plaintext[i]))
            {
                char encr_char = ((plaintext[i] + key) - 97) % 26 + 97;
                printf("%c", encr_char);
            }
            else if(isupper(plaintext[i]))
            {
                char encr_char = ((plaintext[i] + key) - 65) % 26 + 65;
                printf("%c", encr_char);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
    }
}
