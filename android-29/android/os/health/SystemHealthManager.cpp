#include "./HealthStats.hpp"
#include "./SystemHealthManager.hpp"

namespace android::os::health
{
	// Fields
	
	SystemHealthManager::SystemHealthManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SystemHealthManager::takeMyUidSnapshot()
	{
		return __thiz.callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	QAndroidJniObject SystemHealthManager::takeUidSnapshot(jint arg0)
	{
		return __thiz.callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	jarray SystemHealthManager::takeUidSnapshots(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0
		).object<jarray>();
	}
} // namespace android::os::health

