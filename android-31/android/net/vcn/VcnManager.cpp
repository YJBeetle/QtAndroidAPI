#include "./VcnConfig.hpp"
#include "./VcnManager_VcnStatusCallback.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./VcnManager.hpp"

namespace android::net::vcn
{
	// Fields
	jint VcnManager::VCN_ERROR_CODE_CONFIG_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_CONFIG_ERROR"
		);
	}
	jint VcnManager::VCN_ERROR_CODE_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_INTERNAL_ERROR"
		);
	}
	jint VcnManager::VCN_ERROR_CODE_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_ERROR_CODE_NETWORK_ERROR"
		);
	}
	jint VcnManager::VCN_STATUS_CODE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_ACTIVE"
		);
	}
	jint VcnManager::VCN_STATUS_CODE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_INACTIVE"
		);
	}
	jint VcnManager::VCN_STATUS_CODE_NOT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_NOT_CONFIGURED"
		);
	}
	jint VcnManager::VCN_STATUS_CODE_SAFE_MODE()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnManager",
			"VCN_STATUS_CODE_SAFE_MODE"
		);
	}
	
	// QAndroidJniObject forward
	VcnManager::VcnManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VcnManager::clearVcnConfig(android::os::ParcelUuid arg0) const
	{
		callMethod<void>(
			"clearVcnConfig",
			"(Landroid/os/ParcelUuid;)V",
			arg0.object()
		);
	}
	JObject VcnManager::getConfiguredSubscriptionGroups() const
	{
		return callObjectMethod(
			"getConfiguredSubscriptionGroups",
			"()Ljava/util/List;"
		);
	}
	void VcnManager::registerVcnStatusCallback(android::os::ParcelUuid arg0, JObject arg1, android::net::vcn::VcnManager_VcnStatusCallback arg2) const
	{
		callMethod<void>(
			"registerVcnStatusCallback",
			"(Landroid/os/ParcelUuid;Ljava/util/concurrent/Executor;Landroid/net/vcn/VcnManager$VcnStatusCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void VcnManager::setVcnConfig(android::os::ParcelUuid arg0, android::net::vcn::VcnConfig arg1) const
	{
		callMethod<void>(
			"setVcnConfig",
			"(Landroid/os/ParcelUuid;Landroid/net/vcn/VcnConfig;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VcnManager::unregisterVcnStatusCallback(android::net::vcn::VcnManager_VcnStatusCallback arg0) const
	{
		callMethod<void>(
			"unregisterVcnStatusCallback",
			"(Landroid/net/vcn/VcnManager$VcnStatusCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net::vcn

