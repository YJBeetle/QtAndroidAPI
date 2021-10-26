#pragma once

#ifndef ANDROID_ICU_TEXT_SIMPLEDATEFORMAT
#define ANDROID_ICU_TEXT_SIMPLEDATEFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"
#include "DateFormat.hpp"

namespace __jni_impl::android::icu::text
{
	class DateFormatSymbols;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::android::icu::util
{
	class Calendar;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::android::icu::text
{
	class NumberFormat;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext;
}
namespace __jni_impl::android::icu::text
{
	class DateFormat_Field;
}
namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat;
}

namespace __jni_impl::android::icu::text
{
	class SimpleDateFormat : public __jni_impl::android::icu::text::DateFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::icu::text::DateFormatSymbols arg1);
		void __constructor(const QString &arg0, __jni_impl::android::icu::text::DateFormatSymbols arg1);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2);
		void __constructor(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(const QString &arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		QAndroidJniObject format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		void parse(jstring arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2);
		void parse(const QString &arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jstring toPattern();
		void set2DigitYearStart(__jni_impl::java::util::Date arg0);
		QAndroidJniObject get2DigitYearStart();
		jstring toLocalizedPattern();
		void applyLocalizedPattern(jstring arg0);
		void applyLocalizedPattern(const QString &arg0);
		QAndroidJniObject getDateFormatSymbols();
		void setDateFormatSymbols(__jni_impl::android::icu::text::DateFormatSymbols arg0);
		void setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0);
		void setNumberFormat(jstring arg0, __jni_impl::android::icu::text::NumberFormat arg1);
		void setNumberFormat(const QString &arg0, __jni_impl::android::icu::text::NumberFormat arg1);
		QAndroidJniObject getNumberFormat(jchar arg0);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		void setContext(__jni_impl::android::icu::text::DisplayContext arg0);
		QAndroidJniObject getTimeZoneFormat();
		void setTimeZoneFormat(__jni_impl::android::icu::text::TimeZoneFormat arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "DateFormatSymbols.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../util/Calendar.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Date.hpp"
#include "NumberFormat.hpp"
#include "DisplayContext.hpp"
#include "DateFormat_Field.hpp"
#include "TimeZoneFormat.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::android::icu::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, __jni_impl::android::icu::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"()V"
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject SimpleDateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject SimpleDateFormat::format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::parse(jstring arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::parse(const QString &arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring SimpleDateFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SimpleDateFormat::set2DigitYearStart(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::get2DigitYearStart()
	{
		return __thiz.callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	jstring SimpleDateFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyLocalizedPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SimpleDateFormat::getDateFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDateFormatSymbols",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(__jni_impl::android::icu::text::DateFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDateFormatSymbols",
			"(Landroid/icu/text/DateFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(jstring arg0, __jni_impl::android::icu::text::NumberFormat arg1)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(const QString &arg0, __jni_impl::android::icu::text::NumberFormat arg1)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::getNumberFormat(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"(C)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	void SimpleDateFormat::setContext(__jni_impl::android::icu::text::DisplayContext arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::getTimeZoneFormat()
	{
		return __thiz.callObjectMethod(
			"getTimeZoneFormat",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	void SimpleDateFormat::setTimeZoneFormat(__jni_impl::android::icu::text::TimeZoneFormat arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZoneFormat",
			"(Landroid/icu/text/TimeZoneFormat;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class SimpleDateFormat : public __jni_impl::android::icu::text::SimpleDateFormat
	{
	public:
		SimpleDateFormat(QAndroidJniObject obj) { __thiz = obj; }
		SimpleDateFormat(jstring arg0, __jni_impl::android::icu::text::DateFormatSymbols arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SimpleDateFormat(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SimpleDateFormat(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SimpleDateFormat()
		{
			__constructor();
		}
		SimpleDateFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SimpleDateFormat(jstring arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_SIMPLEDATEFORMAT

