/**
 * A Way too Long Words
 *
 * Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome
 * Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
 * This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
 * Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
 * You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char abbv[100];

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", abbv);
        int len = strlen(abbv);

        if (len > 10)
        {
            printf("%c%d%c\n", abbv[0], len - 2, abbv[len - 1]);
        }
        else
        {
            printf("%s\n", abbv);
        }
    }

    return 0;
}