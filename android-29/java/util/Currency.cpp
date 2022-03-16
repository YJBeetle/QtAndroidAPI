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
	JString Currency::getCurrencyCode() const
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		);
	}
	jint Currency::getDefaultFractionDigits() const
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	JString Currency::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint Currency::getNumericCode() const
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	JString Currency::getNumericCodeAsString() const
	{
		return callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getSymbol() const
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		);
	}
	JString Currency::getSymbol(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Currency::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

