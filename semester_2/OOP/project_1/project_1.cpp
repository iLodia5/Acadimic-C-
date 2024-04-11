#include <iostream>
//max value between two constractor <chat gpt>
class MaxFinder {
public:
    // First constructor with two int variables
    MaxFinder(int a, int b) : value1(a), value2(b) {}

    // Second constructor with three float variables
    MaxFinder(float x, float y, float z) : floatValue1(x), floatValue2(y), floatValue3(z) {}

    // Method to find the maximum among the provided values
    float findMaximum() {
        // Find maximum for integers
        int maxInt = (value1 > value2) ? value1 : value2;

        // Find maximum for floats
        float maxFloat = (floatValue1 > floatValue2) ? ((floatValue1 > floatValue3) ? floatValue1 : floatValue3) : ((floatValue2 > floatValue3) ? floatValue2 : floatValue3);

        // Return the overall maximum
        return (maxInt > maxFloat) ? static_cast<float>(maxInt) : maxFloat;
    }

private:
    int value1, value2;
    float floatValue1, floatValue2, floatValue3;
};

int main() {
    // Example usage
    MaxFinder firstConstructorInstance(10, 20);
    MaxFinder secondConstructorInstance(5.5f, 8.3f, 12.1f);

    // Find and print the maximum for each instance
    std::cout << "Maximum from first constructor: " << firstConstructorInstance.findMaximum() << std::endl;
    std::cout << "Maximum from second constructor: " << secondConstructorInstance.findMaximum() << std::endl;

    return 0;
}
