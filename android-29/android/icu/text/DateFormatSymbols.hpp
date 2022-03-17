#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../util/Calendar.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "../../../java/util/ResourceBundle.def.hpp"
#include "./DateFormatSymbols.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint DateFormatSymbols::ABBREVIATED()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"ABBREVIATED"
		);
	}
	inline jint DateFormatSymbols::FORMAT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"FORMAT"
		);
	}
	inline jint DateFormatSymbols::NARROW()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"NARROW"
		);
	}
	inline jint DateFormatSymbols::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"SHORT"
		);
	}
	inline jint DateFormatSymbols::STANDALONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"STANDALONE"
		);
	}
	inline jint DateFormatSymbols::WIDE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"WIDE"
		);
	}
	
	// Constructors
	inline DateFormatSymbols::DateFormatSymbols()
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"()V"
		) {}
	inline DateFormatSymbols::DateFormatSymbols(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(JClass arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Landroid/icu/util/ULocale;)V",
			arg0.object<jclass>(),
			arg1.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(JClass arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Ljava/util/Locale;)V",
			arg0.object<jclass>(),
			arg1.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1)
		: JObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JArray DateFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	inline android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.object()
		);
	}
	inline android::icu::text::DateFormatSymbols DateFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;",
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
	inline JArray DateFormatSymbols::getEraNames() const
	{
		return callObjectMethod(
			"getEraNames",
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
	inline JArray DateFormatSymbols::getMonths(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getMonths",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JArray DateFormatSymbols::getQuarters(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuarters",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	inline JArray DateFormatSymbols::getWeekdays(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getWeekdays",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JArray DateFormatSymbols::getYearNames(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getYearNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JArray DateFormatSymbols::getZodiacNames(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getZodiacNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
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
	inline void DateFormatSymbols::setEraNames(JArray arg0) const
	{
		callMethod<void>(
			"setEraNames",
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
	inline void DateFormatSymbols::setMonths(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline void DateFormatSymbols::setQuarters(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setQuarters",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
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
	inline void DateFormatSymbols::setWeekdays(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline void DateFormatSymbols::setYearNames(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setYearNames",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline void DateFormatSymbols::setZodiacNames(JArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setZodiacNames",
			"([Ljava/lang/String;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
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
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
