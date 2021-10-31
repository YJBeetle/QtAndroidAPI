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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemHealthManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SystemHealthManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject takeMyUidSnapshot();
		QAndroidJniObject takeUidSnapshot(jint arg0);
		jarray takeUidSnapshots(jintArray arg0);
	};
} // namespace android::os::health

