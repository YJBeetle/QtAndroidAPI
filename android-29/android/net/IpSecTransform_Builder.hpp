#pragma once

#ifndef ANDROID_NET_IPSECTRANSFORM_BUILDER
#define ANDROID_NET_IPSECTRANSFORM_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class IpSecAlgorithm;
}
namespace __jni_impl::android::net
{
	class IpSecManager_UdpEncapsulationSocket;
}
namespace __jni_impl::android::net
{
	class IpSecTransform;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::net
{
	class IpSecManager_SecurityParameterIndex;
}

namespace __jni_impl::android::net
{
	class IpSecTransform_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject setAuthentication(__jni_impl::android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setEncryption(__jni_impl::android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setAuthenticatedEncryption(__jni_impl::android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setIpv4Encapsulation(__jni_impl::android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1);
		QAndroidJniObject buildTransportModeTransform(__jni_impl::java::net::InetAddress arg0, __jni_impl::android::net::IpSecManager_SecurityParameterIndex arg1);
	};
} // namespace __jni_impl::android::net

#include "../content/Context.hpp"
#include "IpSecAlgorithm.hpp"
#include "IpSecManager_UdpEncapsulationSocket.hpp"
#include "IpSecTransform.hpp"
#include "../../java/net/InetAddress.hpp"
#include "IpSecManager_SecurityParameterIndex.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecTransform_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecTransform$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject IpSecTransform_Builder::setAuthentication(__jni_impl::android::net::IpSecAlgorithm arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthentication",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecTransform_Builder::setEncryption(__jni_impl::android::net::IpSecAlgorithm arg0)
	{
		return __thiz.callObjectMethod(
			"setEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecTransform_Builder::setAuthenticatedEncryption(__jni_impl::android::net::IpSecAlgorithm arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthenticatedEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecTransform_Builder::setIpv4Encapsulation(__jni_impl::android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setIpv4Encapsulation",
			"(Landroid/net/IpSecManager$UdpEncapsulationSocket;I)Landroid/net/IpSecTransform$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject IpSecTransform_Builder::buildTransportModeTransform(__jni_impl::java::net::InetAddress arg0, __jni_impl::android::net::IpSecManager_SecurityParameterIndex arg1)
	{
		return __thiz.callObjectMethod(
			"buildTransportModeTransform",
			"(Ljava/net/InetAddress;Landroid/net/IpSecManager$SecurityParameterIndex;)Landroid/net/IpSecTransform;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecTransform_Builder : public __jni_impl::android::net::IpSecTransform_Builder
	{
	public:
		IpSecTransform_Builder(QAndroidJniObject obj) { __thiz = obj; }
		IpSecTransform_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECTRANSFORM_BUILDER

