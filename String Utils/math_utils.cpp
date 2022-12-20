#include "math_utils.h"

namespace mth {

	const Int clamp(Int& _value, const Int& _min, const Int& _max)
	{
		_value = max(min(_value, _max), _min);
		return _value;
	}

	const Int max(const Int& _a, const Int& _b)
	{
		return (_a > _b ? _a : _b);
	}

	const Int min(const Int& _a, const Int& _b)
	{
		return (_a < _b ? _a : _b);
	}
};
