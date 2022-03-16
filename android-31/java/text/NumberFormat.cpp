#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Number.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
		return getStaticField<jint>(
			"java.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	jint NumberFormat::INTEGER_FIELD()
	{
		return getStaticField<jint>(
			"java.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	
	// Constructors
	
	// Methods
	JArray NumberFormat::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::text::NumberFormat NumberFormat::getCompactNumberInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getCompactNumberInstance(java::util::Locale arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	java::text::NumberFormat NumberFormat::getCurrencyInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getCurrencyInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	java::text::NumberFormat NumberFormat::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	java::text::NumberFormat NumberFormat::getIntegerInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getIntegerInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	java::text::NumberFormat NumberFormat::getNumberInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getNumberInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	java::text::NumberFormat NumberFormat::getPercentInstance()
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::text::NumberFormat NumberFormat::getPercentInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.object()
		);
	}
	JObject NumberFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean NumberFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString NumberFormat::format(jdouble arg0) const
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	JString NumberFormat::format(jlong arg0) const
	{
		return callObjectMethod(
			"format",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	java::lang::StringBuffer NumberFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer NumberFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer NumberFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::util::Currency NumberFormat::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jint NumberFormat::getMaximumFractionDigits() const
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMaximumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumFractionDigits() const
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	java::math::RoundingMode NumberFormat::getRoundingMode() const
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint NumberFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NumberFormat::isGroupingUsed() const
	{
		return callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean NumberFormat::isParseIntegerOnly() const
	{
		return callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	java::lang::Number NumberFormat::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0.object<jstring>()
		);
	}
	java::lang::Number NumberFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject NumberFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void NumberFormat::setCurrency(java::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	void NumberFormat::setGroupingUsed(jboolean arg0) const
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setMaximumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMaximumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setParseIntegerOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setRoundingMode(java::math::RoundingMode arg0) const
	{
		callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.object()
		);
	}
} // namespace java::text

