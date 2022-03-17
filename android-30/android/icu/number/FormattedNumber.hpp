#pragma once

#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "./FormattedNumber.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jchar FormattedNumber::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline jboolean FormattedNumber::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint FormattedNumber::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint FormattedNumber::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline JString FormattedNumber::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline java::math::BigDecimal FormattedNumber::toBigDecimal() const
	{
		return callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline JObject FormattedNumber::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	inline JString FormattedNumber::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
