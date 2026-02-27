// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  EXPECT_FALSE(checkPrime(3));
}

TEST(st1, checkPrime3) {
  EXPECT_TRUE(checkPrime(5));
}

TEST(st1, checkPrime4) {
  EXPECT_TRUE(checkPrime(7));
}

 TEST(st1, nPrime5) {
  EXPECT_EQ(nPrime(3), 5);
}

TEST(st1, nPrime6) {
  EXPECT_EQ(nPrime(5), 7);
}

TEST(st1, nPrime7) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime8) {
  EXPECT_EQ(nPrime(9), 11);
}

TEST(st1, nextPrime9) {
  EXPECT_EQ(nextPrime(3), 6);
}

TEST(st1, nextPrime10) {
  EXPECT_EQ(nextPrime(1), 3);
}

TEST(st1, nextPrime11) {
  EXPECT_EQ(nextPrime(9), 110);
}

TEST(st1, sumPrime12) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(st1, sumPrime13) {
  EXPECT_EQ(sumPrime(200), 14291);
}
