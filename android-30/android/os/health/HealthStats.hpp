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
		
		// QJniObject forward
		template<typename ...Ts> explicit HealthStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HealthStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDataType();
		jlong getMeasurement(jint arg0);
		jint getMeasurementKeyAt(jint arg0);
		jint getMeasurementKeyCount();
		__JniBaseClass getMeasurements(jint arg0);
		jint getMeasurementsKeyAt(jint arg0);
		jint getMeasurementsKeyCount();
		__JniBaseClass getStats(jint arg0);
		jint getStatsKeyAt(jint arg0);
		jint getStatsKeyCount();
		android::os::health::TimerStat getTimer(jint arg0);
		jint getTimerCount(jint arg0);
		jint getTimerKeyAt(jint arg0);
		jint getTimerKeyCount();
		jlong getTimerTime(jint arg0);
		__JniBaseClass getTimers(jint arg0);
		jint getTimersKeyAt(jint arg0);
		jint getTimersKeyCount();
		jboolean hasMeasurement(jint arg0);
		jboolean hasMeasurements(jint arg0);
		jboolean hasStats(jint arg0);
		jboolean hasTimer(jint arg0);
		jboolean hasTimers(jint arg0);
	};
} // namespace android::os::health

