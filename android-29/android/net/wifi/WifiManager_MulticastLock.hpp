#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WifiManager;
}

namespace android::net::wifi
{
	class WifiManager_MulticastLock : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiManager_MulticastLock(QAndroidJniObject obj);
		// Constructors
		WifiManager_MulticastLock() = default;
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		jstring toString();
	};
} // namespace android::net::wifi

