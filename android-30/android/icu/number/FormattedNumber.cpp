#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumber.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	FormattedNumber::FormattedNumber(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean FormattedNumber::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring FormattedNumber::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
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
	jstring FormattedNumber::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::number

