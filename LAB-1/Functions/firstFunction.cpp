#include <iostream>
int sum(int valueA, int valueB)
{
    int sum = 0;
    for (int i = valueA; i <= valueB; i++)
    sum += i;

    return sum;
}
int main()
{
    std::cout << "Sum from 1 to 10 is " << sum(1, 10);
    std::cout << "Sum from 20 to 37 is " << sum(20, 37);
    std::cout << "Sum from 35 to 49 is " << sum(35, 49);

    return 0;
}