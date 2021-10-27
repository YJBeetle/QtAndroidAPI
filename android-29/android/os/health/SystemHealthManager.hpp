#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os::health
{
	class HealthStats;
}

namespace android::os::health
{
	class SystemHealthManager : public __JniBaseClass
	{
	public:
		// Fields
		
		SystemHealthManager(QAndroidJniObject obj);
		// Constructors
		SystemHealthManager() = default;
		
		// Methods
		QAndroidJniObject takeMyUidSnapshot();
		QAndroidJniObject takeUidSnapshot(jint arg0);
		jarray takeUidSnapshots(jintArray arg0);
	};
} // namespace android::os::health

