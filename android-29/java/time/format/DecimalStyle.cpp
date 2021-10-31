#include "../../util/Locale.hpp"
#include "./DecimalStyle.hpp"

namespace java::time::format
{
	// Fields
	QAndroidJniObject DecimalStyle::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DecimalStyle",
			"STANDARD",
			"Ljava/time/format/DecimalStyle;"
		);
	}
	
	// QAndroidJniObject forward
	DecimalStyle::DecimalStyle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DecimalStyle::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"getAvailableLocales",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject DecimalStyle::of(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"of",
			"(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;",
			arg0.object()
		);
	}
	QAndroidJniObject DecimalStyle::ofDefaultLocale()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"ofDefaultLocale",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	jboolean DecimalStyle::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring DecimalStyle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DecimalStyle::withDecimalSeparator(jchar arg0)
	{
		return callObjectMethod(
			"withDecimalSeparator",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withNegativeSign(jchar arg0)
	{
		return callObjectMethod(
			"withNegativeSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withPositiveSign(jchar arg0)
	{
		return callObjectMethod(
			"withPositiveSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withZeroDigit(jchar arg0)
	{
		return callObjectMethod(
			"withZeroDigit",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
} // namespace java::time::format

