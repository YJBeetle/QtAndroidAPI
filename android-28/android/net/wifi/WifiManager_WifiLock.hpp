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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_WifiLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_WifiLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		void setWorkSource(android::os::WorkSource arg0);
		jstring toString();
	};
} // namespace android::net::wifi

