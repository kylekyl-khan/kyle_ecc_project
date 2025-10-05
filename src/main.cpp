#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <openssl/ec.h>
#include <openssl/ecdsa.h>
#include <openssl/obj_mac.h>
#include <openssl/bn.h>
#include <openssl/err.h>
#include <openssl/evp.h>

int main() {
    std::cout << "Succeeded in linking OpenSSL!" << std::endl;
    std::cout << "OpenSSL Version: " << OPENSSL_VERSION_TEXT << std::endl;

    EC_GROUP *ec_group = EC_GROUP_new_by_curve_name(NID_X9_62_prime256v1);
    if (ec_group == nullptr) {
        std::cerr << "Failed to create EC_GROUP." << std::endl;
        return 1;
    }
    std::cout << "Successfully created an EC_GROUP object for prime256v1." << std::endl;
    EC_GROUP_free(ec_group);

    return 0;
}