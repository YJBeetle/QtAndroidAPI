#pragma once

#ifndef ANDROID_ICU_UTIL_LOCALEDATA_MEASUREMENTSYSTEM
#define ANDROID_ICU_UTIL_LOCALEDATA_MEASUREMENTSYSTEM

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class LocaleData_MeasurementSystem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SI();
		static QAndroidJniObject UK();
		static QAndroidJniObject US();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject LocaleData_MeasurementSystem::SI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"SI",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	QAndroidJniObject LocaleData_MeasurementSystem::UK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"UK",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	QAndroidJniObject LocaleData_MeasurementSystem::US()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"US",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	
	// Constructors
	void LocaleData_MeasurementSystem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.LocaleData$MeasurementSystem",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class LocaleData_MeasurementSystem : public __jni_impl::android::icu::util::LocaleData_MeasurementSystem
	{
	public:
		LocaleData_MeasurementSystem(QAndroidJniObject obj) { __thiz = obj; }
		LocaleData_MeasurementSystem()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_LOCALEDATA_MEASUREMENTSYSTEM

