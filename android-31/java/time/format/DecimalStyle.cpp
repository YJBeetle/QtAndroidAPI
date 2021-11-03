#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../util/Locale.hpp"
#include "./DecimalStyle.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::DecimalStyle DecimalStyle::STANDARD()
	{
		return getStaticObjectField(
			"java.time.format.DecimalStyle",
			"STANDARD",
			"Ljava/time/format/DecimalStyle;"
		);
	}
	
	// QJniObject forward
	DecimalStyle::DecimalStyle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject DecimalStyle::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"getAvailableLocales",
			"()Ljava/util/Set;"
		);
	}
	java::time::format::DecimalStyle DecimalStyle::of(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"of",
			"(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;",
			arg0.object()
		);
	}
	java::time::format::DecimalStyle DecimalStyle::ofDefaultLocale()
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"ofDefaultLocale",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	jboolean DecimalStyle::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jchar DecimalStyle::getDecimalSeparator()
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalStyle::getNegativeSign()
	{
		return callMethod<jchar>(
			"getNegativeSign",
			"()C"
		);
	}
	jchar DecimalStyle::getPositiveSign()
	{
		return callMethod<jchar>(
			"getPositiveSign",
			"()C"
		);
	}
	jchar DecimalStyle::getZeroDigit()
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalStyle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DecimalStyle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::format::DecimalStyle DecimalStyle::withDecimalSeparator(jchar arg0)
	{
		return callObjectMethod(
			"withDecimalSeparator",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	java::time::format::DecimalStyle DecimalStyle::withNegativeSign(jchar arg0)
	{
		return callObjectMethod(
			"withNegativeSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	java::time::format::DecimalStyle DecimalStyle::withPositiveSign(jchar arg0)
	{
		return callObjectMethod(
			"withPositiveSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	java::time::format::DecimalStyle DecimalStyle::withZeroDigit(jchar arg0)
	{
		return callObjectMethod(
			"withZeroDigit",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
} // namespace java::time::format

