#pragma once

#ifndef ANDROID_OS_HEALTH_PIDHEALTHSTATS
#define ANDROID_OS_HEALTH_PIDHEALTHSTATS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::health
{
	class PidHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_WAKE_NESTING_COUNT();
		static jint MEASUREMENT_WAKE_START_MS();
		static jint MEASUREMENT_WAKE_SUM_MS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::health


namespace __jni_impl::android::os::health
{
	// Fields
	jint PidHealthStats::MEASUREMENT_WAKE_NESTING_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_NESTING_COUNT");
	}
	jint PidHealthStats::MEASUREMENT_WAKE_START_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_START_MS");
	}
	jint PidHealthStats::MEASUREMENT_WAKE_SUM_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_SUM_MS");
	}
	
	// Constructors
	void PidHealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.PidHealthStats",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class PidHealthStats : public __jni_impl::android::os::health::PidHealthStats
	{
	public:
		PidHealthStats(QAndroidJniObject obj) { __thiz = obj; }
		PidHealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_PIDHEALTHSTATS

