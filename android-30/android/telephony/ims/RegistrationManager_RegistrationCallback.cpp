#include "./ImsReasonInfo.hpp"
#include "./RegistrationManager_RegistrationCallback.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// QJniObject forward
	RegistrationManager_RegistrationCallback::RegistrationManager_RegistrationCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RegistrationManager_RegistrationCallback::RegistrationManager_RegistrationCallback()
		: __JniBaseClass(
			"android.telephony.ims.RegistrationManager$RegistrationCallback",
			"()V"
		) {}
	
	// Methods
	void RegistrationManager_RegistrationCallback::onRegistered(jint arg0)
	{
		callMethod<void>(
			"onRegistered",
			"(I)V",
			arg0
		);
	}
	void RegistrationManager_RegistrationCallback::onRegistering(jint arg0)
	{
		callMethod<void>(
			"onRegistering",
			"(I)V",
			arg0
		);
	}
	void RegistrationManager_RegistrationCallback::onTechnologyChangeFailed(jint arg0, android::telephony::ims::ImsReasonInfo arg1)
	{
		callMethod<void>(
			"onTechnologyChangeFailed",
			"(ILandroid/telephony/ims/ImsReasonInfo;)V",
			arg0,
			arg1.object()
		);
	}
	void RegistrationManager_RegistrationCallback::onUnregistered(android::telephony::ims::ImsReasonInfo arg0)
	{
		callMethod<void>(
			"onUnregistered",
			"(Landroid/telephony/ims/ImsReasonInfo;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

