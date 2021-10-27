#include "./DiscoverySession.hpp"
#include "./PeerHandle.hpp"
#include "./WifiAwareNetworkSpecifier.hpp"
#include "./WifiAwareNetworkSpecifier_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	WifiAwareNetworkSpecifier_Builder::WifiAwareNetworkSpecifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiAwareNetworkSpecifier_Builder::WifiAwareNetworkSpecifier_Builder(android::net::wifi::aware::DiscoverySession &arg0, android::net::wifi::aware::PeerHandle &arg1)
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
} // namespace android::net::wifi::aware

