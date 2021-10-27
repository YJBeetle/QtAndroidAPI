#include "../../NetworkSpecifier.hpp"
#include "./DiscoverySessionCallback.hpp"
#include "./PublishConfig.hpp"
#include "./SubscribeConfig.hpp"
#include "./WifiAwareManager.hpp"
#include "../../../os/Binder.hpp"
#include "../../../os/Handler.hpp"
#include "./WifiAwareSession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	WifiAwareSession::WifiAwareSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiAwareSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject WifiAwareSession::createNetworkSpecifierOpen(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierOpen",
			"(I[B)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiAwareSession::createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(I[BLjava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject WifiAwareSession::createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(I[BLjava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void WifiAwareSession::publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Landroid/net/wifi/aware/PublishConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiAwareSession::subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::net::wifi::aware

