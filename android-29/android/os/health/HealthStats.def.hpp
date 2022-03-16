#pragma once

#include "../../../JObject.hpp"

namespace android::os::health
{
	class TimerStat;
}
class JString;

namespace android::os::health
{
	class HealthStats : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HealthStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getDataType() const;
		jlong getMeasurement(jint arg0) const;
		jint getMeasurementKeyAt(jint arg0) const;
		jint getMeasurementKeyCount() const;
		JObject getMeasurements(jint arg0) const;
		jint getMeasurementsKeyAt(jint arg0) const;
		jint getMeasurementsKeyCount() const;
		JObject getStats(jint arg0) const;
		jint getStatsKeyAt(jint arg0) const;
		jint getStatsKeyCount() const;
		android::os::health::TimerStat getTimer(jint arg0) const;
		jint getTimerCount(jint arg0) const;
		jint getTimerKeyAt(jint arg0) const;
		jint getTimerKeyCount() const;
		jlong getTimerTime(jint arg0) const;
		JObject getTimers(jint arg0) const;
		jint getTimersKeyAt(jint arg0) const;
		jint getTimersKeyCount() const;
		jboolean hasMeasurement(jint arg0) const;
		jboolean hasMeasurements(jint arg0) const;
		jboolean hasStats(jint arg0) const;
		jboolean hasTimer(jint arg0) const;
		jboolean hasTimers(jint arg0) const;
	};
} // namespace android::os::health

