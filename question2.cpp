#include <iostream>
#include <string>

int main() {
    std::string text;
    int vowels_count = 0;

    std::cout << "Enter a string of text: ";
    getline(std::cin, text);

    for (int i = 0; i < text.length(); i++) {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels_count++;
        }
    }

    std::cout << "Number of vowels in the string: " << vowels_count << std::endl;

    return 0;
}
