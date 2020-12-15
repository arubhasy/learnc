#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
            isdigit('8') ? "8 is a " : "8 is not a ", "digit",
            isdigit('#') ? "# is a " : "# is not a ", "digit");
    
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to isalpha:",
            isalpha('A') ? "A is a " : "A is not a ", "letter",
            isalpha('b') ? "b is a " : "b is not a ", "letter",
            isalpha('&') ? "& is a " : "& is not a ", "letter",
            isalpha('4') ? "4 is a " : "4 is not a ", "letter");
    
    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalnum:",
            isalnum('A') ? "A is a " : "A is not a ", "digit or a letter",
            isalnum('8') ? "8 is a " : "8 is not a ", "digit or a letter",
            isalnum('#') ? "# is a " : "# is not a ", "digit or a letter");
    
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:",
            islower('p') ? "p is a " : "p is not a ", "lowercase letter",
            islower('P') ? "P is a " : "P is not a ", "lowercase letter",
            islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
            islower('!') ? "! is a " : "! is not a ", "lowercase letter");
    
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper:",
            isupper('p') ? "p is a " : "p is not a ", "uppercase letter",
            isupper('P') ? "P is a " : "P is not a ", "uppercase letter",
            isupper('5') ? "5 is a " : "5 is not a ", "uppercase letter",
            isupper('!') ? "! is a " : "! is not a ", "uppercase letter");
    
    printf("%s%c\n%s%c\n%s%c\n%s%c\n",
            "u converted to uppercase is ", toupper('u'),
            "7 converted to uppercase is ", toupper('7'),
            "$ converted to uppercase is ", toupper('$'),
            "L converted to uppercase is ", toupper('L'));
}