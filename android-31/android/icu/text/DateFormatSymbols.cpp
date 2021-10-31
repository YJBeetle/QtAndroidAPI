#include "../util/Calendar.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/util/ResourceBundle.hpp"
#include "./DateFormatSymbols.hpp"

namespace android::icu::text
{
	// Fields
	jint DateFormatSymbols::ABBREVIATED()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"ABBREVIATED"
		);
	}
	jint DateFormatSymbols::FORMAT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"FORMAT"
		);
	}
	jint DateFormatSymbols::NARROW()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"NARROW"
		);
	}
	jint DateFormatSymbols::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"SHORT"
		);
	}
	jint DateFormatSymbols::STANDALONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"STANDALONE"
		);
	}
	jint DateFormatSymbols::WIDE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"WIDE"
		);
	}
	
	// QJniObject forward
	DateFormatSymbols::DateFormatSymbols(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateFormatSymbols::DateFormatSymbols()
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"()V"
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::ULocale arg0)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(jclass arg0, android::icu::util::ULocale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(jclass arg0, java::util::Locale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Ljava/util/Locale;)V",
			arg0,
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1)
		: __JniBaseClass(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jarray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.object()
		);
	}
	android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;",
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
	jarray DateFormatSymbols::getEraNames()
	{
		return callObjectMethod(
			"getEraNames",
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
	jarray DateFormatSymbols::getMonths(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getMonths",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getNarrowEras()
	{
		return callObjectMethod(
			"getNarrowEras",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getQuarters(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getQuarters",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	jarray DateFormatSymbols::getWeekdays(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getWeekdays",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getYearNames(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getYearNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getZodiacNames(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getZodiacNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	void DateFormatSymbols::setEraNames(jarray arg0)
	{
		callMethod<void>(
			"setEraNames",
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
	void DateFormatSymbols::setMonths(jarray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setNarrowEras(jarray arg0)
	{
		callMethod<void>(
			"setNarrowEras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setQuarters(jarray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setQuarters",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
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
	void DateFormatSymbols::setWeekdays(jarray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setYearNames(jarray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setYearNames",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setZodiacNames(jarray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setZodiacNames",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
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
} // namespace android::icu::text

