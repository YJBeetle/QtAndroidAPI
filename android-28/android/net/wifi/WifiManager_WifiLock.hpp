#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiManager;
}
namespace android::os
{
	class WorkSource;
}
class JString;

namespace android::net::wifi
{
	class WifiManager_WifiLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_WifiLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_WifiLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		void setWorkSource(android::os::WorkSource arg0);
		JString toString();
	};
} // namespace android::net::wifi

