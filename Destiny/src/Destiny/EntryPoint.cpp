#include <iostream>
#include "Engine.h"

#if defined(EN_PLATFORM_WINDOWS)
int main() {
	std::cout << "Hello World!" << std::endl;
}
#else
int main() {
	std::cout << "Unknown Platform" << std::endl;
}
#endif