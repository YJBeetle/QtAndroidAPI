#pragma once

#ifndef ANDROID_OS_HEALTH_SERVICEHEALTHSTATS
#define ANDROID_OS_HEALTH_SERVICEHEALTHSTATS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::health
{
	class ServiceHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_LAUNCH_COUNT();
		static jint MEASUREMENT_START_SERVICE_COUNT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::health


namespace __jni_impl::android::os::health
{
	// Fields
	jint ServiceHealthStats::MEASUREMENT_LAUNCH_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_LAUNCH_COUNT");
	}
	jint ServiceHealthStats::MEASUREMENT_START_SERVICE_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_START_SERVICE_COUNT");
	}
	
	// Constructors
	void ServiceHealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.ServiceHealthStats",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class ServiceHealthStats : public __jni_impl::android::os::health::ServiceHealthStats
	{
	public:
		ServiceHealthStats(QAndroidJniObject obj) { __thiz = obj; }
		ServiceHealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_SERVICEHEALTHSTATS

