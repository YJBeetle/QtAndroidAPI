#pragma once

#ifndef ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE
#define ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::util
{
	class IslamicCalendar_CalculationType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ISLAMIC();
		static QAndroidJniObject ISLAMIC_CIVIL();
		static QAndroidJniObject ISLAMIC_TBLA();
		static QAndroidJniObject ISLAMIC_UMALQURA();
		
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
	QAndroidJniObject IslamicCalendar_CalculationType::ISLAMIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	QAndroidJniObject IslamicCalendar_CalculationType::ISLAMIC_CIVIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_CIVIL",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	QAndroidJniObject IslamicCalendar_CalculationType::ISLAMIC_TBLA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_TBLA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	QAndroidJniObject IslamicCalendar_CalculationType::ISLAMIC_UMALQURA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_UMALQURA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	
	// Constructors
	void IslamicCalendar_CalculationType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar$CalculationType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IslamicCalendar_CalculationType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;",
			arg0
		);
	}
	QAndroidJniObject IslamicCalendar_CalculationType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray IslamicCalendar_CalculationType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"values",
			"()[Landroid/icu/util/IslamicCalendar$CalculationType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class IslamicCalendar_CalculationType : public __jni_impl::android::icu::util::IslamicCalendar_CalculationType
	{
	public:
		IslamicCalendar_CalculationType(QAndroidJniObject obj) { __thiz = obj; }
		IslamicCalendar_CalculationType()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE

