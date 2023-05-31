#include <iostream>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T a) {
    std::to_string(a);
};

template <ConvertibleToStdString T, ConvertibleToStdString P>
std::string concatenate(T a, P b) {
    return std::to_string(a) + std::to_string(b);
}

int main() {
    auto result_1 = concatenate(22.22,33.33);
    auto result_2 = concatenate(22,33);
    std::cout << "result_1 : " << result_1 << std::endl;
    std::cout << "result_2 : " << result_2 << std::endl;
}