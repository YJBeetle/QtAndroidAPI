#pragma once

#include "../content/Intent.def.hpp"
#include "./PlatformVpnProfile.def.hpp"
#include "./VpnManager.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VpnManager::deleteProvisionedVpnProfile() const
	{
		callMethod<void>(
			"deleteProvisionedVpnProfile",
			"()V"
		);
	}
	inline android::content::Intent VpnManager::provisionVpnProfile(android::net::PlatformVpnProfile arg0) const
	{
		return callObjectMethod(
			"provisionVpnProfile",
			"(Landroid/net/PlatformVpnProfile;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	inline void VpnManager::startProvisionedVpnProfile() const
	{
		callMethod<void>(
			"startProvisionedVpnProfile",
			"()V"
		);
	}
	inline void VpnManager::stopProvisionedVpnProfile() const
	{
		callMethod<void>(
			"stopProvisionedVpnProfile",
			"()V"
		);
	}
} // namespace android::net

// Base class headers

