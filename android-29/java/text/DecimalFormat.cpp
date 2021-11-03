#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "../math/BigDecimal.hpp"
#include "../math/BigInteger.hpp"
#include "../math/RoundingMode.hpp"
#include "./DecimalFormatSymbols.hpp"
#include "./FieldPosition.hpp"
#include "./Format_Field.hpp"
#include "./ParsePosition.hpp"
#include "../util/Currency.hpp"
#include "./DecimalFormat.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	DecimalFormat::DecimalFormat(QAndroidJniObject obj) : java::text::NumberFormat(obj) {}
	
	// Constructors
	DecimalFormat::DecimalFormat()
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"()V"
		) {}
	DecimalFormat::DecimalFormat(JString arg0)
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DecimalFormat::DecimalFormat(JString arg0, java::text::DecimalFormatSymbols arg1)
		: java::text::NumberFormat(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	void DecimalFormat::applyLocalizedPattern(JString arg0)
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::applyPattern(JString arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject DecimalFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DecimalFormat::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject DecimalFormat::formatToCharacterIterator(JObject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	java::util::Currency DecimalFormat::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols()
	{
		return callObjectMethod(
			"getDecimalFormatSymbols",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	jint DecimalFormat::getGroupingSize()
	{
		return callMethod<jint>(
			"getGroupingSize",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumFractionDigits()
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumIntegerDigits()
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumFractionDigits()
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumIntegerDigits()
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMultiplier()
	{
		return callMethod<jint>(
			"getMultiplier",
			"()I"
		);
	}
	JString DecimalFormat::getNegativePrefix()
	{
		return callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getNegativeSuffix()
	{
		return callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getPositivePrefix()
	{
		return callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getPositiveSuffix()
	{
		return callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		);
	}
	java::math::RoundingMode DecimalFormat::getRoundingMode()
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint DecimalFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DecimalFormat::isDecimalSeparatorAlwaysShown()
	{
		return callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseBigDecimal()
	{
		return callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	java::lang::Number DecimalFormat::parse(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void DecimalFormat::setCurrency(java::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalFormatSymbols(java::text::DecimalFormatSymbols arg0)
	{
		callMethod<void>(
			"setDecimalFormatSymbols",
			"(Ljava/text/DecimalFormatSymbols;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean arg0)
	{
		callMethod<void>(
			"setDecimalSeparatorAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingSize(jint arg0)
	{
		callMethod<void>(
			"setGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingUsed(jboolean arg0)
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMultiplier(jint arg0)
	{
		callMethod<void>(
			"setMultiplier",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setNegativePrefix(JString arg0)
	{
		callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setNegativeSuffix(JString arg0)
	{
		callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setParseBigDecimal(jboolean arg0)
	{
		callMethod<void>(
			"setParseBigDecimal",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setPositivePrefix(JString arg0)
	{
		callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setPositiveSuffix(JString arg0)
	{
		callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setRoundingMode(java::math::RoundingMode arg0)
	{
		callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.object()
		);
	}
	JString DecimalFormat::toLocalizedPattern()
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

