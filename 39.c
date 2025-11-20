#include <stdio.h>
#include <string.h>

int isSameChar(char a, char b) {
    // Convert uppercase to lowercase manually
    if (a >= 'A' && a <= 'Z') a = a + ('a' - 'A');
    if (b >= 'A' && b <= 'Z') b = b + ('a' - 'A');
    return a == b;
}

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (!isSameChar(str[start], str[end]))
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    printf("maryadit 125113052\n");

    return 0;
}