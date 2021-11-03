#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::aware
{
	class AttachCallback;
}
namespace android::net::wifi::aware
{
	class AwareResources;
}
namespace android::net::wifi::aware
{
	class Characteristics;
}
namespace android::net::wifi::aware
{
	class IdentityChangedListener;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::net::wifi::aware
{
	class WifiAwareManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_WIFI_AWARE_STATE_CHANGED();
		static jint WIFI_AWARE_DATA_PATH_ROLE_INITIATOR();
		static jint WIFI_AWARE_DATA_PATH_ROLE_RESPONDER();
		static jint WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE();
		static jint WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiAwareManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1);
		void attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2);
		android::net::wifi::aware::AwareResources getAvailableAwareResources();
		android::net::wifi::aware::Characteristics getCharacteristics();
		jboolean isAvailable();
		jboolean isDeviceAttached();
		jboolean isInstantCommunicationModeEnabled();
	};
} // namespace android::net::wifi::aware

