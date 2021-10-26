#pragma once

#ifndef ANDROID_TEXT_FORMAT_DATEFORMAT
#define ANDROID_TEXT_FORMAT_DATEFORMAT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Calendar;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::text
{
	class DateFormat;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::text::format
{
	class DateFormat : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring format(jstring arg0, __jni_impl::java::util::Calendar arg1);
		static jstring format(const QString &arg0, __jni_impl::java::util::Calendar arg1);
		static jstring format(jstring arg0, jlong arg1);
		static jstring format(const QString &arg0, jlong arg1);
		static jstring format(jstring arg0, __jni_impl::java::util::Date arg1);
		static jstring format(const QString &arg0, __jni_impl::java::util::Date arg1);
		static jstring getBestDateTimePattern(__jni_impl::java::util::Locale arg0, jstring arg1);
		static jstring getBestDateTimePattern(__jni_impl::java::util::Locale arg0, const QString &arg1);
		static QAndroidJniObject getTimeFormat(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getDateFormat(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getLongDateFormat(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getMediumDateFormat(__jni_impl::android::content::Context arg0);
		static jcharArray getDateFormatOrder(__jni_impl::android::content::Context arg0);
		static jboolean is24HourFormat(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::text::format

#include "../../../java/util/Calendar.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/text/DateFormat.hpp"
#include "../../content/Context.hpp"

namespace __jni_impl::android::text::format
{
	// Fields
	
	// Constructors
	void DateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.format.DateFormat",
			"()V"
		);
	}
	
	// Methods
	jstring DateFormat::format(jstring arg0, __jni_impl::java::util::Calendar arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring DateFormat::format(const QString &arg0, __jni_impl::java::util::Calendar arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring DateFormat::format(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateFormat::format(const QString &arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring DateFormat::format(jstring arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring DateFormat::format(const QString &arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring DateFormat::getBestDateTimePattern(__jni_impl::java::util::Locale arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getBestDateTimePattern",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring DateFormat::getBestDateTimePattern(__jni_impl::java::util::Locale arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getBestDateTimePattern",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject DateFormat::getTimeFormat(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getTimeFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateFormat(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getLongDateFormat(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getLongDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getMediumDateFormat(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getMediumDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.__jniObject().object()
		);
	}
	jcharArray DateFormat::getDateFormatOrder(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormatOrder",
			"(Landroid/content/Context;)[C",
			arg0.__jniObject().object()
		).object<jcharArray>();
	}
	jboolean DateFormat::is24HourFormat(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.format.DateFormat",
			"is24HourFormat",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::format

namespace android::text::format
{
	class DateFormat : public __jni_impl::android::text::format::DateFormat
	{
	public:
		DateFormat(QAndroidJniObject obj) { __thiz = obj; }
		DateFormat()
		{
			__constructor();
		}
	};
} // namespace android::text::format

#endif // ANDROID_TEXT_FORMAT_DATEFORMAT

