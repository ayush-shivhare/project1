#include <iostream>
#include <string>
#include <cctype>

bool isPANValid(const std::string &panNumber) {
    // Check if the PAN length is 10 characters
    if (panNumber.length() != 10) {
        return false;
    }

    // Check the format of the PAN
    for (int i = 0; i < 5; ++i) {
        if (!isalpha(panNumber[i])) {
            return false;
        }
    }

    for (int i = 5; i < 9; ++i) {
        if (!isdigit(panNumber[i])) {
            return false;
        }
    }

    if (!isalpha(panNumber[9])) {
        return false;
    }

    // Simulated check: Assume all PANs are valid in this example
    return true;
}

int main() {
    std::string panNumber;

    // Input PAN number from the user
    std::cout << "Enter PAN Number: ";
    std::cin >> panNumber;

    // Perform PAN verification
    if (isPANValid(panNumber)) {
        std::cout << "PAN is valid. Verification successful.\n";
    } else {
        std::cout << "Invalid PAN. Verification failed.\n";
    }

    return 0;
}
