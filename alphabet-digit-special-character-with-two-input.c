#include<stdio.h>

int main (){
    char a;
    char b;
    printf ("enter the value :");
    scanf ("%c", &a);
    scanf ("%c", &b);
    if (a>='a' && a<='z' && a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf ("it's an alphabet  and lowercase and vowel\n");
    }
    else if (a>='a' && a<='z'){
        printf ("it's an alphabet  and lowercase and consonant\n");
    }
    else if (a>='A' && a<='Z' && a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        printf ("it's an alphabet and uppercase and vowel\n");
    }
    else if (a>='A' && a<='Z'){
        printf ("it's an alphabet and uppercase and consonant\n");
    }
    else if (a>='0' && a<='9'){
        printf ("it's a digit\n");
    }
    else {
        printf ("it's a special character\n");
    }
    if (b>='a' && b<='z' && b=='a' || b=='e' || b=='i' || b=='o' || b=='u'){
        printf ("it's an alphabet  and lowercase and vowel\n");
    }
    else if (b>='a' && b<='z'){
        printf ("it's an alphabet  and lowercase and consonant\n");
    }
    else if (b>='A' && b<='Z' && b=='A' || b=='E' || b=='I' || b=='O' || b=='U'){
        printf ("it's an alphabet and uppercase and vowel\n");
    }
    else if (b>='A' && b<='Z'){
        printf ("it's an alphabet and uppercase and consonant\n");
    }
    else if (b>='0' && b<='9'){
        printf ("it's a digit\n");
    }
    else {
        printf ("it's a special character");
    }
    return 0;
}
