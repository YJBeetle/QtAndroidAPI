#pragma once

#ifndef ANDROID_NET_CONNECTIVITYMANAGER
#define ANDROID_NET_CONNECTIVITYMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class NetworkInfo;
}
namespace __jni_impl::android::net
{
	class Network;
}
namespace __jni_impl::android::net
{
	class LinkProperties;
}
namespace __jni_impl::android::net
{
	class NetworkCapabilities;
}
namespace __jni_impl::android::net
{
	class SocketKeepalive;
}
namespace __jni_impl::android::net
{
	class IpSecManager_UdpEncapsulationSocket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::net
{
	class SocketKeepalive_Callback;
}
namespace __jni_impl::android::net
{
	class ProxyInfo;
}
namespace __jni_impl::android::net
{
	class NetworkRequest;
}
namespace __jni_impl::android::net
{
	class ConnectivityManager_NetworkCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::java::net
{
	class InetSocketAddress;
}

namespace __jni_impl::android::net
{
	class ConnectivityManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_BACKGROUND_DATA_SETTING_CHANGED();
		static jstring ACTION_CAPTIVE_PORTAL_SIGN_IN();
		static jstring ACTION_RESTRICT_BACKGROUND_CHANGED();
		static jstring CONNECTIVITY_ACTION();
		static jint DEFAULT_NETWORK_PREFERENCE();
		static jstring EXTRA_CAPTIVE_PORTAL();
		static jstring EXTRA_CAPTIVE_PORTAL_URL();
		static jstring EXTRA_EXTRA_INFO();
		static jstring EXTRA_IS_FAILOVER();
		static jstring EXTRA_NETWORK();
		static jstring EXTRA_NETWORK_INFO();
		static jstring EXTRA_NETWORK_REQUEST();
		static jstring EXTRA_NETWORK_TYPE();
		static jstring EXTRA_NO_CONNECTIVITY();
		static jstring EXTRA_OTHER_NETWORK_INFO();
		static jstring EXTRA_REASON();
		static jint MULTIPATH_PREFERENCE_HANDOVER();
		static jint MULTIPATH_PREFERENCE_PERFORMANCE();
		static jint MULTIPATH_PREFERENCE_RELIABILITY();
		static jint RESTRICT_BACKGROUND_STATUS_DISABLED();
		static jint RESTRICT_BACKGROUND_STATUS_ENABLED();
		static jint RESTRICT_BACKGROUND_STATUS_WHITELISTED();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_DUMMY();
		static jint TYPE_ETHERNET();
		static jint TYPE_MOBILE();
		static jint TYPE_MOBILE_DUN();
		static jint TYPE_MOBILE_HIPRI();
		static jint TYPE_MOBILE_MMS();
		static jint TYPE_MOBILE_SUPL();
		static jint TYPE_VPN();
		static jint TYPE_WIFI();
		static jint TYPE_WIMAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isNetworkTypeValid(jint arg0);
		void setNetworkPreference(jint arg0);
		jint getNetworkPreference();
		QAndroidJniObject getActiveNetworkInfo();
		QAndroidJniObject getActiveNetwork();
		QAndroidJniObject getNetworkInfo(__jni_impl::android::net::Network arg0);
		QAndroidJniObject getNetworkInfo(jint arg0);
		jarray getAllNetworkInfo();
		jarray getAllNetworks();
		QAndroidJniObject getLinkProperties(__jni_impl::android::net::Network arg0);
		QAndroidJniObject getNetworkCapabilities(__jni_impl::android::net::Network arg0);
		QAndroidJniObject createSocketKeepalive(__jni_impl::android::net::Network arg0, __jni_impl::android::net::IpSecManager_UdpEncapsulationSocket arg1, __jni_impl::java::net::InetAddress arg2, __jni_impl::java::net::InetAddress arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::net::SocketKeepalive_Callback arg5);
		jboolean getBackgroundDataSetting();
		void addDefaultNetworkActiveListener(__jni_impl::__JniBaseClass arg0);
		void removeDefaultNetworkActiveListener(__jni_impl::__JniBaseClass arg0);
		jboolean isDefaultNetworkActive();
		void reportBadNetwork(__jni_impl::android::net::Network arg0);
		void reportNetworkConnectivity(__jni_impl::android::net::Network arg0, jboolean arg1);
		QAndroidJniObject getDefaultProxy();
		jboolean isActiveNetworkMetered();
		void requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2, jint arg3);
		void requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, jint arg2);
		void requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::app::PendingIntent arg1);
		void requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2);
		void requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1);
		void releaseNetworkRequest(__jni_impl::android::app::PendingIntent arg0);
		void registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::app::PendingIntent arg1);
		void registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2);
		void registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1);
		void registerDefaultNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0, __jni_impl::android::os::Handler arg1);
		void registerDefaultNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0);
		jboolean requestBandwidthUpdate(__jni_impl::android::net::Network arg0);
		void unregisterNetworkCallback(__jni_impl::android::app::PendingIntent arg0);
		void unregisterNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0);
		jint getMultipathPreference(__jni_impl::android::net::Network arg0);
		jboolean bindProcessToNetwork(__jni_impl::android::net::Network arg0);
		static jboolean setProcessDefaultNetwork(__jni_impl::android::net::Network arg0);
		QAndroidJniObject getBoundNetworkForProcess();
		static QAndroidJniObject getProcessDefaultNetwork();
		jint getRestrictBackgroundStatus();
		jbyteArray getNetworkWatchlistConfigHash();
		jint getConnectionOwnerUid(jint arg0, __jni_impl::java::net::InetSocketAddress arg1, __jni_impl::java::net::InetSocketAddress arg2);
	};
} // namespace __jni_impl::android::net

