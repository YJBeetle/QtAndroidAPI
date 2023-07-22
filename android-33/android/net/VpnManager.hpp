#pragma once

#include "../content/Intent.def.hpp"
#include "./PlatformVpnProfile.def.hpp"
#include "./VpnProfileState.def.hpp"
#include "../../JString.hpp"
#include "./VpnManager.def.hpp"

namespace android::net
{
	// Fields
	inline JString VpnManager::ACTION_VPN_MANAGER_EVENT()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"ACTION_VPN_MANAGER_EVENT",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::CATEGORY_EVENT_ALWAYS_ON_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"CATEGORY_EVENT_ALWAYS_ON_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::CATEGORY_EVENT_DEACTIVATED_BY_USER()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"CATEGORY_EVENT_DEACTIVATED_BY_USER",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::CATEGORY_EVENT_IKE_ERROR()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"CATEGORY_EVENT_IKE_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::CATEGORY_EVENT_NETWORK_ERROR()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"CATEGORY_EVENT_NETWORK_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline jint VpnManager::ERROR_CLASS_NOT_RECOVERABLE()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CLASS_NOT_RECOVERABLE"
		);
	}
	inline jint VpnManager::ERROR_CLASS_RECOVERABLE()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CLASS_RECOVERABLE"
		);
	}
	inline jint VpnManager::ERROR_CODE_NETWORK_IO()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CODE_NETWORK_IO"
		);
	}
	inline jint VpnManager::ERROR_CODE_NETWORK_LOST()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CODE_NETWORK_LOST"
		);
	}
	inline jint VpnManager::ERROR_CODE_NETWORK_PROTOCOL_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CODE_NETWORK_PROTOCOL_TIMEOUT"
		);
	}
	inline jint VpnManager::ERROR_CODE_NETWORK_UNKNOWN_HOST()
	{
		return getStaticField<jint>(
			"android.net.VpnManager",
			"ERROR_CODE_NETWORK_UNKNOWN_HOST"
		);
	}
	inline JString VpnManager::EXTRA_ERROR_CLASS()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_ERROR_CLASS",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_SESSION_KEY()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_SESSION_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_TIMESTAMP_MILLIS()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_TIMESTAMP_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_UNDERLYING_LINK_PROPERTIES()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_UNDERLYING_LINK_PROPERTIES",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_UNDERLYING_NETWORK()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_UNDERLYING_NETWORK",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_UNDERLYING_NETWORK_CAPABILITIES()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_UNDERLYING_NETWORK_CAPABILITIES",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnManager::EXTRA_VPN_PROFILE_STATE()
	{
		return getStaticObjectField(
			"android.net.VpnManager",
			"EXTRA_VPN_PROFILE_STATE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void VpnManager::deleteProvisionedVpnProfile() const
	{
		callMethod<void>(
			"deleteProvisionedVpnProfile",
			"()V"
		);
	}
	inline android::net::VpnProfileState VpnManager::getProvisionedVpnProfileState() const
	{
		return callObjectMethod(
			"getProvisionedVpnProfileState",
			"()Landroid/net/VpnProfileState;"
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
	inline JString VpnManager::startProvisionedVpnProfileSession() const
	{
		return callObjectMethod(
			"startProvisionedVpnProfileSession",
			"()Ljava/lang/String;"
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
