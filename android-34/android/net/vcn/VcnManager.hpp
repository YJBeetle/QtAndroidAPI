#pragma once

#include "./VcnConfig.def.hpp"
#include "./VcnManager_VcnStatusCallback.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "./VcnManager.def.hpp"

namespace android::net::vcn
{
	// Fields
	inline jint VcnManager::VCN_ERROR_CODE_CONFIG_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_CONFIG_ERROR"
		);
	}
	inline jint VcnManager::VCN_ERROR_CODE_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_INTERNAL_ERROR"
		);
	}
	inline jint VcnManager::VCN_ERROR_CODE_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_NETWORK_ERROR"
		);
	}
	inline jint VcnManager::VCN_STATUS_CODE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_ACTIVE"
		);
	}
	inline jint VcnManager::VCN_STATUS_CODE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_INACTIVE"
		);
	}
	inline jint VcnManager::VCN_STATUS_CODE_NOT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_NOT_CONFIGURED"
		);
	}
	inline jint VcnManager::VCN_STATUS_CODE_SAFE_MODE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_SAFE_MODE"
		);
	}
	
	// Constructors
	
	// Methods
	inline void VcnManager::clearVcnConfig(android::os::ParcelUuid arg0) const
	{
		callMethod<void>(
			"clearVcnConfig",
			"(Landroid/os/ParcelUuid;)V",
			arg0.object()
		);
	}
	inline JObject VcnManager::getConfiguredSubscriptionGroups() const
	{
		return callObjectMethod(
			"getConfiguredSubscriptionGroups",
			"()Ljava/util/List;"
		);
	}
	inline void VcnManager::registerVcnStatusCallback(android::os::ParcelUuid arg0, JObject arg1, android::net::vcn::VcnManager_VcnStatusCallback arg2) const
	{
		callMethod<void>(
			"registerVcnStatusCallback",
			"(Landroid/os/ParcelUuid;Ljava/util/concurrent/Executor;Landroid/net/vcn/VcnManager$VcnStatusCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void VcnManager::setVcnConfig(android::os::ParcelUuid arg0, android::net::vcn::VcnConfig arg1) const
	{
		callMethod<void>(
			"setVcnConfig",
			"(Landroid/os/ParcelUuid;Landroid/net/vcn/VcnConfig;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VcnManager::unregisterVcnStatusCallback(android::net::vcn::VcnManager_VcnStatusCallback arg0) const
	{
		callMethod<void>(
			"unregisterVcnStatusCallback",
			"(Landroid/net/vcn/VcnManager$VcnStatusCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
