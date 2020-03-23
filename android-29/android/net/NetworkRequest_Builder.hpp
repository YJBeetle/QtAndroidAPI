#pragma once

#ifndef ANDROID_NET_NETWORKREQUEST_BUILDER
#define ANDROID_NET_NETWORKREQUEST_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class NetworkRequest;
}
namespace __jni_impl::android::net
{
	class NetworkSpecifier;
}

namespace __jni_impl::android::net
{
	class NetworkRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addTransportType(jint arg0);
		QAndroidJniObject removeTransportType(jint arg0);
		QAndroidJniObject setNetworkSpecifier(jstring arg0);
		QAndroidJniObject setNetworkSpecifier(__jni_impl::android::net::NetworkSpecifier arg0);
		QAndroidJniObject addCapability(jint arg0);
		QAndroidJniObject removeCapability(jint arg0);
	};
} // namespace __jni_impl::android::net

#include "NetworkRequest.hpp"
#include "NetworkSpecifier.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void NetworkRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkRequest$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject NetworkRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/NetworkRequest;");
	}
	QAndroidJniObject NetworkRequest_Builder::addTransportType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0);
	}
	QAndroidJniObject NetworkRequest_Builder::removeTransportType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0);
	}
	QAndroidJniObject NetworkRequest_Builder::setNetworkSpecifier(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkSpecifier",
			"(Ljava/lang/String;)Landroid/net/NetworkRequest$Builder;",
			arg0);
	}
	QAndroidJniObject NetworkRequest_Builder::setNetworkSpecifier(__jni_impl::android::net::NetworkSpecifier arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkSpecifier",
			"(Landroid/net/NetworkSpecifier;)Landroid/net/NetworkRequest$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NetworkRequest_Builder::addCapability(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0);
	}
	QAndroidJniObject NetworkRequest_Builder::removeCapability(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkRequest_Builder : public __jni_impl::android::net::NetworkRequest_Builder
	{
	public:
		NetworkRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		NetworkRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORKREQUEST_BUILDER

