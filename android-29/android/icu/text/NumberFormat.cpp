#include "../math/BigDecimal.hpp"
#include "./DisplayContext.hpp"
#include "./DisplayContext_Type.hpp"
#include "../util/Currency.hpp"
#include "../util/CurrencyAmount.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./NumberFormat.hpp"

namespace android::icu::text
{
	// Fields
	jint NumberFormat::ACCOUNTINGCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ACCOUNTINGCURRENCYSTYLE"
		);
	}
	jint NumberFormat::CASHCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CASHCURRENCYSTYLE"
		);
	}
	jint NumberFormat::CURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CURRENCYSTYLE"
		);
	}
	jint NumberFormat::FRACTION_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	jint NumberFormat::INTEGERSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGERSTYLE"
		);
	}
	jint NumberFormat::INTEGER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	jint NumberFormat::ISOCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ISOCURRENCYSTYLE"
		);
	}
	jint NumberFormat::NUMBERSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"NUMBERSTYLE"
		);
	}
	jint NumberFormat::PERCENTSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PERCENTSTYLE"
		);
	}
	jint NumberFormat::PLURALCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PLURALCURRENCYSTYLE"
		);
	}
	jint NumberFormat::SCIENTIFICSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"SCIENTIFICSTYLE"
		);
	}
	jint NumberFormat::STANDARDCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"STANDARDCURRENCYSTYLE"
		);
	}
	
	// QAndroidJniObject forward
	NumberFormat::NumberFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	NumberFormat::NumberFormat()
		: android::icu::text::UFormat(
			"android.icu.text.NumberFormat",
			"()V"
		) {}
	
	// Methods
	jarray NumberFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(I)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	QAndroidJniObject NumberFormat::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance(android::icu::util::ULocale arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject NumberFormat::getInstance(java::util::Locale arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;I)Landroid/icu/text/NumberFormat;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
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
	jstring NumberFormat::format(android::icu::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring NumberFormat::format(android::icu::util::CurrencyAmount arg0)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring NumberFormat::format(jdouble arg0)
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NumberFormat::format(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring NumberFormat::format(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;)Ljava/lang/String;",
			arg0.object()
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
	QAndroidJniObject NumberFormat::format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject NumberFormat::format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
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
	QAndroidJniObject NumberFormat::format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject NumberFormat::format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
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
	QAndroidJniObject NumberFormat::getContext(android::icu::text::DisplayContext_Type arg0)
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
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
	jint NumberFormat::getRoundingMode()
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
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
	jboolean NumberFormat::isParseStrict()
	{
		return callMethod<jboolean>(
			"isParseStrict",
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
	QAndroidJniObject NumberFormat::parseCurrency(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
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
	void NumberFormat::setContext(android::icu::text::DisplayContext arg0)
	{
		callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.object()
		);
	}
	void NumberFormat::setCurrency(android::icu::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
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
	void NumberFormat::setParseStrict(jboolean arg0)
	{
		callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setRoundingMode(jint arg0)
	{
		callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text

