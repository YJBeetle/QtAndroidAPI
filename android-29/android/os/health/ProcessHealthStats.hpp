#pragma once

#ifndef ANDROID_OS_HEALTH_PROCESSHEALTHSTATS
#define ANDROID_OS_HEALTH_PROCESSHEALTHSTATS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::health
{
	class ProcessHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_ANR_COUNT();
		static jint MEASUREMENT_CRASHES_COUNT();
		static jint MEASUREMENT_FOREGROUND_MS();
		static jint MEASUREMENT_STARTS_COUNT();
		static jint MEASUREMENT_SYSTEM_TIME_MS();
		static jint MEASUREMENT_USER_TIME_MS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::health


namespace __jni_impl::android::os::health
{
	// Fields
	jint ProcessHealthStats::MEASUREMENT_ANR_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_ANR_COUNT"
		);
	}
	jint ProcessHealthStats::MEASUREMENT_CRASHES_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_CRASHES_COUNT"
		);
	}
	jint ProcessHealthStats::MEASUREMENT_FOREGROUND_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_FOREGROUND_MS"
		);
	}
	jint ProcessHealthStats::MEASUREMENT_STARTS_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_STARTS_COUNT"
		);
	}
	jint ProcessHealthStats::MEASUREMENT_SYSTEM_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_SYSTEM_TIME_MS"
		);
	}
	jint ProcessHealthStats::MEASUREMENT_USER_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_USER_TIME_MS"
		);
	}
	
	// Constructors
	void ProcessHealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.ProcessHealthStats",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class ProcessHealthStats : public __jni_impl::android::os::health::ProcessHealthStats
	{
	public:
		ProcessHealthStats(QAndroidJniObject obj) { __thiz = obj; }
		ProcessHealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_PROCESSHEALTHSTATS

