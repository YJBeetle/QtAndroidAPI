#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::usage
{
	class ExternalStorageStats;
}
namespace android::app::usage
{
	class StorageStats;
}
namespace android::os
{
	class UserHandle;
}
namespace java::util
{
	class UUID;
}

namespace android::app::usage
{
	class StorageStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageStatsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StorageStatsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getFreeBytes(java::util::UUID arg0);
		jlong getTotalBytes(java::util::UUID arg0);
		QAndroidJniObject queryExternalStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1);
		QAndroidJniObject queryStatsForPackage(java::util::UUID arg0, jstring arg1, android::os::UserHandle arg2);
		QAndroidJniObject queryStatsForUid(java::util::UUID arg0, jint arg1);
		QAndroidJniObject queryStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1);
	};
} // namespace android::app::usage

