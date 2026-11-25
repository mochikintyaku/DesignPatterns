#include "IPen.h"
#include "Artist.h"
#include "Author.h"
#include "Person1.h"
#include "Person2.h"
#include "Person3.h"

#include <vector>
#include <algorithm>
#include <chrono>
#include <iostream>

int INSTANCE_NUM_FOR_TEST = 25000;
int MIN_BIRTH_YEAR = 1000;
int MAX_BIRTH_YEAR = 2000;
int NUM_OF_TRIALS = 5000;

int main()
{
	Artist artist;
	Author author;
	artist.write();
	author.write();

	std::vector<Person1> vec_person1(INSTANCE_NUM_FOR_TEST);
	std::vector<Person2> vec_person2(INSTANCE_NUM_FOR_TEST);
	std::vector<Person3> vec_person3(INSTANCE_NUM_FOR_TEST);

	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < NUM_OF_TRIALS; i++)
	{
		auto it = std::min_element(
			vec_person1.begin(), vec_person1.end(),
			[](const Person1& a, const Person1& b) {
				return a.getBirth() < b.getBirth();
			}
		);
	}
	auto finish = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
	std::cout << "処理時間（Person1）：" << duration.count() << " ms" << std::endl;

	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < NUM_OF_TRIALS; i++)
	{
		auto it = std::min_element(
			vec_person2.begin(), vec_person2.end(),
			[](const Person2& a, const Person2& b) {
				return a.getBirth() < b.getBirth();
			}
		);
	}
	finish = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
	std::cout << "処理時間（Person2）：" << duration.count() << " ms" << std::endl;

	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < NUM_OF_TRIALS; i++)
	{
		auto it = std::min_element(
			vec_person3.begin(), vec_person3.end(),
			[](const Person3& a, const Person3& b) {
				return a.getBirth() < b.getBirth();
			}
		);
	}
	finish = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
	std::cout << "処理時間（Person3）：" << duration.count() << " ms" << std::endl;

	return 0;
}