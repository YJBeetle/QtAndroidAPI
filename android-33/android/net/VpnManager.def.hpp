#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class PlatformVpnProfile;
}
namespace android::net
{
	class VpnProfileState;
}
class JString;

namespace android::net
{
	class VpnManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_VPN_MANAGER_EVENT();
		static JString CATEGORY_EVENT_ALWAYS_ON_STATE_CHANGED();
		static JString CATEGORY_EVENT_DEACTIVATED_BY_USER();
		static JString CATEGORY_EVENT_IKE_ERROR();
		static JString CATEGORY_EVENT_NETWORK_ERROR();
		static jint ERROR_CLASS_NOT_RECOVERABLE();
		static jint ERROR_CLASS_RECOVERABLE();
		static jint ERROR_CODE_NETWORK_IO();
		static jint ERROR_CODE_NETWORK_LOST();
		static jint ERROR_CODE_NETWORK_PROTOCOL_TIMEOUT();
		static jint ERROR_CODE_NETWORK_UNKNOWN_HOST();
		static JString EXTRA_ERROR_CLASS();
		static JString EXTRA_ERROR_CODE();
		static JString EXTRA_SESSION_KEY();
		static JString EXTRA_TIMESTAMP_MILLIS();
		static JString EXTRA_UNDERLYING_LINK_PROPERTIES();
		static JString EXTRA_UNDERLYING_NETWORK();
		static JString EXTRA_UNDERLYING_NETWORK_CAPABILITIES();
		static JString EXTRA_VPN_PROFILE_STATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VpnManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VpnManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void deleteProvisionedVpnProfile() const;
		android::net::VpnProfileState getProvisionedVpnProfileState() const;
		android::content::Intent provisionVpnProfile(android::net::PlatformVpnProfile arg0) const;
		void startProvisionedVpnProfile() const;
		JString startProvisionedVpnProfileSession() const;
		void stopProvisionedVpnProfile() const;
	};
} // namespace android::net

