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
		static JString ACTION_WIFI_AWARE_RESOURCE_CHANGED();
		static JString ACTION_WIFI_AWARE_STATE_CHANGED();
		static JString EXTRA_AWARE_RESOURCES();
		static jint WIFI_AWARE_DATA_PATH_ROLE_INITIATOR();
		static jint WIFI_AWARE_DATA_PATH_ROLE_RESPONDER();
		static jint WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE();
		static jint WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAwareManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1) const;
		void attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2) const;
		android::net::wifi::aware::AwareResources getAvailableAwareResources() const;
		android::net::wifi::aware::Characteristics getCharacteristics() const;
		jboolean isAvailable() const;
		jboolean isDeviceAttached() const;
		jboolean isInstantCommunicationModeEnabled() const;
		jboolean isSetChannelOnDataPathSupported() const;
	};
} // namespace android::net::wifi::aware

