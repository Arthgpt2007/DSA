#include <stdio.h>
#include <string.h>

int main()
{
    //palindrome string check
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            printf("Not a palindrome\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome\n");
    return 0;
}