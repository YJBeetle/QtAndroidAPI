#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE
#define ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class TimeZoneNames_NameType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LONG_GENERIC();
		static QAndroidJniObject LONG_STANDARD();
		static QAndroidJniObject LONG_DAYLIGHT();
		static QAndroidJniObject SHORT_GENERIC();
		static QAndroidJniObject SHORT_STANDARD();
		static QAndroidJniObject SHORT_DAYLIGHT();
		static QAndroidJniObject EXEMPLAR_LOCATION();
		
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
	QAndroidJniObject TimeZoneNames_NameType::LONG_GENERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::LONG_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::LONG_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::SHORT_GENERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::SHORT_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::SHORT_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::EXEMPLAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	
	// Constructors
	void TimeZoneNames_NameType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneNames$NameType",
			"(V)V");
	}
	
	// Methods
	jarray TimeZoneNames_NameType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"values",
			"()[Landroid/icu/text/TimeZoneNames$NameType;"
		).object<jarray>();
	}
	QAndroidJniObject TimeZoneNames_NameType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneNames$NameType;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneNames_NameType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneNames$NameType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneNames_NameType : public __jni_impl::android::icu::text::TimeZoneNames_NameType
	{
	public:
		TimeZoneNames_NameType(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneNames_NameType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE

