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
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"ABBREVIATED"
		);
	}
	jint DateFormatSymbols::FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"FORMAT"
		);
	}
	jint DateFormatSymbols::NARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"NARROW"
		);
	}
	jint DateFormatSymbols::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"SHORT"
		);
	}
	jint DateFormatSymbols::STANDALONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"STANDALONE"
		);
	}
	jint DateFormatSymbols::WIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormatSymbols",
			"WIDE"
		);
	}
	
	DateFormatSymbols::DateFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateFormatSymbols::DateFormatSymbols()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"()V"
		);
	}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(jclass arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(jclass arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DateFormatSymbols::DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jarray DateFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DateFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	QAndroidJniObject DateFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	jobject DateFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray DateFormatSymbols::getAmPmStrings()
	{
		return __thiz.callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getEraNames()
	{
		return __thiz.callObjectMethod(
			"getEraNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getEras()
	{
		return __thiz.callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DateFormatSymbols::getLocalPatternChars()
	{
		return __thiz.callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray DateFormatSymbols::getMonths()
	{
		return __thiz.callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getMonths(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getMonths",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getQuarters(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getQuarters",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortMonths()
	{
		return __thiz.callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortWeekdays()
	{
		return __thiz.callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getWeekdays()
	{
		return __thiz.callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getWeekdays(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getWeekdays",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getYearNames(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getYearNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getZodiacNames(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getZodiacNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DateFormatSymbols::getZoneStrings()
	{
		return __thiz.callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	jint DateFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DateFormatSymbols::setAmPmStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setEraNames(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEraNames",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setEras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setLocalPatternChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setMonths(jarray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setQuarters(jarray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setQuarters",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setShortMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setShortWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setWeekdays(jarray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setYearNames(jarray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setYearNames",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setZodiacNames(jarray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setZodiacNames",
			"([Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateFormatSymbols::setZoneStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::icu::text

