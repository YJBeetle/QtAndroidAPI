#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONEFORMAT_TIMETYPE
#define ANDROID_ICU_TEXT_TIMEZONEFORMAT_TIMETYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_TimeType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAYLIGHT();
		static QAndroidJniObject STANDARD();
		static QAndroidJniObject UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_TimeType::DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"DAYLIGHT",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_TimeType::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"STANDARD",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_TimeType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"UNKNOWN",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	
	// Constructors
	void TimeZoneFormat_TimeType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneFormat$TimeType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimeZoneFormat_TimeType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$TimeType;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat_TimeType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$TimeType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TimeZoneFormat_TimeType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$TimeType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneFormat_TimeType : public __jni_impl::android::icu::text::TimeZoneFormat_TimeType
	{
	public:
		TimeZoneFormat_TimeType(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneFormat_TimeType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONEFORMAT_TIMETYPE

