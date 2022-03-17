#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RoundingMode.def.hpp"

namespace java::math
{
	// Fields
	inline java::math::RoundingMode RoundingMode::CEILING()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"CEILING",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::DOWN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::FLOOR()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"FLOOR",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::HALF_DOWN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::HALF_EVEN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_EVEN",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::HALF_UP()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_UP",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::UNNECESSARY()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"UNNECESSARY",
			"Ljava/math/RoundingMode;"
		);
	}
	inline java::math::RoundingMode RoundingMode::UP()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"UP",
			"Ljava/math/RoundingMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::math::RoundingMode RoundingMode::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(I)Ljava/math/RoundingMode;",
			arg0
		);
	}
	inline java::math::RoundingMode RoundingMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/math/RoundingMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray RoundingMode::values()
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"values",
			"()[Ljava/math/RoundingMode;"
		);
	}
} // namespace java::math

// Base class headers
#include "../lang/Enum.hpp"

