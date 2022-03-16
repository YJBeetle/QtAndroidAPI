#pragma once

#include "./NumberRangeFormatter_RangeIdentityResult.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "./FormattedNumberRange.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jchar FormattedNumberRange::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline jboolean FormattedNumberRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::math::BigDecimal FormattedNumberRange::getFirstBigDecimal() const
	{
		return callObjectMethod(
			"getFirstBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline android::icu::number::NumberRangeFormatter_RangeIdentityResult FormattedNumberRange::getIdentityResult() const
	{
		return callObjectMethod(
			"getIdentityResult",
			"()Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	inline java::math::BigDecimal FormattedNumberRange::getSecondBigDecimal() const
	{
		return callObjectMethod(
			"getSecondBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline jint FormattedNumberRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint FormattedNumberRange::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline JString FormattedNumberRange::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JObject FormattedNumberRange::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	inline JString FormattedNumberRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

// Base class headers

