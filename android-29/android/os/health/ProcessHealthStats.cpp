#include "./ProcessHealthStats.hpp"

namespace android::os::health
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
	
	ProcessHealthStats::ProcessHealthStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::os::health

