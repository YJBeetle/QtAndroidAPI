#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_PEERHANDLE
#define ANDROID_NET_WIFI_AWARE_PEERHANDLE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::net::wifi::aware


namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void PeerHandle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.PeerHandle",
			"(V)V");
	}
	
	// Methods
	jboolean PeerHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint PeerHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class PeerHandle : public __jni_impl::android::net::wifi::aware::PeerHandle
	{
	public:
		PeerHandle(QAndroidJniObject obj) { __thiz = obj; }
		PeerHandle()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_PEERHANDLE

