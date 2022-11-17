#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{


    
    char msg[20];
    printf("Enter a message\n");
    fgets(msg, 20, stdin);
    printf("How many positions should I shift forward?\n");
    int key;
    int i;
    scanf("%i", &key);
    bool isLetter;
    for (i=0; msg[i] != '\n'; i++)

    {
        char newCharacter;
        char symbol;
        if (msg[i] == ' ')
        {
            printf("%c", msg[i]);
            continue;
        }

        if (isalpha(msg[i]) == 1)
        {

            key %= 26;
            int previousDecimalOfChar = (int) msg[i];
            int shifted = (previousDecimalOfChar + key);

            if ((int) msg[i] >= 65 && (int) msg[i] <= 90 && shifted > 90)
            {
                shifted = (previousDecimalOfChar + key) - 26;


            }
            else if((int) msg[i] >= 97 && (int) msg[i] <= 122 && shifted > 122)
            {
                shifted = (previousDecimalOfChar + key) - 26;


            }


            printf("%c", (char) shifted);
        }


        else
        {
                int previousDecimalOfChar =(int) msg[i];
                symbol = (char) previousDecimalOfChar;
                printf("%c", symbol);


        }



    }






    return 0;

}