#include "NetworkInfo.hpp"
#include "Network.hpp"
#include "LinkProperties.hpp"
#include "NetworkCapabilities.hpp"
#include "SocketKeepalive.hpp"
#include "IpSecManager_UdpEncapsulationSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "SocketKeepalive_Callback.hpp"
#include "ProxyInfo.hpp"
#include "NetworkRequest.hpp"
#include "ConnectivityManager_NetworkCallback.hpp"
#include "../os/Handler.hpp"
#include "../app/PendingIntent.hpp"
#include "../../java/net/InetSocketAddress.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jstring ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_BACKGROUND_DATA_SETTING_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::ACTION_CAPTIVE_PORTAL_SIGN_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_CAPTIVE_PORTAL_SIGN_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::ACTION_RESTRICT_BACKGROUND_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_RESTRICT_BACKGROUND_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::CONNECTIVITY_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"CONNECTIVITY_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConnectivityManager::DEFAULT_NETWORK_PREFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"DEFAULT_NETWORK_PREFERENCE"
		);
	}
	jstring ConnectivityManager::EXTRA_CAPTIVE_PORTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_CAPTIVE_PORTAL_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_EXTRA_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_EXTRA_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_IS_FAILOVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_IS_FAILOVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NO_CONNECTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NO_CONNECTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_OTHER_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_OTHER_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_REASON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_HANDOVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_HANDOVER"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_PERFORMANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_PERFORMANCE"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_RELIABILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_RELIABILITY"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_DISABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_ENABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_WHITELISTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_WHITELISTED"
		);
	}
	jint ConnectivityManager::TYPE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_BLUETOOTH"
		);
	}
	jint ConnectivityManager::TYPE_DUMMY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_DUMMY"
		);
	}
	jint ConnectivityManager::TYPE_ETHERNET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_ETHERNET"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_DUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_DUN"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_HIPRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_HIPRI"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_MMS"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_SUPL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_SUPL"
		);
	}
	jint ConnectivityManager::TYPE_VPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_VPN"
		);
	}
	jint ConnectivityManager::TYPE_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIFI"
		);
	}
	jint ConnectivityManager::TYPE_WIMAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIMAX"
		);
	}
	
	// Constructors
	void ConnectivityManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ConnectivityManager",
			"(V)V");
	}
	
	// Methods
	jboolean ConnectivityManager::isNetworkTypeValid(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"isNetworkTypeValid",
			"(I)Z",
			arg0
		);
	}
	void ConnectivityManager::setNetworkPreference(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkPreference",
			"(I)V",
			arg0
		);
	}
	jint ConnectivityManager::getNetworkPreference()
	{
		return __thiz.callMethod<jint>(
			"getNetworkPreference",
			"()I"
		);
	}
	QAndroidJniObject ConnectivityManager::getActiveNetworkInfo()
	{
		return __thiz.callObjectMethod(
			"getActiveNetworkInfo",
			"()Landroid/net/NetworkInfo;"
		);
	}
	QAndroidJniObject ConnectivityManager::getActiveNetwork()
	{
		return __thiz.callObjectMethod(
			"getActiveNetwork",
			"()Landroid/net/Network;"
		);
	}
	QAndroidJniObject ConnectivityManager::getNetworkInfo(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callObjectMethod(
			"getNetworkInfo",
			"(Landroid/net/Network;)Landroid/net/NetworkInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectivityManager::getNetworkInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getNetworkInfo",
			"(I)Landroid/net/NetworkInfo;",
			arg0
		);
	}
	jarray ConnectivityManager::getAllNetworkInfo()
	{
		return __thiz.callObjectMethod(
			"getAllNetworkInfo",
			"()[Landroid/net/NetworkInfo;"
		).object<jarray>();
	}
	jarray ConnectivityManager::getAllNetworks()
	{
		return __thiz.callObjectMethod(
			"getAllNetworks",
			"()[Landroid/net/Network;"
		).object<jarray>();
	}
	QAndroidJniObject ConnectivityManager::getLinkProperties(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callObjectMethod(
			"getLinkProperties",
			"(Landroid/net/Network;)Landroid/net/LinkProperties;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectivityManager::getNetworkCapabilities(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callObjectMethod(
			"getNetworkCapabilities",
			"(Landroid/net/Network;)Landroid/net/NetworkCapabilities;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectivityManager::createSocketKeepalive(__jni_impl::android::net::Network arg0, __jni_impl::android::net::IpSecManager_UdpEncapsulationSocket arg1, __jni_impl::java::net::InetAddress arg2, __jni_impl::java::net::InetAddress arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::net::SocketKeepalive_Callback arg5)
	{
		return __thiz.callObjectMethod(
			"createSocketKeepalive",
			"(Landroid/net/Network;Landroid/net/IpSecManager$UdpEncapsulationSocket;Ljava/net/InetAddress;Ljava/net/InetAddress;Ljava/util/concurrent/Executor;Landroid/net/SocketKeepalive$Callback;)Landroid/net/SocketKeepalive;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	jboolean ConnectivityManager::getBackgroundDataSetting()
	{
		return __thiz.callMethod<jboolean>(
			"getBackgroundDataSetting",
			"()Z"
		);
	}
	void ConnectivityManager::addDefaultNetworkActiveListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager::removeDefaultNetworkActiveListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ConnectivityManager::isDefaultNetworkActive()
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultNetworkActive",
			"()Z"
		);
	}
	void ConnectivityManager::reportBadNetwork(__jni_impl::android::net::Network arg0)
	{
		__thiz.callMethod<void>(
			"reportBadNetwork",
			"(Landroid/net/Network;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager::reportNetworkConnectivity(__jni_impl::android::net::Network arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"reportNetworkConnectivity",
			"(Landroid/net/Network;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ConnectivityManager::getDefaultProxy()
	{
		return __thiz.callObjectMethod(
			"getDefaultProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	jboolean ConnectivityManager::isActiveNetworkMetered()
	{
		return __thiz.callMethod<jboolean>(
			"isActiveNetworkMetered",
			"()Z"
		);
	}
	void ConnectivityManager::requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void ConnectivityManager::requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ConnectivityManager::requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager::requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ConnectivityManager::requestNetwork(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1)
	{
		__thiz.callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager::releaseNetworkRequest(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"releaseNetworkRequest",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(__jni_impl::android::net::NetworkRequest arg0, __jni_impl::android::net::ConnectivityManager_NetworkCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ConnectivityManager::requestBandwidthUpdate(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestBandwidthUpdate",
			"(Landroid/net/Network;)Z",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(__jni_impl::android::net::ConnectivityManager_NetworkCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jint ConnectivityManager::getMultipathPreference(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callMethod<jint>(
			"getMultipathPreference",
			"(Landroid/net/Network;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ConnectivityManager::bindProcessToNetwork(__jni_impl::android::net::Network arg0)
	{
		return __thiz.callMethod<jboolean>(
			"bindProcessToNetwork",
			"(Landroid/net/Network;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ConnectivityManager::setProcessDefaultNetwork(__jni_impl::android::net::Network arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"setProcessDefaultNetwork",
			"(Landroid/net/Network;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectivityManager::getBoundNetworkForProcess()
	{
		return __thiz.callObjectMethod(
			"getBoundNetworkForProcess",
			"()Landroid/net/Network;"
		);
	}
	QAndroidJniObject ConnectivityManager::getProcessDefaultNetwork()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ConnectivityManager",
			"getProcessDefaultNetwork",
			"()Landroid/net/Network;"
		);
	}
	jint ConnectivityManager::getRestrictBackgroundStatus()
	{
		return __thiz.callMethod<jint>(
			"getRestrictBackgroundStatus",
			"()I"
		);
	}
	jbyteArray ConnectivityManager::getNetworkWatchlistConfigHash()
	{
		return __thiz.callObjectMethod(
			"getNetworkWatchlistConfigHash",
			"()[B"
		).object<jbyteArray>();
	}
	jint ConnectivityManager::getConnectionOwnerUid(jint arg0, __jni_impl::java::net::InetSocketAddress arg1, __jni_impl::java::net::InetSocketAddress arg2)
	{
		return __thiz.callMethod<jint>(
			"getConnectionOwnerUid",
			"(ILjava/net/InetSocketAddress;Ljava/net/InetSocketAddress;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class ConnectivityManager : public __jni_impl::android::net::ConnectivityManager
	{
	public:
		ConnectivityManager(QAndroidJniObject obj) { __thiz = obj; }
		ConnectivityManager()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_CONNECTIVITYMANAGER

