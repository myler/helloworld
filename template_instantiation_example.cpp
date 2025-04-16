#include <iostream>
#include <type_traits>

// Template function definition
template <typename T>
void processValue(T value) {
    if constexpr (std::is_signed<T>::value) {
        // Handle signed types
        switch (value) {
            case -100:
                std::cout << "Value is -100" << std::endl;
                break;
            case -10:
                std::cout << "Value is -10" << std::endl;
                break;
            case -1:
                std::cout << "Value is -1" << std::endl;
                break;
            case 0:
                std::cout << "Value is 0" << std::endl;
                break;
            case 1:
                std::cout << "Value is 1" << std::endl;
                break;
            case 2:
                std::cout << "Value is 2" << std::endl;
                break;
            case 10:
                std::cout << "Value is 10" << std::endl;
                break;
            case 20:
                std::cout << "Value is 20" << std::endl;
                break;
            case 50:
                std::cout << "Value is 50" << std::endl;
                break;
            case 100:
                std::cout << "Value is 100" << std::endl;
                break;
            default:
                std::cout << "Value is something else: " << value << std::endl;
                break;
        }
    } else {
        // Handle unsigned types
        switch (value) {
            case 0:
                std::cout << "Value is 0" << std::endl;
                break;
            case 1:
                std::cout << "Value is 1" << std::endl;
                break;
            case 2:
                std::cout << "Value is 2" << std::endl;
                break;
            case 10:
                std::cout << "Value is 10" << std::endl;
                break;
            case 20:
                std::cout << "Value is 20" << std::endl;
                break;
            case 50:
                std::cout << "Value is 50" << std::endl;
                break;
            case 100:
                std::cout << "Value is 100" << std::endl;
                break;
            case 255:
                std::cout << "Value is 255 (maximum for unsigned char)" << std::endl;
                break;
            default:
                std::cout << "Value is something else: " << value << std::endl;
                break;
        }
    }
}

// Explicit template instantiation
template void processValue<int>(int);
template void processValue<char>(char);
template void processValue<short>(short);
template void processValue<long>(long);
template void processValue<unsigned int>(unsigned int);
template void processValue<unsigned char>(unsigned char);
template void processValue<unsigned short>(unsigned short);
template void processValue<unsigned long>(unsigned long);

int main() {
    // Implicit instantiation for int
    processValue(0);
    processValue(1);
    processValue(2);
    processValue(10);
    processValue(20);
    processValue(50);
    processValue(100);

    // Explicit instantiation for int
    processValue<int>(-1);
    processValue<int>(-10);
    processValue<int>(-100);

    // Implicit instantiation for char
    processValue('a');
    processValue('b');
    processValue('z');

    // Explicit instantiation for char
    processValue<char>('x');

    // Implicit instantiation for short
    processValue<short>(-10);
    processValue<short>(32767);

    // Implicit instantiation for long
    processValue<long>(100000L);
    processValue<long>(-100000L);

    // Implicit instantiation for unsigned int
    processValue<unsigned int>(0);
    processValue<unsigned int>(4294967295U);

    // Implicit instantiation for unsigned char
    processValue<unsigned char>(255);
    processValue<unsigned char>(0);

    // Implicit instantiation for unsigned short
    processValue<unsigned short>(65535);
    processValue<unsigned short>(0);

    // Implicit instantiation for unsigned long
    processValue<unsigned long>(1000000UL);
    processValue<unsigned long>(4294967295UL);

    return 0;
}

