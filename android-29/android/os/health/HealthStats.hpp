#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os::health
{
	class TimerStat;
}

namespace android::os::health
{
	class HealthStats : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HealthStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HealthStats(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDataType();
		jlong getMeasurement(jint arg0);
		jint getMeasurementKeyAt(jint arg0);
		jint getMeasurementKeyCount();
		QAndroidJniObject getMeasurements(jint arg0);
		jint getMeasurementsKeyAt(jint arg0);
		jint getMeasurementsKeyCount();
		QAndroidJniObject getStats(jint arg0);
		jint getStatsKeyAt(jint arg0);
		jint getStatsKeyCount();
		QAndroidJniObject getTimer(jint arg0);
		jint getTimerCount(jint arg0);
		jint getTimerKeyAt(jint arg0);
		jint getTimerKeyCount();
		jlong getTimerTime(jint arg0);
		QAndroidJniObject getTimers(jint arg0);
		jint getTimersKeyAt(jint arg0);
		jint getTimersKeyCount();
		jboolean hasMeasurement(jint arg0);
		jboolean hasMeasurements(jint arg0);
		jboolean hasStats(jint arg0);
		jboolean hasTimer(jint arg0);
		jboolean hasTimers(jint arg0);
	};
} // namespace android::os::health

