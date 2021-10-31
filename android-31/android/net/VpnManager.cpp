#include "../content/Intent.hpp"
#include "./PlatformVpnProfile.hpp"
#include "./VpnManager.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	VpnManager::VpnManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void VpnManager::deleteProvisionedVpnProfile()
	{
		callMethod<void>(
			"deleteProvisionedVpnProfile",
			"()V"
		);
	}
	android::content::Intent VpnManager::provisionVpnProfile(android::net::PlatformVpnProfile arg0)
	{
		return callObjectMethod(
			"provisionVpnProfile",
			"(Landroid/net/PlatformVpnProfile;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	void VpnManager::startProvisionedVpnProfile()
	{
		callMethod<void>(
			"startProvisionedVpnProfile",
			"()V"
		);
	}
	void VpnManager::stopProvisionedVpnProfile()
	{
		callMethod<void>(
			"stopProvisionedVpnProfile",
			"()V"
		);
	}
} // namespace android::net

