#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION
#define ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_ParseOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALL_STYLES();
		static QAndroidJniObject TZ_DATABASE_ABBREVIATIONS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_ParseOption::ALL_STYLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"ALL_STYLES",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	QAndroidJniObject TimeZoneFormat_ParseOption::TZ_DATABASE_ABBREVIATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"TZ_DATABASE_ABBREVIATIONS",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	
	// Constructors
	void TimeZoneFormat_ParseOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"(V)V");
	}
	
	// Methods
	jarray TimeZoneFormat_ParseOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$ParseOption;"
		).object<jarray>();
	}
	QAndroidJniObject TimeZoneFormat_ParseOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneFormat_ParseOption : public __jni_impl::android::icu::text::TimeZoneFormat_ParseOption
	{
	public:
		TimeZoneFormat_ParseOption(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneFormat_ParseOption()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION

