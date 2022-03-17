#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Currency.def.hpp"
#include "../util/Locale.def.hpp"
#include "./DecimalFormatSymbols.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline DecimalFormatSymbols::DecimalFormatSymbols()
		: JObject(
			"java.text.DecimalFormatSymbols",
			"()V"
		) {}
	inline DecimalFormatSymbols::DecimalFormatSymbols(java::util::Locale arg0)
		: JObject(
			"java.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JArray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	inline java::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	inline JObject DecimalFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DecimalFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::Currency DecimalFormatSymbols::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	inline JString DecimalFormatSymbols::getCurrencySymbol() const
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getDigit() const
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getExponentSeparator() const
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getInfinity() const
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormatSymbols::getInternationalCurrencySymbol() const
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getMinusSign() const
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getMonetaryGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getNaN() const
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getPatternSeparator() const
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getPerMill() const
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getPercent() const
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getZeroDigit() const
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	inline jint DecimalFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DecimalFormatSymbols::setCurrency(java::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	inline void DecimalFormatSymbols::setCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setDigit(jchar arg0) const
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setExponentSeparator(JString arg0) const
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setInfinity(JString arg0) const
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setInternationalCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setMinusSign(jchar arg0) const
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setNaN(JString arg0) const
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setPatternSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPerMill(jchar arg0) const
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPercent(jchar arg0) const
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setZeroDigit(jchar arg0) const
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
