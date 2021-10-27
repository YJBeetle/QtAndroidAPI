#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WifiManager;
}
namespace android::os
{
	class WorkSource;
}

namespace android::net::wifi
{
	class WifiManager_WifiLock : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiManager_WifiLock(QAndroidJniObject obj);
		// Constructors
		WifiManager_WifiLock() = default;
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		void setWorkSource(android::os::WorkSource arg0);
		jstring toString();
	};
} // namespace android::net::wifi

