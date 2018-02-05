#include "pch.h"
#include <set>
#include <iostream>
#include "../prime_factorization/prime_factors.h"

TEST(Prime_numbers_of_1, TestName) {
	int number = 1;
	std::set<int> primes{};
	EXPECT_TRUE(factors::getPrimes(number).size() == primes.size());
}

TEST(Prime_numbers_of_2, TestName) {
	int number = 2;
	std::set<int> primes{ 2 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_3, TestName) {
	int number = 3;
	std::set<int> primes{ 3 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_4, TestName) {
	int number = 4;
	std::set<int> primes{ 2 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_5, TestName) {
	int number = 5;
	std::set<int> primes{ 5 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_6, TestName) {
	int number = 6;
	std::set<int> primes{ 2, 3 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_7, TestName) {
	int number = 7;
	std::set<int> primes{ 7 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_8, TestName) {
	int number = 8;
	std::set<int> primes{ 2 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_9, TestName) {
	int number = 9;
	std::set<int> primes{ 3 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_10, TestName) {
	int number = 10;
	std::set<int> primes{ 2, 5 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_1234, TestName) {
	int number = 1234;
	std::set<int> primes{ 2, 617 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_negative1, TestName) {
	int number = -1;
	std::set<int> primes{};
	EXPECT_EQ(primes, factors::getPrimes(number));
}

TEST(Prime_numbers_of_23159876, TestName) {
	int number = 23159876;
	std::set<int> primes{2, 5789969 };
	EXPECT_EQ(primes, factors::getPrimes(number));
}