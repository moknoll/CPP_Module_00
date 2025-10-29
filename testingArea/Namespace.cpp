#include <iostream>

namespace MyNamespace{
	int x = 42;
}

int main()
{
	std::cout << MyNamespace::x;
	std::cout << "\n";
}

