#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Locale.hpp"
#include "./DateFormatSymbols.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	DateFormatSymbols::DateFormatSymbols(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateFormatSymbols::DateFormatSymbols()
		: JObject(
			"java.text.DateFormatSymbols",
			"()V"
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: JObject(
			"java.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	JArray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::text::DateFormatSymbols DateFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	java::text::DateFormatSymbols DateFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;",
			arg0.object()
		);
	}
	JObject DateFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DateFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray DateFormatSymbols::getAmPmStrings() const
	{
		return callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getEras() const
	{
		return callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		);
	}
	JString DateFormatSymbols::getLocalPatternChars() const
	{
		return callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getMonths() const
	{
		return callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getShortMonths() const
	{
		return callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getShortWeekdays() const
	{
		return callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getWeekdays() const
	{
		return callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getZoneStrings() const
	{
		return callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		);
	}
	jint DateFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DateFormatSymbols::setAmPmStrings(JArray arg0) const
	{
		callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setEras(JArray arg0) const
	{
		callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setLocalPatternChars(JString arg0) const
	{
		callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DateFormatSymbols::setMonths(JArray arg0) const
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setShortMonths(JArray arg0) const
	{
		callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setShortWeekdays(JArray arg0) const
	{
		callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setWeekdays(JArray arg0) const
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setZoneStrings(JArray arg0) const
	{
		callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
} // namespace java::text

