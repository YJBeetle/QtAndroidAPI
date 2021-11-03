#include "../../JIntArray.hpp"
#include "../io/DataInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./HashSet.hpp"
#include "./Locale.hpp"
#include "./Optional.hpp"
#include "./Properties.hpp"
#include "./regex/Pattern.hpp"
#include "./Currency.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Currency::Currency(QJniObject obj) : JObject(obj) {}
	
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
	java::util::Currency Currency::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			arg0.object<jstring>()
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
	JString Currency::getCurrencyCode()
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		);
	}
	jint Currency::getDefaultFractionDigits()
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	JString Currency::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint Currency::getNumericCode()
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	JString Currency::getNumericCodeAsString()
	{
		return callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getSymbol()
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getSymbol(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Currency::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

