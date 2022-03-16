#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Currency.hpp"
#include "../util/Locale.hpp"
#include "./DecimalFormatSymbols.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	DecimalFormatSymbols::DecimalFormatSymbols()
		: JObject(
			"java.text.DecimalFormatSymbols",
			"()V"
		) {}
	DecimalFormatSymbols::DecimalFormatSymbols(java::util::Locale arg0)
		: JObject(
			"java.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	JArray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	java::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	JObject DecimalFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DecimalFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::Currency DecimalFormatSymbols::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	JString DecimalFormatSymbols::getCurrencySymbol() const
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getDigit() const
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getExponentSeparator() const
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getInfinity() const
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormatSymbols::getInternationalCurrencySymbol() const
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign() const
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getNaN() const
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getPatternSeparator() const
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill() const
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPercent() const
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit() const
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(java::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0) const
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(JString arg0) const
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(JString arg0) const
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0) const
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(JString arg0) const
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0) const
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0) const
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0) const
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace java::text

