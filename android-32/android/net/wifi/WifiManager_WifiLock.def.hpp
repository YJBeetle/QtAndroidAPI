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
		WifiManager_WifiLock(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void acquire() const;
		jboolean isHeld() const;
		void release() const;
		void setReferenceCounted(jboolean arg0) const;
		void setWorkSource(android::os::WorkSource arg0) const;
		JString toString() const;
	};
} // namespace android::net::wifi

