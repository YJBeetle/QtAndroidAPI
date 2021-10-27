#pragma once

#ifndef ANDROID_ICU_UTIL_TIMEZONE_SYSTEMTIMEZONETYPE
#define ANDROID_ICU_UTIL_TIMEZONE_SYSTEMTIMEZONETYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::util
{
	class TimeZone_SystemTimeZoneType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ANY();
		static QAndroidJniObject CANONICAL();
		static QAndroidJniObject CANONICAL_LOCATION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject TimeZone_SystemTimeZoneType::ANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"ANY",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	QAndroidJniObject TimeZone_SystemTimeZoneType::CANONICAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	QAndroidJniObject TimeZone_SystemTimeZoneType::CANONICAL_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL_LOCATION",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	
	// Constructors
	void TimeZone_SystemTimeZoneType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimeZone_SystemTimeZoneType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;",
			arg0
		);
	}
	QAndroidJniObject TimeZone_SystemTimeZoneType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TimeZone_SystemTimeZoneType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"values",
			"()[Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class TimeZone_SystemTimeZoneType : public __jni_impl::android::icu::util::TimeZone_SystemTimeZoneType
	{
	public:
		TimeZone_SystemTimeZoneType(QAndroidJniObject obj) { __thiz = obj; }
		TimeZone_SystemTimeZoneType()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_TIMEZONE_SYSTEMTIMEZONETYPE

