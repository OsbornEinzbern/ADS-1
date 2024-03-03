// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
for (int i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
        return false;
    }
}
return true;
}

uint64_t nPrime(uint64_t n) {
int m = 1000000;
int m_cnt = 0;
for (int i = 1; i <= m; i++) {
    int k1 = 0;
    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            k1++;
            break;
        }
    }
    if (k1 == 0) {
        m_cnt++;
    }
    if (m_cnt == n) {
        return i;
        break;
    }
}
}

uint64_t nextPrime(uint64_t value) {
int n = 1000000;
for (int i = value; i <= n; i++) {
    int k1 = 0;
    int m_cnt = 1;
    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            k1++;
            break;
        }
    }
    if (k1 == 0) {
        m_cnt++;
    }
    if (m_cnt == 2) {
        return i;
        break;
    }
}

uint64_t sumPrime(uint64_t hbound) {
int sns = 0;
for (int i = 1; i < hbound; i++) {
    int k1 = 0;
    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            k1++;
            break;
        }
    }
    if (k1 == 0) {
        sns += i;
    }
}
return sns;
}
