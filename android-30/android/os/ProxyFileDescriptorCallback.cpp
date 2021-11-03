#include "../../JByteArray.hpp"
#include "./ProxyFileDescriptorCallback.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback()
		: JObject(
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
	jint ProxyFileDescriptorCallback::onRead(jlong arg0, jint arg1, JByteArray arg2)
	{
		return callMethod<jint>(
			"onRead",
			"(JI[B)I",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void ProxyFileDescriptorCallback::onRelease()
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jint ProxyFileDescriptorCallback::onWrite(jlong arg0, jint arg1, JByteArray arg2)
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

