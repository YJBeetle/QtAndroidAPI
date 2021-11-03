#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
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
	JArray SystemHealthManager::takeUidSnapshots(JIntArray arg0)
	{
		return callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::os::health

