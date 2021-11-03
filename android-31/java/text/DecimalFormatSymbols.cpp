#include "../io/ObjectInputStream.hpp"
#include "../util/Currency.hpp"
#include "../util/Locale.hpp"
#include "./DecimalFormatSymbols.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	DecimalFormatSymbols::DecimalFormatSymbols(QJniObject obj) : JObject(obj) {}
	
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
	jarray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	jobject DecimalFormatSymbols::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::util::Currency DecimalFormatSymbols::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getDigit()
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getInfinity()
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getNaN()
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPercent()
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(java::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0)
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0)
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(jstring arg0)
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0)
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0)
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0)
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0)
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0)
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace java::text

