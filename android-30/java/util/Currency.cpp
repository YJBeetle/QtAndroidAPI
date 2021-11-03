#include "../io/DataInputStream.hpp"
#include "./HashSet.hpp"
#include "./Locale.hpp"
#include "./Optional.hpp"
#include "./Properties.hpp"
#include "./regex/Pattern.hpp"
#include "./Currency.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Currency::Currency(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Currency::getAvailableCurrencies()
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	java::util::Currency Currency::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			arg0
		);
	}
	java::util::Currency Currency::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Currency;",
			arg0.object()
		);
	}
	jstring Currency::getCurrencyCode()
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Currency::getDefaultFractionDigits()
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	jstring Currency::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint Currency::getNumericCode()
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	jstring Currency::getNumericCodeAsString()
	{
		return callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol()
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Currency::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

