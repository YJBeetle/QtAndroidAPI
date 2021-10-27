#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class DiscoverySession;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}
namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier;
}

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::net::wifi::aware::DiscoverySession arg0, __jni_impl::android::net::wifi::aware::PeerHandle arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setPskPassphrase(jstring arg0);
		QAndroidJniObject setPskPassphrase(const QString &arg0);
		QAndroidJniObject setTransportProtocol(jint arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "./DiscoverySession.hpp"
#include "./PeerHandle.hpp"
#include "./WifiAwareNetworkSpecifier.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void WifiAwareNetworkSpecifier_Builder::__constructor(__jni_impl::android::net::wifi::aware::DiscoverySession arg0, __jni_impl::android::net::wifi::aware::PeerHandle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier$Builder",
			"(Landroid/net/wifi/aware/DiscoverySession;Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WifiAwareNetworkSpecifier_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/WifiAwareNetworkSpecifier;"
		);
	}
	QAndroidJniObject WifiAwareNetworkSpecifier_Builder::setPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPort",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiAwareNetworkSpecifier_Builder::setPskPassphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPskPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiAwareNetworkSpecifier_Builder::setPskPassphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPskPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiAwareNetworkSpecifier_Builder::setTransportProtocol(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransportProtocol",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier_Builder : public __jni_impl::android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder
	{
	public:
		WifiAwareNetworkSpecifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WifiAwareNetworkSpecifier_Builder(__jni_impl::android::net::wifi::aware::DiscoverySession arg0, __jni_impl::android::net::wifi::aware::PeerHandle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net::wifi::aware

