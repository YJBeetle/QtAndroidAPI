#include "./ProxyFileDescriptorCallback.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback()
		: __JniBaseClass(
			"android.os.ProxyFileDescriptorCallback",
			"()V"
		) {}
	
	// Methods
	void ProxyFileDescriptorCallback::onFsync()
	{
		callMethod<void>(
			"onFsync",
			"()V"
		);
	}
	jlong ProxyFileDescriptorCallback::onGetSize()
	{
		return callMethod<jlong>(
			"onGetSize",
			"()J"
		);
	}
	jint ProxyFileDescriptorCallback::onRead(jlong arg0, jint arg1, jbyteArray arg2)
	{
		return callMethod<jint>(
			"onRead",
			"(JI[B)I",
			arg0,
			arg1,
			arg2
		);
	}
	void ProxyFileDescriptorCallback::onRelease()
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jint ProxyFileDescriptorCallback::onWrite(jlong arg0, jint arg1, jbyteArray arg2)
	{
		return callMethod<jint>(
			"onWrite",
			"(JI[B)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::os

