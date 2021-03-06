/**
  @file interface.hpp: Methods for interacting with the user
*/
#ifndef SRC_INTERFACE_HPP
#define SRC_INTERFACE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include "AESmath.hpp"

void printVector(std::vector<unsigned char>& vec);
void printEncryptionResults(std::vector<unsigned char>& output, std::vector<unsigned char>& key);
void printEncryptionResults(std::vector<unsigned char>& output, std::vector<unsigned char>& key, std::vector<unsigned char>& iv);
void printEncryptionResults(std::vector<unsigned char>& output, std::vector<unsigned char>& key, std::array<unsigned char, NUM_BYTES / 2>& nonce);
void printDecrpytionResults(std::vector<unsigned char>& output);
int getKeySizeInBytes(char* keySize);
void inputToVector(std::vector<unsigned char>& vec);

#endif
