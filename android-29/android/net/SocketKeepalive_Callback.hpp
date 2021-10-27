#pragma once

#ifndef ANDROID_NET_SOCKETKEEPALIVE_CALLBACK
#define ANDROID_NET_SOCKETKEEPALIVE_CALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class SocketKeepalive_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDataReceived();
		void onError(jint arg0);
		void onStarted();
		void onStopped();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void SocketKeepalive_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.SocketKeepalive$Callback",
			"()V"
		);
	}
	
	// Methods
	void SocketKeepalive_Callback::onDataReceived()
	{
		__thiz.callMethod<void>(
			"onDataReceived",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onError(jint arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive_Callback::onStarted()
	{
		__thiz.callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class SocketKeepalive_Callback : public __jni_impl::android::net::SocketKeepalive_Callback
	{
	public:
		SocketKeepalive_Callback(QAndroidJniObject obj) { __thiz = obj; }
		SocketKeepalive_Callback()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_SOCKETKEEPALIVE_CALLBACK

