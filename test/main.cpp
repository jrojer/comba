#include <comba/factorial.h>

int main()
{
    printf("%s\n", comba::Factorial(5) == 120 ? "OK" : "FAILED");
}