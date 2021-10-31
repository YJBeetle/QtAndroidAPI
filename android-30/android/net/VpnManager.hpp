#pragma once

#include "../../__JniBaseClass.hpp"

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
	class VpnManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VpnManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VpnManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void deleteProvisionedVpnProfile();
		android::content::Intent provisionVpnProfile(android::net::PlatformVpnProfile arg0);
		void startProvisionedVpnProfile();
		void stopProvisionedVpnProfile();
	};
} // namespace android::net

