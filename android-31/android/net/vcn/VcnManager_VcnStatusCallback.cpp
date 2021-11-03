#include "./VcnManager_VcnStatusCallback.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QAndroidJniObject forward
	VcnManager_VcnStatusCallback::VcnManager_VcnStatusCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VcnManager_VcnStatusCallback::VcnManager_VcnStatusCallback()
		: JObject(
			"android.net.vcn.VcnManager$VcnStatusCallback",
			"()V"
		) {}
	
	// Methods
	void VcnManager_VcnStatusCallback::onGatewayConnectionError(jstring arg0, jint arg1, jthrowable arg2)
	{
		callMethod<void>(
			"onGatewayConnectionError",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void VcnManager_VcnStatusCallback::onStatusChanged(jint arg0)
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::vcn

