#pragma once

#include "../../../JArray.hpp"
#include "../math/BigDecimal.def.hpp"
#include "./DisplayContext.def.hpp"
#include "./DisplayContext_Type.def.hpp"
#include "../util/Currency.def.hpp"
#include "../util/CurrencyAmount.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "../../../java/math/BigInteger.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./NumberFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint NumberFormat::ACCOUNTINGCURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ACCOUNTINGCURRENCYSTYLE"
		);
	}
	inline jint NumberFormat::CASHCURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CASHCURRENCYSTYLE"
		);
	}
	inline jint NumberFormat::CURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CURRENCYSTYLE"
		);
	}
	inline jint NumberFormat::FRACTION_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	inline jint NumberFormat::INTEGERSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGERSTYLE"
		);
	}
	inline jint NumberFormat::INTEGER_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	inline jint NumberFormat::ISOCURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ISOCURRENCYSTYLE"
		);
	}
	inline jint NumberFormat::NUMBERSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"NUMBERSTYLE"
		);
	}
	inline jint NumberFormat::PERCENTSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PERCENTSTYLE"
		);
	}
	inline jint NumberFormat::PLURALCURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PLURALCURRENCYSTYLE"
		);
	}
	inline jint NumberFormat::SCIENTIFICSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"SCIENTIFICSTYLE"
		);
	}
	inline jint NumberFormat::STANDARDCURRENCYSTYLE()
	{
		return getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"STANDARDCURRENCYSTYLE"
		);
	}
	
	// Constructors
	inline NumberFormat::NumberFormat()
		: android::icu::text::UFormat(
			"android.icu.text.NumberFormat",
			"()V"
		) {}
	
	// Methods
	inline JArray NumberFormat::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getCurrencyInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getCurrencyInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getCurrencyInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(I)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance(android::icu::util::ULocale arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getInstance(java::util::Locale arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;I)Landroid/icu/text/NumberFormat;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getIntegerInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getIntegerInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getIntegerInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getNumberInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getNumberInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getNumberInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getPercentInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getPercentInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getPercentInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getScientificInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getScientificInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat NumberFormat::getScientificInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.object()
		);
	}
	inline JObject NumberFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean NumberFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString NumberFormat::format(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString NumberFormat::format(android::icu::util::CurrencyAmount arg0) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString NumberFormat::format(jdouble arg0) const
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	inline JString NumberFormat::format(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString NumberFormat::format(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString NumberFormat::format(jlong arg0) const
	{
		return callObjectMethod(
			"format",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer NumberFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline android::icu::text::DisplayContext NumberFormat::getContext(android::icu::text::DisplayContext_Type arg0) const
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	inline android::icu::util::Currency NumberFormat::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	inline jint NumberFormat::getMaximumFractionDigits() const
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	inline jint NumberFormat::getMaximumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	inline jint NumberFormat::getMinimumFractionDigits() const
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	inline jint NumberFormat::getMinimumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	inline jint NumberFormat::getRoundingMode() const
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	inline jint NumberFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean NumberFormat::isGroupingUsed() const
	{
		return callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	inline jboolean NumberFormat::isParseIntegerOnly() const
	{
		return callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	inline jboolean NumberFormat::isParseStrict() const
	{
		return callMethod<jboolean>(
			"isParseStrict",
			"()Z"
		);
	}
	inline java::lang::Number NumberFormat::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Number NumberFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::util::CurrencyAmount NumberFormat::parseCurrency(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject NumberFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void NumberFormat::setContext(android::icu::text::DisplayContext arg0) const
	{
		callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.object()
		);
	}
	inline void NumberFormat::setCurrency(android::icu::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	inline void NumberFormat::setGroupingUsed(jboolean arg0) const
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	inline void NumberFormat::setMaximumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	inline void NumberFormat::setMaximumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	inline void NumberFormat::setMinimumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	inline void NumberFormat::setMinimumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	inline void NumberFormat::setParseIntegerOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	inline void NumberFormat::setParseStrict(jboolean arg0) const
	{
		callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	inline void NumberFormat::setRoundingMode(jint arg0) const
	{
		callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
