#include "../io/ObjectOutputStream.hpp"
#include "../util/Locale.hpp"
#include "./DateFormatSymbols.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	DateFormatSymbols::DateFormatSymbols(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateFormatSymbols::DateFormatSymbols()
		: __JniBaseClass(
			"java.text.DateFormatSymbols",
			"()V"
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: __JniBaseClass(
			"java.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	jarray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	jobject DateFormatSymbols::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormatSymbols::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray DateFormatSymbols::getAmPmStrings()
	{
		return callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getEras()
	{
		return callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DateFormatSymbols::getLocalPatternChars()
	{
		return callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray DateFormatSymbols::getMonths()
	{
		return callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortMonths()
	{
		return callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortWeekdays()
	{
		return callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getWeekdays()
	{
		return callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getZoneStrings()
	{
		return callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	jint DateFormatSymbols::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DateFormatSymbols::setAmPmStrings(jarray arg0)
	{
		callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setEras(jarray arg0)
	{
		callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setLocalPatternChars(jstring arg0)
	{
		callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setMonths(jarray arg0)
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setShortMonths(jarray arg0)
	{
		callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setShortWeekdays(jarray arg0)
	{
		callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setWeekdays(jarray arg0)
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setZoneStrings(jarray arg0)
	{
		callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace java::text

