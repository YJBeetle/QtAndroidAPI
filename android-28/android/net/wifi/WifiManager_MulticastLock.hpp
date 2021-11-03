#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiManager;
}
class JString;

namespace android::net::wifi
{
	class WifiManager_MulticastLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_MulticastLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_MulticastLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		JString toString();
	};
} // namespace android::net::wifi

