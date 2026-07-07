#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::os
{
	class CpuHeadroomParams;
}
namespace android::os
{
	class GpuHeadroomParams;
}
namespace android::os::health
{
	class HealthStats;
}
namespace android::util
{
	class Pair;
}

namespace android::os::health
{
	class SystemHealthManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemHealthManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemHealthManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jfloat getCpuHeadroom(android::os::CpuHeadroomParams arg0) const;
		android::util::Pair getCpuHeadroomCalculationWindowRange() const;
		jlong getCpuHeadroomMinIntervalMillis() const;
		jfloat getGpuHeadroom(android::os::GpuHeadroomParams arg0) const;
		android::util::Pair getGpuHeadroomCalculationWindowRange() const;
		jlong getGpuHeadroomMinIntervalMillis() const;
		jint getMaxCpuHeadroomTidsSize() const;
		void getPowerMonitorReadings(JObject arg0, JObject arg1, JObject arg2) const;
		void getSupportedPowerMonitors(JObject arg0, JObject arg1) const;
		android::os::health::HealthStats takeMyUidSnapshot() const;
		android::os::health::HealthStats takeUidSnapshot(jint arg0) const;
		JArray takeUidSnapshots(JIntArray arg0) const;
	};
} // namespace android::os::health

