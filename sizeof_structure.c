#include<stdio.h>

#pragma pack(1)

#if 0
struct test
{
        char ch;
        int a;
        float b;
};
int main()
{
        struct test *ptr = NULL;
        ptr++;
        printf("Size of structure = %ld\n", ptr);
}
#else
struct test
{
        char ch;
        int a;
        float b;
        struct test *ptr;
        double d;
}var;

int main()
{
        printf("Size of structure = %ld\n", (char*)(&var+1) - ((char *)&var));
}
#endif

