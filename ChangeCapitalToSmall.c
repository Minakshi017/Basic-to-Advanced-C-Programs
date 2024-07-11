#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("/n Enter any Capital Alphabet ");
    scanf("%[A-Z]", &ch);

    ch = ch + 32;

    Printf("small letter is %c ", ch);
    return 0;

}
