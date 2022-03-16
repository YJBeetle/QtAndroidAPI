#include "../text/ConstrainedFieldPosition.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumber.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject FormattedNumber::appendTo(JObject arg0) const
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	jchar FormattedNumber::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint FormattedNumber::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean FormattedNumber::nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	JString FormattedNumber::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	java::math::BigDecimal FormattedNumber::toBigDecimal() const
	{
		return callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	JObject FormattedNumber::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JString FormattedNumber::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

