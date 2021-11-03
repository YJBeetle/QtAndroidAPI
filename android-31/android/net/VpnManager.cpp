#include "../content/Intent.hpp"
#include "./PlatformVpnProfile.hpp"
#include "./VpnManager.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	VpnManager::VpnManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VpnManager::deleteProvisionedVpnProfile() const
	{
		callMethod<void>(
			"deleteProvisionedVpnProfile",
			"()V"
		);
	}
	android::content::Intent VpnManager::provisionVpnProfile(android::net::PlatformVpnProfile arg0) const
	{
		return callObjectMethod(
			"provisionVpnProfile",
			"(Landroid/net/PlatformVpnProfile;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	void VpnManager::startProvisionedVpnProfile() const
	{
		callMethod<void>(
			"startProvisionedVpnProfile",
			"()V"
		);
	}
	void VpnManager::stopProvisionedVpnProfile() const
	{
		callMethod<void>(
			"stopProvisionedVpnProfile",
			"()V"
		);
	}
} // namespace android::net

