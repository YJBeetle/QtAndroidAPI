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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemHealthManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemHealthManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::health::HealthStats takeMyUidSnapshot();
		android::os::health::HealthStats takeUidSnapshot(jint arg0);
		JArray takeUidSnapshots(JIntArray arg0);
	};
} // namespace android::os::health

