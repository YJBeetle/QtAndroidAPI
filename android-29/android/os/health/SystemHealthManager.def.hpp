#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::os::health
{
	class HealthStats;
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
		android::os::health::HealthStats takeMyUidSnapshot() const;
		android::os::health::HealthStats takeUidSnapshot(jint arg0) const;
		JArray takeUidSnapshots(JIntArray arg0) const;
	};
} // namespace android::os::health

