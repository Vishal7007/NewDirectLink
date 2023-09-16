#include <iostream>
#include <string>

std::string convertLink(const std::string& inputLink) {
    // Find the positions of key elements in the input link
    size_t pos1 = inputLink.find("/b/");
    size_t pos2 = inputLink.find("/u/");

    if (pos1 == std::string::npos || pos2 == std::string::npos) {
        // Handle the case where the input link format is invalid
        return "Invalid input link";
    }

    // Extract the relevant parts of the input link
    std::string part1 = inputLink.substr(pos1 + 3, pos2 - (pos1 + 3));
    std::string part2 = inputLink.substr(pos2 + 3);

    // Construct the new link
    std::string newLink = "https://zdisk.fun/m?=" + part1 + "/" + part2;

    return newLink;
}

int main() {
    std::string inputLink;

    std::cout << "Enter the input link: ";
    std::cin >> inputLink;

    std::string convertedLink = convertLink(inputLink);

    std::cout << "Converted Link: " << convertedLink << std::endl;

    return 0;
}
