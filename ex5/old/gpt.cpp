#include <iostream>
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<double>& point1, const std::vector<double>& point2) {
    if (point1.size() != point2.size()) {
        throw std::invalid_argument("Points must have the same number of dimensions");
    }

    double sum = 0.0;
    for (size_t i = 0; i < point1.size(); ++i) {
        sum += (point1[i] - point2[i]) * (point1[i] - point2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;

    std::vector<double> point1(n);
    std::vector<double> point2(n);

    std::cout << "Enter the coordinates for the first point:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Coordinate " << i + 1 << ": ";
        std::cin >> point1[i];
    }

    std::cout << "Enter the coordinates for the second point:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Coordinate " << i + 1 << ": ";
        std::cin >> point2[i];
    }

    try {
        double distance = calculateDistance(point1, point2);
        std::cout << "The distance between the two points is: " << distance << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

