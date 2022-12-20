#include <iostream>
#include <string>

#include "simple_types.h"
#include "string_utils.h"
#include "math_utils.h"

template <typename T>
void print(T to_print)
{
	std::cout << to_print << std::endl;
}

void printList(Vector<String> strs)
{
	for (String& str : strs)
	{
		print(str);
	}
}

int main()
{
	Vector<String> strings = str::split("This, is, a, vector, of, strings.", ", ");

	printList(strings);

	return EXIT_SUCCESS;
}
