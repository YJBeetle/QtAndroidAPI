#include "./HealthStats.hpp"
#include "./SystemHealthManager.hpp"

namespace android::os::health
{
	// Fields
	
	// QAndroidJniObject forward
	SystemHealthManager::SystemHealthManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SystemHealthManager::takeMyUidSnapshot()
	{
		return callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	QAndroidJniObject SystemHealthManager::takeUidSnapshot(jint arg0)
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

