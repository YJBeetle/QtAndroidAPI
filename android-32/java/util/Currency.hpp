#pragma once

#include "../../JIntArray.hpp"
#include "../io/DataInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./HashSet.def.hpp"
#include "./Locale.def.hpp"
#include "./Optional.def.hpp"
#include "./Properties.def.hpp"
#include "./regex/Pattern.def.hpp"
#include "./Currency.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Currency::getAvailableCurrencies()
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	inline java::util::Currency Currency::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Currency Currency::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Currency;",
			arg0.object()
		);
	}
	inline JString Currency::getCurrencyCode() const
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		);
	}
	inline jint Currency::getDefaultFractionDigits() const
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	inline JString Currency::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Currency::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint Currency::getNumericCode() const
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	inline JString Currency::getNumericCodeAsString() const
	{
		return callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Currency::getSymbol() const
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		);
	}
	inline JString Currency::getSymbol(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Currency::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
