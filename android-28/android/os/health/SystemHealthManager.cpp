#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./HealthStats.hpp"
#include "./SystemHealthManager.hpp"

namespace android::os::health
{
	// Fields
	
	// QJniObject forward
	SystemHealthManager::SystemHealthManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::health::HealthStats SystemHealthManager::takeMyUidSnapshot() const
	{
		return callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	android::os::health::HealthStats SystemHealthManager::takeUidSnapshot(jint arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	JArray SystemHealthManager::takeUidSnapshots(JIntArray arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::os::health

