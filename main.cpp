#include <iostream>
#include <iomanip>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "ja_JP.UTF-8");
    int iterations;
    std::cout << "How many iterations？: ";
    std::cin >> iterations;

    double pi = 0.0;
    for (int i = 0; i < iterations; i++) {
        // iが偶数の場合は正、奇数の場合は負の項
        const double term = ((i % 2 == 0) ? 1.0 : -1.0) / (2.0 * i + 1);
        pi += term;
    }
    pi *= 4.0; // Leibniz級数はπ/4に収束するので、4倍します

    // 固定小数点表示、ここでは小数点以下10桁を表示する設定にしています
    std::cout << std::fixed << std::setprecision(20);
    std::cout << "Simulated PI: " << pi << std::endl;
    return 0;
}
