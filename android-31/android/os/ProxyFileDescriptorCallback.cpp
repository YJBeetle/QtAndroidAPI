#include "../../JByteArray.hpp"
#include "./ProxyFileDescriptorCallback.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback()
		: JObject(
			"android.os.ProxyFileDescriptorCallback",
			"()V"
		) {}
	
	// Methods
	void ProxyFileDescriptorCallback::onFsync() const
	{
		callMethod<void>(
			"onFsync",
			"()V"
		);
	}
	jlong ProxyFileDescriptorCallback::onGetSize() const
	{
		return callMethod<jlong>(
			"onGetSize",
			"()J"
		);
	}
	jint ProxyFileDescriptorCallback::onRead(jlong arg0, jint arg1, JByteArray arg2) const
	{
		return callMethod<jint>(
			"onRead",
			"(JI[B)I",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void ProxyFileDescriptorCallback::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jint ProxyFileDescriptorCallback::onWrite(jlong arg0, jint arg1, JByteArray arg2) const
	{
		return callMethod<jint>(
			"onWrite",
			"(JI[B)I",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::os

