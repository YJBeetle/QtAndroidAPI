#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Number.hpp"
#include "../lang/StringBuffer.hpp"
#include "../math/RoundingMode.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "../util/Currency.hpp"
#include "../util/Locale.hpp"
#include "./NumberFormat.hpp"

namespace java::text
{
	// Fields
	jint NumberFormat::FRACTION_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	jint NumberFormat::INTEGER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	
	// QAndroidJniObject forward
	NumberFormat::NumberFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
	
	// Constructors
	
	// Methods
	jarray NumberFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance(java::util::Locale arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	jobject NumberFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean NumberFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NumberFormat::format(jdouble arg0)
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NumberFormat::format(jlong arg0)
	{
		return callObjectMethod(
			"format",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject NumberFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject NumberFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject NumberFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jint NumberFormat::getMaximumFractionDigits()
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMaximumIntegerDigits()
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumFractionDigits()
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumIntegerDigits()
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	QAndroidJniObject NumberFormat::getRoundingMode()
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint NumberFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NumberFormat::isGroupingUsed()
	{
		return callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean NumberFormat::isParseIntegerOnly()
	{
		return callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0
		);
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	jobject NumberFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void NumberFormat::setCurrency(java::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	void NumberFormat::setGroupingUsed(jboolean arg0)
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setMaximumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMaximumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setParseIntegerOnly(jboolean arg0)
	{
		callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setRoundingMode(java::math::RoundingMode arg0)
	{
		callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.object()
		);
	}
} // namespace java::text

