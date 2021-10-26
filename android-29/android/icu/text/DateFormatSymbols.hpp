#pragma once

#ifndef ANDROID_ICU_TEXT_DATEFORMATSYMBOLS
#define ANDROID_ICU_TEXT_DATEFORMATSYMBOLS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class Calendar;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}

namespace __jni_impl::android::icu::text
{
	class DateFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		static jint ABBREVIATED();
		static jint FORMAT();
		static jint NARROW();
		static jint SHORT();
		static jint STANDALONE();
		static jint WIDE();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(jclass arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jclass arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static jarray getAvailableLocales();
		jarray getEras();
		jarray getShortMonths();
		jarray getWeekdays(jint arg0, jint arg1);
		jarray getWeekdays();
		jarray getShortWeekdays();
		jarray getAmPmStrings();
		jstring getLocalPatternChars();
		jarray getMonths();
		jarray getMonths(jint arg0, jint arg1);
		void setLocalPatternChars(jstring arg0);
		void setLocalPatternChars(const QString &arg0);
		jarray getZoneStrings();
		void setEras(jarray arg0);
		void setMonths(jarray arg0, jint arg1, jint arg2);
		void setMonths(jarray arg0);
		void setShortMonths(jarray arg0);
		void setWeekdays(jarray arg0, jint arg1, jint arg2);
		void setWeekdays(jarray arg0);
		void setShortWeekdays(jarray arg0);
		void setAmPmStrings(jarray arg0);
		void setZoneStrings(jarray arg0);
		jarray getEraNames();
		void setEraNames(jarray arg0);
		jarray getQuarters(jint arg0, jint arg1);
		void setQuarters(jarray arg0, jint arg1, jint arg2);
		jarray getYearNames(jint arg0, jint arg1);
		void setYearNames(jarray arg0, jint arg1, jint arg2);
		jarray getZodiacNames(jint arg0, jint arg1);
		void setZodiacNames(jarray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/Calendar.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/util/ResourceBundle.hpp"

namespace __jni_impl::android::icu::text
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
	
	// Constructors
	void DateFormatSymbols::__constructor(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(jclass arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(jclass arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/lang/Class;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"()V"
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormatSymbols",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean DateFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DateFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject DateFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateFormatSymbols::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	QAndroidJniObject DateFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	jarray DateFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getEras()
	{
		return __thiz.callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortMonths()
	{
		return __thiz.callObjectMethod(
			"getShortMonths",
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
	jarray DateFormatSymbols::getWeekdays()
	{
		return __thiz.callObjectMethod(
			"getWeekdays",
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
	jarray DateFormatSymbols::getAmPmStrings()
	{
		return __thiz.callObjectMethod(
			"getAmPmStrings",
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
	void DateFormatSymbols::setLocalPatternChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setLocalPatternChars(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray DateFormatSymbols::getZoneStrings()
	{
		return __thiz.callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	void DateFormatSymbols::setEras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEras",
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
	void DateFormatSymbols::setMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0
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
	void DateFormatSymbols::setWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setWeekdays",
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
	void DateFormatSymbols::setAmPmStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0
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
	jarray DateFormatSymbols::getEraNames()
	{
		return __thiz.callObjectMethod(
			"getEraNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void DateFormatSymbols::setEraNames(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEraNames",
			"([Ljava/lang/String;)V",
			arg0
		);
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
	jarray DateFormatSymbols::getYearNames(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getYearNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
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
	jarray DateFormatSymbols::getZodiacNames(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getZodiacNames",
			"(II)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
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
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateFormatSymbols : public __jni_impl::android::icu::text::DateFormatSymbols
	{
	public:
		DateFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
		DateFormatSymbols(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DateFormatSymbols(jclass arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DateFormatSymbols(jclass arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DateFormatSymbols(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DateFormatSymbols(__jni_impl::java::util::ResourceBundle arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DateFormatSymbols()
		{
			__constructor();
		}
		DateFormatSymbols(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		DateFormatSymbols(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		DateFormatSymbols(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEFORMATSYMBOLS

