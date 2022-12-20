#pragma once

#include "simple_types.h"

namespace mth
{
	/// <summary>
	/// Clamps an input to be between a certain value
	/// </summary>
	/// <param name="_value">- the value to clamp</param>
	/// <param name="_min">- the minimum value</param>
	/// <param name="_max">- the maximum value</param>
	/// <returns>the clamped value</returns>
	const Int clamp(Int& _value, const Int& _min, const Int& _max);

	/// <summary>
	/// Gets the maximum value of two numbers
	/// </summary>
	/// <param name="_a">- the first number</param>
	/// <param name="_b">- the second number</param>
	/// <returns>the value that is bigger</returns>
	const Int max(const Int& _a, const Int& _b);

	/// <summary>
	/// Gets the minimum value of two numbers
	/// </summary>
	/// <param name="_a">- the first number</param>
	/// <param name="_b">- the second number</param>
	/// <returns>the value that is smaller</returns>
	const Int min(const Int& _a, const Int& _b);
};