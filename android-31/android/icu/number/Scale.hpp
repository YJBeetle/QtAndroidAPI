#pragma once

#include "../../../java/math/BigDecimal.def.hpp"
#include "./Scale.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::Scale Scale::byBigDecimal(java::math::BigDecimal arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byBigDecimal",
			"(Ljava/math/BigDecimal;)Landroid/icu/number/Scale;",
			arg0.object()
		);
	}
	inline android::icu::number::Scale Scale::byDouble(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byDouble",
			"(D)Landroid/icu/number/Scale;",
			arg0
		);
	}
	inline android::icu::number::Scale Scale::byDoubleAndPowerOfTen(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byDoubleAndPowerOfTen",
			"(DI)Landroid/icu/number/Scale;",
			arg0,
			arg1
		);
	}
	inline android::icu::number::Scale Scale::none()
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"none",
			"()Landroid/icu/number/Scale;"
		);
	}
	inline android::icu::number::Scale Scale::powerOfTen(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"powerOfTen",
			"(I)Landroid/icu/number/Scale;",
			arg0
		);
	}
} // namespace android::icu::number

// Base class headers

