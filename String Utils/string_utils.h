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

#pragma once

#include <string>
#include <vector>

namespace str
{
	// A few redefinitions to make the code cleaner
	typedef std::string String;
	typedef size_t Size;
	const Size NPOS = String::npos;
	template <typename T>
	using Vector = std::vector<T>;

	/// <summary>
	/// Check if a string contains a substring
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>true if the substring is found</returns>
	const bool contains(const String& find, const String& source);

	/// <summary>
	/// Splits a string based on a deilimter
	/// </summary>
	/// <param name="source">- the source string</param>
	/// <param name="delimiter">- the string to split on</param>
	/// <returns></returns>
	const Vector<String> split(const String& source, const String& delimiter = " ");

	/// <summary>
	/// Remove a portion of a string up to the specified position
	/// </summary>
	/// <param name="position">- where the trim begins</param>
	/// <param name="source">- string to trim</param>
	/// <returns>the trimmed string</returns>
	const String trim(const Size& position, const String& source);

	/// <summary>
	/// Keep only the portion of the string up to the specified position
	/// </summary>
	/// <param name="position">- where the clip ends</param>
	/// <param name="source">- string to clip</param>
	/// <returns>the clipped string</returns>
	const String clip(const Size& position, const String& source);

	/// <summary>
	/// Convert a boolean to a string
	/// </summary>
	/// <param name="source">- the boolean</param>
	/// <param name="t">- (optional) the string value if true</param>
	/// <param name="f">- (optional) the string value if false</param>
	/// <returns>A string representation of a boolean</returns>
	const String boolToString(const bool& source, const String& t = "True", const String& f = "False");

	/// <summary>
	/// Reverse a string
	/// </summary>
	/// <param name="source">- the string to reverse</param>
	/// <returns>the string in reverse order</returns>
	const String reverse(const String& source);

	/// <summary>
	/// Remove spaces from a string
	/// </summary>
	/// <param name="source">- the string to remove spaces from</param>
	/// <returns>the string without any spaces</returns>
	const String removeSpaces(const String& source);

	/// <summary>
	/// Remove all whitespace from a string
	/// </summary>
	/// <param name="source">- the string to remove the whitespace from</param>
	/// <returns>the string without any whitespace</returns>
	const String removeWhitespaces(const String& source);

	/// <summary>
	/// Remove the last occurance of a substring from a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the string without the last occurnace of the substring</returns>
	const String removeLast(const String& find, const String& source);

	/// <summary>
	/// Remove the first occurance of a substring from a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the string without the first occurnace of the substring</returns>
	const String removeFirst(const String& find, const String& source);

	/// <summary>
	/// Remove all occurances of a substring from a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the string without any occurnaces of the substring</returns>
	const String removeAll(const String& find, const String& source);

	/// <summary>
	/// Get a substring from a larger string
	/// </summary>
	/// <param name="start">- index to start the substring</param>
	/// <param name="end">- index to end the substring</param>
	/// <param name="source">- source string to get the substring from</param>
	/// <returns>the substring from the specified position</returns>
	const String subString(const Size& start, const Size& end, const String& source);

	/// <summary>
	/// Finds the first occurance of a substring in a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the index of the first occurance of a substring in a string</returns>
	const int find(const String& find, const String& source);

	/// <summary>
	/// Finds the first occurance of a substring in a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the index of the first occurance of a substring in a string</returns>
	const int findFirst(const String& find, const String& source);

	/// <summary>
	/// Finds the last occurance of a substring in a string
	/// </summary>
	/// <param name="find">- the string to find</param>
	/// <param name="source">- the string to search</param>
	/// <returns>the index of the last occurance of a substring in a string</returns>
	const int findLast(const String& find, const String& source);
};