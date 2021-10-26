#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE
#define ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject POSITIVE_HM();
		static QAndroidJniObject POSITIVE_HMS();
		static QAndroidJniObject NEGATIVE_HM();
		static QAndroidJniObject NEGATIVE_HMS();
		static QAndroidJniObject POSITIVE_H();
		static QAndroidJniObject NEGATIVE_H();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	
	// Constructors
	void TimeZoneFormat_GMTOffsetPatternType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"(V)V");
	}
	
	// Methods
	jarray TimeZoneFormat_GMTOffsetPatternType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		).object<jarray>();
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType : public __jni_impl::android::icu::text::TimeZoneFormat_GMTOffsetPatternType
	{
	public:
		TimeZoneFormat_GMTOffsetPatternType(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneFormat_GMTOffsetPatternType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE

