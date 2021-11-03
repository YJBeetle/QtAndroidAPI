#include "./HealthStats.hpp"
#include "./SystemHealthManager.hpp"

namespace android::os::health
{
	// Fields
	
	// QAndroidJniObject forward
	SystemHealthManager::SystemHealthManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::health::HealthStats SystemHealthManager::takeMyUidSnapshot()
	{
		return callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	android::os::health::HealthStats SystemHealthManager::takeUidSnapshot(jint arg0)
	{
		return callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	jarray SystemHealthManager::takeUidSnapshots(jintArray arg0)
	{
		return callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0
		).object<jarray>();
	}
} // namespace android::os::health

