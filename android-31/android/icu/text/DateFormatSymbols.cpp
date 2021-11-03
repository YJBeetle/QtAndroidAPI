#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../util/Calendar.hpp"
#include "../util/ULocale.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	DateFormatSymbols::DateFormatSymbols(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateFormatSymbols::DateFormatSymbols()
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"()V"
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(JClass arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Landroid/icu/util/ULocale;)V",
			arg0.object<jclass>(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(JClass arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Ljava/util/Locale;)V",
			arg0.object<jclass>(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JArray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
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
	JArray DateFormatSymbols::getEraNames() const
	{
		return callObjectMethod(
			"getEraNames",
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
	JArray DateFormatSymbols::getMonths(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getMonths",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JArray DateFormatSymbols::getNarrowEras() const
	{
		return callObjectMethod(
			"getNarrowEras",
			"()[Ljava/lang/String;"
		);
	}
	JArray DateFormatSymbols::getQuarters(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuarters",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	JArray DateFormatSymbols::getWeekdays(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getWeekdays",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JArray DateFormatSymbols::getYearNames(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getYearNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JArray DateFormatSymbols::getZodiacNames(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getZodiacNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	void DateFormatSymbols::setEraNames(JArray arg0) const
	{
		callMethod<void>(
			"setEraNames",
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
	void DateFormatSymbols::setMonths(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setNarrowEras(JArray arg0) const
	{
		callMethod<void>(
			"setNarrowEras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DateFormatSymbols::setQuarters(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setQuarters",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
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
	void DateFormatSymbols::setWeekdays(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setYearNames(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setYearNames",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setZodiacNames(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setZodiacNames",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
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
} // namespace android::icu::text

