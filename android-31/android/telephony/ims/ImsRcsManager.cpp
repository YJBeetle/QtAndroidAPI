#include "./RcsUceAdapter.hpp"
#include "./RegistrationManager_RegistrationCallback.hpp"
#include "./ImsRcsManager.hpp"

namespace android::telephony::ims
{
	// Fields
	jstring ImsRcsManager::ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRcsManager",
			"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ImsRcsManager::ImsRcsManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void ImsRcsManager::getRegistrationState(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"getRegistrationState",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ImsRcsManager::getRegistrationTransportType(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"getRegistrationTransportType",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telephony::ims::RcsUceAdapter ImsRcsManager::getUceAdapter()
	{
		return callObjectMethod(
			"getUceAdapter",
			"()Landroid/telephony/ims/RcsUceAdapter;"
		);
	}
	void ImsRcsManager::registerImsRegistrationCallback(__JniBaseClass arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1)
	{
		callMethod<void>(
			"registerImsRegistrationCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ImsRcsManager::unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0)
	{
		callMethod<void>(
			"unregisterImsRegistrationCallback",
			"(Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

