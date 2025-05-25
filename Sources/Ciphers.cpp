#include "../Headers/Ciphers.h"

char* ceaserCipher(const char* password, unsigned step) {
    if (!password) {
        throw std::invalid_argument("Invalid password (nullptr)!");
    }

    size_t length = std::strlen(password);
    if (length == 0 || password[0] == '\0') {
        throw std::invalid_argument("Empty password!");
    }

    unsigned offset = step % 26;

    char* encrypted = new char[length + 1];

    for (size_t i = 0; i < length; ++i) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = 'A' + (ch - 'A' + offset) % 26;
        }
        else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = 'a' + (ch - 'a' + offset) % 26;
        }
        else {
            encrypted[i] = ch;
        }
    }

    encrypted[length] = '\0';

    return encrypted;
}
