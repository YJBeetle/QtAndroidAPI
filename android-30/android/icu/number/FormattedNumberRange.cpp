#include "./NumberRangeFormatter_RangeIdentityResult.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumberRange.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	jchar FormattedNumberRange::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean FormattedNumberRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::math::BigDecimal FormattedNumberRange::getFirstBigDecimal() const
	{
		return callObjectMethod(
			"getFirstBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityResult FormattedNumberRange::getIdentityResult() const
	{
		return callObjectMethod(
			"getIdentityResult",
			"()Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	java::math::BigDecimal FormattedNumberRange::getSecondBigDecimal() const
	{
		return callObjectMethod(
			"getSecondBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint FormattedNumberRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint FormattedNumberRange::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	JString FormattedNumberRange::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JObject FormattedNumberRange::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JString FormattedNumberRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

