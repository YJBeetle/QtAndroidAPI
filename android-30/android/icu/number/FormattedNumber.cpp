#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumber.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	FormattedNumber::FormattedNumber(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jchar FormattedNumber::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean FormattedNumber::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint FormattedNumber::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint FormattedNumber::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	JString FormattedNumber::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	java::math::BigDecimal FormattedNumber::toBigDecimal()
	{
		return callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	JObject FormattedNumber::toCharacterIterator()
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JString FormattedNumber::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

