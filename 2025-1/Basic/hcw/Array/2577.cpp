#include <iostream>

int main()
{
    int count[10] = {};
    int a, b, c;
    std::cin >> a >> b >> c;
    int result = a*b*c;

    while (result != 0) {
        count[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << count[i] << std::endl;
    }
    return 0;
}
