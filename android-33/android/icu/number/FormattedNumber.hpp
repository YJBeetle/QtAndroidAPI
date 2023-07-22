#pragma once

#include "../text/ConstrainedFieldPosition.def.hpp"
#include "../util/MeasureUnit.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "./FormattedNumber.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject FormattedNumber::appendTo(JObject arg0) const
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	inline jchar FormattedNumber::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline android::icu::util::MeasureUnit FormattedNumber::getOutputUnit() const
	{
		return callObjectMethod(
			"getOutputUnit",
			"()Landroid/icu/util/MeasureUnit;"
		);
	}
	inline jint FormattedNumber::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jboolean FormattedNumber::nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
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
