#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::health
{
	class PackageHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENTS_WAKEUP_ALARMS_COUNT();
		static jint STATS_SERVICES();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::health


namespace __jni_impl::android::os::health
{
	// Fields
	jint PackageHealthStats::MEASUREMENTS_WAKEUP_ALARMS_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"MEASUREMENTS_WAKEUP_ALARMS_COUNT"
		);
	}
	jint PackageHealthStats::STATS_SERVICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"STATS_SERVICES"
		);
	}
	
	// Constructors
	void PackageHealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.PackageHealthStats",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class PackageHealthStats : public __jni_impl::android::os::health::PackageHealthStats
	{
	public:
		PackageHealthStats(QAndroidJniObject obj) { __thiz = obj; }
		PackageHealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

