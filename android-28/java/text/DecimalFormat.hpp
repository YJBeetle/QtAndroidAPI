#pragma once

#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../lang/Number.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "../math/BigDecimal.def.hpp"
#include "../math/BigInteger.def.hpp"
#include "../math/RoundingMode.def.hpp"
#include "./DecimalFormatSymbols.def.hpp"
#include "./FieldPosition.def.hpp"
#include "./Format_Field.def.hpp"
#include "./ParsePosition.def.hpp"
#include "../util/Currency.def.hpp"
#include "./DecimalFormat.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline DecimalFormat::DecimalFormat()
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"()V"
		) {}
	inline DecimalFormat::DecimalFormat(JString arg0)
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline DecimalFormat::DecimalFormat(JString arg0, java::text::DecimalFormatSymbols arg1)
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline void DecimalFormat::applyLocalizedPattern(JString arg0) const
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject DecimalFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DecimalFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuffer DecimalFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DecimalFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DecimalFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject DecimalFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	inline java::util::Currency DecimalFormat::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	inline java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
	{
		return callObjectMethod(
			"getDecimalFormatSymbols",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	inline jint DecimalFormat::getGroupingSize() const
	{
		return callMethod<jint>(
			"getGroupingSize",
			"()I"
		);
	}
	inline jint DecimalFormat::getMaximumFractionDigits() const
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	inline jint DecimalFormat::getMaximumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	inline jint DecimalFormat::getMinimumFractionDigits() const
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	inline jint DecimalFormat::getMinimumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	inline jint DecimalFormat::getMultiplier() const
	{
		return callMethod<jint>(
			"getMultiplier",
			"()I"
		);
	}
	inline JString DecimalFormat::getNegativePrefix() const
	{
		return callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormat::getNegativeSuffix() const
	{
		return callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormat::getPositivePrefix() const
	{
		return callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormat::getPositiveSuffix() const
	{
		return callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		);
	}
	inline java::math::RoundingMode DecimalFormat::getRoundingMode() const
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	inline jint DecimalFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
	{
		return callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
		);
	}
	inline jboolean DecimalFormat::isParseBigDecimal() const
	{
		return callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	inline java::lang::Number DecimalFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void DecimalFormat::setCurrency(java::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	inline void DecimalFormat::setDecimalFormatSymbols(java::text::DecimalFormatSymbols arg0) const
	{
		callMethod<void>(
			"setDecimalFormatSymbols",
			"(Ljava/text/DecimalFormatSymbols;)V",
			arg0.object()
		);
	}
	inline void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean arg0) const
	{
		callMethod<void>(
			"setDecimalSeparatorAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	inline void DecimalFormat::setGroupingSize(jint arg0) const
	{
		callMethod<void>(
			"setGroupingSize",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setGroupingUsed(jboolean arg0) const
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	inline void DecimalFormat::setMaximumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setMaximumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setMinimumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setMinimumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setMultiplier(jint arg0) const
	{
		callMethod<void>(
			"setMultiplier",
			"(I)V",
			arg0
		);
	}
	inline void DecimalFormat::setNegativePrefix(JString arg0) const
	{
		callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormat::setNegativeSuffix(JString arg0) const
	{
		callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormat::setParseBigDecimal(jboolean arg0) const
	{
		callMethod<void>(
			"setParseBigDecimal",
			"(Z)V",
			arg0
		);
	}
	inline void DecimalFormat::setPositivePrefix(JString arg0) const
	{
		callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormat::setPositiveSuffix(JString arg0) const
	{
		callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormat::setRoundingMode(java::math::RoundingMode arg0) const
	{
		callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.object()
		);
	}
	inline JString DecimalFormat::toLocalizedPattern() const
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers
#include "./Format.hpp"
#include "./NumberFormat.hpp"

