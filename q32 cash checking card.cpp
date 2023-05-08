#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
    int num, sum = 0, check_digit;
    char num_str[5], new_num_str[6];

    // Step 1: Accept a four-digit number into one variable
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Step 2: Convert the number to a string
    sprintf(num_str, "%d", num);

    // Step 3: Add the digits of the number
    for (int i = 0; i < strlen(num_str); i++) {
        sum += num_str[i] - '0';
    }

    // Step 4: Determine the check digit
    check_digit = (sum % 2 == 0) ? 0 : 1;

    // Step 5: Concatenate the check digit to the end of the number
    sprintf(new_num_str, "%s%d", num_str, check_digit);

    // Step 6: Convert the new number string back to an integer
    int new_num = atoi(new_num_str);

    // Step 7: Print the original number and the new number
    printf("Original number: %d\nNew number: %d\n", num, new_num);

    return 0;
}

