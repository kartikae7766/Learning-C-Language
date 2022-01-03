#include <stdio.h>
int display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main()
{
    int ageArray[4] = {2, 8, 4, 12};

    // Passing second and third elements to display()
    display(int ageArray[4]); 
    return 0;
}
