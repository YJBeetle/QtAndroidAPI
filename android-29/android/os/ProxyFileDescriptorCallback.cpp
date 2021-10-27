#include "./ProxyFileDescriptorCallback.hpp"

namespace android::os
{
	// Fields
	
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProxyFileDescriptorCallback::ProxyFileDescriptorCallback()
	{
		__thiz = QAndroidJniObject(
			"android.os.ProxyFileDescriptorCallback",
			"()V"
		);
	}
	
	// Methods
	void ProxyFileDescriptorCallback::onFsync()
	{
		__thiz.callMethod<void>(
			"onFsync",
			"()V"
		);
	}
	jlong ProxyFileDescriptorCallback::onGetSize()
	{
		return __thiz.callMethod<jlong>(
			"onGetSize",
			"()J"
		);
	}
	jint ProxyFileDescriptorCallback::onRead(jlong arg0, jint arg1, jbyteArray arg2)
	{
		return __thiz.callMethod<jint>(
			"onRead",
			"(JI[B)I",
			arg0,
			arg1,
			arg2
		);
	}
	void ProxyFileDescriptorCallback::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jint ProxyFileDescriptorCallback::onWrite(jlong arg0, jint arg1, jbyteArray arg2)
	{
		return __thiz.callMethod<jint>(
			"onWrite",
			"(JI[B)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::os

