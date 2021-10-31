#include "./RoundingMode.hpp"

namespace java::math
{
	// Fields
	java::math::RoundingMode RoundingMode::CEILING()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"CEILING",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::DOWN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::FLOOR()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"FLOOR",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::HALF_DOWN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::HALF_EVEN()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_EVEN",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::HALF_UP()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_UP",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::UNNECESSARY()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"UNNECESSARY",
			"Ljava/math/RoundingMode;"
		);
	}
	java::math::RoundingMode RoundingMode::UP()
	{
		return getStaticObjectField(
			"java.math.RoundingMode",
			"UP",
			"Ljava/math/RoundingMode;"
		);
	}
	
	// QJniObject forward
	RoundingMode::RoundingMode(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::math::RoundingMode RoundingMode::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(I)Ljava/math/RoundingMode;",
			arg0
		);
	}
	java::math::RoundingMode RoundingMode::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/math/RoundingMode;",
			arg0
		);
	}
	jarray RoundingMode::values()
	{
		return callStaticObjectMethod(
			"java.math.RoundingMode",
			"values",
			"()[Ljava/math/RoundingMode;"
		).object<jarray>();
	}
} // namespace java::math

