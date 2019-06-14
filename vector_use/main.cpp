#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>


void main()
{
	// 1. vector变量声明
	std::array<int, 3> a1{ {1,2,3} };
	std::array<int, 3> a2 = {1, 2, 3};
	std::array<std::string, 2> a3 = {std::string("a"), "b"};
	// 2. vector的使用
	std::sort(a1.begin(), a1.end());
	std::reverse_copy(a2.begin(), a2.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << '\n';
	// 3. 遍历
	for (const auto& s: a3) {
		std::cout << s << ' ';
	}

	getchar();
}