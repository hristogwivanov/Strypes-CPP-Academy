#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

bool almost_equal_absolute(float a, float b, float epsilon) {
    return fabs(a - b) < epsilon;
}

bool almost_equal_relative(float a, float b, float epsilon) {
    return fabs(a - b) / std::max(fabs(a), fabs(b)) < epsilon;
}

bool almost_equal_combined(float a, float b, float abs_epsilon, float rel_epsilon) {
    return fabs(a - b) <= std::max(abs_epsilon, rel_epsilon * std::max(fabs(a), fabs(b)));
}

bool almost_equal_absolute(double a, double b, double epsilon) {
    return fabs(a - b) < epsilon;
}

bool almost_equal_relative(double a, double b, double epsilon) {
    return fabs(a - b) / std::max(fabs(a), fabs(b)) < epsilon;
}

bool almost_equal_combined(double a, double b, double abs_epsilon, double rel_epsilon) {
    return fabs(a - b) <= std::max(abs_epsilon, rel_epsilon * std::max(fabs(a), fabs(b)));
}

void test_float(float a, float b, float epsilon) {
    std::cout << "Сравнение на float: a = " << a << ", b = " << b << "\n";
    
    if (almost_equal_absolute(a, b, epsilon)) {
        std::cout << "Абсолютно сравнение: Коректно\n";
    } else {
        std::cout << "Абсолютно сравнение: Некоректно\n";
    }
    
    if (almost_equal_relative(a, b, epsilon)) {
        std::cout << "Относително сравнение: Коректно\n";
    } else {
        std::cout << "Относително сравнение: Некоректно\n";
    }
    
    if (almost_equal_combined(a, b, epsilon, epsilon)) {
        std::cout << "Комбинирано сравнение: Коректно\n";
    } else {
        std::cout << "Комбинирано сравнение: Некоректно\n";
    }
}

void test_double(double a, double b, double epsilon) {
    std::cout << "Сравнение на double: a = " << a << ", b = " << b << "\n";
    
    if (almost_equal_absolute(a, b, epsilon)) {
        std::cout << "Абсолютно сравнение: Коректно\n";
    } else {
        std::cout << "Абсолютно сравнение: Некоректно\n";
    }
    
    if (almost_equal_relative(a, b, epsilon)) {
        std::cout << "Относително сравнение: Коректно\n";
    } else {
        std::cout << "Относително сравнение: Некоректно\n";
    }
    
    if (almost_equal_combined(a, b, epsilon, epsilon)) {
        std::cout << "Комбинирано сравнение: Коректно\n";
    } else {
        std::cout << "Комбинирано сравнение: Некоректно\n";
    }
}

void test_floating_point_comparisons() {
    int total_tests_float = 0, correct_tests_float = 0;
    int total_tests_double = 0, correct_tests_double = 0;

    float test_cases_float[][2] = {
        {1.0f, 1.0f + std::numeric_limits<float>::epsilon()},
        {1000000.0f, 1000000.1f},
        {1.0f, 1.00001f},
        {0.0f, std::numeric_limits<float>::min()},
        {-1.0f, -1.00001f}
    };

    double test_cases_double[][2] = {
        {1.0, 1.0 + std::numeric_limits<double>::epsilon()},
        {1000000.0, 1000000.0001},
        {1.0, 1.0000000001},
        {0.0, std::numeric_limits<double>::min()},
        {-1.0, -1.0000000001}
    };

    float epsilon_float = 1e-5f;
    double epsilon_double = 1e-9;

    std::cout << "\n=== Тестване за float ===\n";
    for (const auto& test_case : test_cases_float) {
        total_tests_float += 3;  
        float a = test_case[0];
        float b = test_case[1];
        
        if (almost_equal_absolute(a, b, epsilon_float)) correct_tests_float++;
        if (almost_equal_relative(a, b, epsilon_float)) correct_tests_float++;
        if (almost_equal_combined(a, b, epsilon_float, epsilon_float)) correct_tests_float++;

        test_float(a, b, epsilon_float);
        std::cout << "\n";
    }

    std::cout << "\n=== Тестване за double ===\n";
    for (const auto& test_case : test_cases_double) {
        total_tests_double += 3;  
        double a = test_case[0];
        double b = test_case[1];
        
        if (almost_equal_absolute(a, b, epsilon_double)) correct_tests_double++;
        if (almost_equal_relative(a, b, epsilon_double)) correct_tests_double++;
        if (almost_equal_combined(a, b, epsilon_double, epsilon_double)) correct_tests_double++;

        test_double(a, b, epsilon_double);
        std::cout << "\n";
    }

    std::cout << "=== Обобщени резултати ===\n";
    std::cout << "Общо тестове за float: " << total_tests_float << "\n";
    std::cout << "Коректни тестове за float: " << correct_tests_float << "\n";
    std::cout << "Некоректни тестове за float: " << total_tests_float - correct_tests_float << "\n\n";
    
    std::cout << "Общо тестове за double: " << total_tests_double << "\n";
    std::cout << "Коректни тестове за double: " << correct_tests_double << "\n";
    std::cout << "Некоректни тестове за double: " << total_tests_double - correct_tests_double << "\n\n";
    
    int total_tests = total_tests_float + total_tests_double;
    int correct_tests = correct_tests_float + correct_tests_double;
    
    std::cout << "Общо тестове: " << total_tests << "\n";
    std::cout << "Коректни тестове: " << correct_tests << "\n";
    std::cout << "Некоректни тестове: " << total_tests - correct_tests << "\n";
}

int main() {
    test_floating_point_comparisons();
    return 0;
}
