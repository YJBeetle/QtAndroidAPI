#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Locale.def.hpp"
#include "./DateFormatSymbols.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline DateFormatSymbols::DateFormatSymbols()
		: JObject(
			"java.text.DateFormatSymbols",
			"()V"
		) {}
	inline DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: JObject(
			"java.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JArray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::text::DateFormatSymbols DateFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	inline java::text::DateFormatSymbols DateFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;",
			arg0.object()
		);
	}
	inline JObject DateFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DateFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray DateFormatSymbols::getAmPmStrings() const
	{
		return callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getEras() const
	{
		return callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		);
	}
	inline JString DateFormatSymbols::getLocalPatternChars() const
	{
		return callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getMonths() const
	{
		return callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getShortMonths() const
	{
		return callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getShortWeekdays() const
	{
		return callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getWeekdays() const
	{
		return callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray DateFormatSymbols::getZoneStrings() const
	{
		return callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		);
	}
	inline jint DateFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DateFormatSymbols::setAmPmStrings(JArray arg0) const
	{
		callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setEras(JArray arg0) const
	{
		callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setLocalPatternChars(JString arg0) const
	{
		callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DateFormatSymbols::setMonths(JArray arg0) const
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setShortMonths(JArray arg0) const
	{
		callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setShortWeekdays(JArray arg0) const
	{
		callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setWeekdays(JArray arg0) const
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DateFormatSymbols::setZoneStrings(JArray arg0) const
	{
		callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
