#include <stdio.h>
void main()
{
    char c;
    int lowercasevowel, uppercasevowel;
printf("Enter an alphabet: ");
    scanf("%c",&c);
    lowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercasevowel || uppercasevowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);

}
