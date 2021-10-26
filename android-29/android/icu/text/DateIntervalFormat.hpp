#pragma once

#ifndef ANDROID_ICU_TEXT_DATEINTERVALFORMAT
#define ANDROID_ICU_TEXT_DATEINTERVALFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

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
namespace __jni_impl::android::icu::util
{
	class DateInterval;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class DateIntervalInfo;
}
namespace __jni_impl::android::icu::util
{
	class TimeZone;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::android::icu::text
{
	class DateFormat;
}

namespace __jni_impl::android::icu::text
{
	class DateIntervalFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
		QAndroidJniObject format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::lang::StringBuffer arg2, __jni_impl::java::text::FieldPosition arg3);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::android::icu::util::DateInterval arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::android::icu::text::DateIntervalInfo arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::android::icu::text::DateIntervalInfo arg1);
		void setTimeZone(__jni_impl::android::icu::util::TimeZone arg0);
		QAndroidJniObject getTimeZone();
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject getDateFormat();
		QAndroidJniObject getDateIntervalInfo();
		void setDateIntervalInfo(__jni_impl::android::icu::text::DateIntervalInfo arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/lang/StringBuffer.hpp"
#include "../util/Calendar.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../util/DateInterval.hpp"
#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"
#include "DateIntervalInfo.hpp"
#include "../util/TimeZone.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "DateFormat.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void DateIntervalFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalFormat",
			"(V)V");
	}
	
	// Methods
	jobject DateIntervalFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateIntervalFormat::format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::lang::StringBuffer arg2, __jni_impl::java::text::FieldPosition arg3)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::format(__jni_impl::android::icu::util::DateInterval arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/DateInterval;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			arg0
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1, __jni_impl::android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, __jni_impl::android::icu::text::DateIntervalInfo arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, __jni_impl::android::icu::text::DateIntervalInfo arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DateIntervalFormat::setTimeZone(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jobject DateIntervalFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject DateIntervalFormat::parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject DateIntervalFormat::getDateFormat()
	{
		return __thiz.callObjectMethod(
			"getDateFormat",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateIntervalFormat::getDateIntervalInfo()
	{
		return __thiz.callObjectMethod(
			"getDateIntervalInfo",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	void DateIntervalFormat::setDateIntervalInfo(__jni_impl::android::icu::text::DateIntervalInfo arg0)
	{
		__thiz.callMethod<void>(
			"setDateIntervalInfo",
			"(Landroid/icu/text/DateIntervalInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateIntervalFormat : public __jni_impl::android::icu::text::DateIntervalFormat
	{
	public:
		DateIntervalFormat(QAndroidJniObject obj) { __thiz = obj; }
		DateIntervalFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEINTERVALFORMAT

