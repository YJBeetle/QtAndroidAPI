#pragma once

#ifndef ANDROID_OS_PROXYFILEDESCRIPTORCALLBACK
#define ANDROID_OS_PROXYFILEDESCRIPTORCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class ProxyFileDescriptorCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint onWrite(jlong arg0, jint arg1, jbyteArray arg2);
		jlong onGetSize();
		jint onRead(jlong arg0, jint arg1, jbyteArray arg2);
		void onFsync();
		void onRelease();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ProxyFileDescriptorCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.ProxyFileDescriptorCallback",
			"()V");
	}
	
	// Methods
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
	void ProxyFileDescriptorCallback::onFsync()
	{
		__thiz.callMethod<void>(
			"onFsync",
			"()V"
		);
	}
	void ProxyFileDescriptorCallback::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ProxyFileDescriptorCallback : public __jni_impl::android::os::ProxyFileDescriptorCallback
	{
	public:
		ProxyFileDescriptorCallback(QAndroidJniObject obj) { __thiz = obj; }
		ProxyFileDescriptorCallback()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PROXYFILEDESCRIPTORCALLBACK

