#include <string.h>

void RevertString(char *str)
{
    int length = strlen(str);
    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
