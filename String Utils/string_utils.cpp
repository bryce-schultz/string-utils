//#######################################
//
// Author: Bryce Schultz
// Date: 2/20/2022
// 
// Purpose: A string utility header
// that contains verious functions for
// working with strings.
// 
//#######################################

#include "string_utils.h"

namespace str
{
	const bool contains(const String& find, const String& source)
	{
		return source.find(find) != NPOS;
	}

	const Vector<String> split(const String& source, const String& delimiter)
	{
		Vector<String> strings;
		String copy = source;

		Size pos = 0;

		while (pos != NPOS)
		{
			pos = find(delimiter, copy);
			String current = subString(0, pos, copy);
			strings.push_back(current);
			copy = trim(pos + delimiter.length(), copy);
		}
		return strings;
	}

	const String trim(const Size& position, const String& source)
	{
		return subString(position, source.length(), source);
	}

	const String clip(const Size& position, const String& source)
	{
		return subString(0, position, source);
	}

	const String boolToString(const bool& source, const String& t, const String& f)
	{
		return source ? t : f;
	}

	const String reverse(const String& source)
	{
		String result;
		for (int i = source.length() - 1; i >= 0; --i)
		{
			result.push_back(source[i]);
		}
		return result;
	}

	const String removeSpaces(const String& source)
	{
		return removeAll(" ", source);
	}

	const String removeWhitespaces(const String& source)
	{
		String result = removeAll(" ", source);
		result = removeAll("\t", result);
		result = removeAll("\n", result);
		return result;
	}

	const String removeLast(const String& find, const String& source)
	{
		if (!contains(find, source)) return source;

		String result;

		const int pos = findLast(find, source);
		result = subString(0, pos, source) + subString(pos + find.size(), source.length(), source);

		return result;
	}

	const String removeFirst(const String& find, const String& source)
	{
		if (!contains(find, source)) return source;

		String result;

		const int pos = findFirst(find, source);
		result = source.substr(0, pos) + source.substr(pos + find.size(), source.size());

		return result;
	}

	const String removeAll(const String& find, const String& source)
	{
		String result = source;
		while (contains(find, result))
		{
			result = removeFirst(find, result);
		}
		return result;
	}

	const String subString(const Size& start, const Size& end, const String& source)
	{
		if (end < start) return source;
		if (end > source.length()) return source;

		String result;

		Size length = end - start;
		result = source.substr(start, length);

		return result;
	}

	const int find(const String& find, const String& source)
	{
		return findFirst(find, source);
	}

	const int findFirst(const String& find, const String& source)
	{
		int temp = 0;
		int pos = NPOS;

		for (int i = 0; i < source.length(); ++i)
		{
			if (source[i] == find[temp])
			{
				if (temp == 0) pos = i;

				temp++;

				if (temp == find.length()) return pos;
			}
			else
			{
				temp = 0;
			}
		}
		return NPOS;
	}

	const int findLast(const String& find, const String& source)
	{
		String find_reverse = reverse(find);
		int temp = 0;
		int pos = NPOS;

		for (int i = source.length() - 1; i >= 0; --i)
		{
			if (source[i] == find_reverse[temp])
			{
				if (temp == 0)
				{
					pos = i;
				}
				temp++;

				if (temp == find_reverse.length())
				{
					return pos - (find_reverse.length() - 1);
				}
			}
			else
			{
				temp = 0;
			}
		}
		return NPOS;
	}
};