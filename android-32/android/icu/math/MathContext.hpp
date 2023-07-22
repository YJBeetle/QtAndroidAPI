#pragma once

#include "../../../JString.hpp"
#include "./MathContext.def.hpp"

namespace android::icu::math
{
	// Fields
	inline android::icu::math::MathContext MathContext::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.math.MathContext",
			"DEFAULT",
			"Landroid/icu/math/MathContext;"
		);
	}
	inline jint MathContext::ENGINEERING()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ENGINEERING"
		);
	}
	inline jint MathContext::PLAIN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"PLAIN"
		);
	}
	inline jint MathContext::ROUND_CEILING()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_CEILING"
		);
	}
	inline jint MathContext::ROUND_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_DOWN"
		);
	}
	inline jint MathContext::ROUND_FLOOR()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_FLOOR"
		);
	}
	inline jint MathContext::ROUND_HALF_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_DOWN"
		);
	}
	inline jint MathContext::ROUND_HALF_EVEN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_EVEN"
		);
	}
	inline jint MathContext::ROUND_HALF_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_UP"
		);
	}
	inline jint MathContext::ROUND_UNNECESSARY()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UNNECESSARY"
		);
	}
	inline jint MathContext::ROUND_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UP"
		);
	}
	inline jint MathContext::SCIENTIFIC()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"SCIENTIFIC"
		);
	}
	
	// Constructors
	inline MathContext::MathContext(jint arg0)
		: JObject(
			"android.icu.math.MathContext",
			"(I)V",
			arg0
		) {}
	inline MathContext::MathContext(jint arg0, jint arg1)
		: JObject(
			"android.icu.math.MathContext",
			"(II)V",
			arg0,
			arg1
		) {}
	inline MathContext::MathContext(jint arg0, jint arg1, jboolean arg2)
		: JObject(
			"android.icu.math.MathContext",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		) {}
	inline MathContext::MathContext(jint arg0, jint arg1, jboolean arg2, jint arg3)
		: JObject(
			"android.icu.math.MathContext",
			"(IIZI)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint MathContext::getDigits() const
	{
		return callMethod<jint>(
			"getDigits",
			"()I"
		);
	}
	inline jint MathContext::getForm() const
	{
		return callMethod<jint>(
			"getForm",
			"()I"
		);
	}
	inline jboolean MathContext::getLostDigits() const
	{
		return callMethod<jboolean>(
			"getLostDigits",
			"()Z"
		);
	}
	inline jint MathContext::getRoundingMode() const
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	inline JString MathContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::math

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::math;
#endif
