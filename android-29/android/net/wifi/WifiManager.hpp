#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class DhcpInfo;
}
namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration;
}
namespace __jni_impl::android::net::wifi
{
	class WifiInfo;
}
namespace __jni_impl::android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback;
}
namespace __jni_impl::android::net::wifi
{
	class WifiManager_MulticastLock;
}
namespace __jni_impl::android::net::wifi
{
	class WifiManager_WifiLock;
}
namespace __jni_impl::android::net::wifi
{
	class WifiManager_WpsCallback;
}
namespace __jni_impl::android::net::wifi
{
	class WpsInfo;
}
namespace __jni_impl::android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net::wifi
{
	class WifiManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_PICK_WIFI_NETWORK();
		static jstring ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE();
		static jstring ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION();
		static jint ERROR_AUTHENTICATING();
		static jstring EXTRA_BSSID();
		static jstring EXTRA_NETWORK_INFO();
		static jstring EXTRA_NETWORK_SUGGESTION();
		static jstring EXTRA_NEW_RSSI();
		static jstring EXTRA_NEW_STATE();
		static jstring EXTRA_PREVIOUS_WIFI_STATE();
		static jstring EXTRA_RESULTS_UPDATED();
		static jstring EXTRA_SUPPLICANT_CONNECTED();
		static jstring EXTRA_SUPPLICANT_ERROR();
		static jstring EXTRA_WIFI_INFO();
		static jstring EXTRA_WIFI_STATE();
		static jstring NETWORK_IDS_CHANGED_ACTION();
		static jstring NETWORK_STATE_CHANGED_ACTION();
		static jstring RSSI_CHANGED_ACTION();
		static jstring SCAN_RESULTS_AVAILABLE_ACTION();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID();
		static jint STATUS_NETWORK_SUGGESTIONS_SUCCESS();
		static jstring SUPPLICANT_CONNECTION_CHANGE_ACTION();
		static jstring SUPPLICANT_STATE_CHANGED_ACTION();
		static jint WIFI_MODE_FULL();
		static jint WIFI_MODE_FULL_HIGH_PERF();
		static jint WIFI_MODE_FULL_LOW_LATENCY();
		static jint WIFI_MODE_SCAN_ONLY();
		static jstring WIFI_STATE_CHANGED_ACTION();
		static jint WIFI_STATE_DISABLED();
		static jint WIFI_STATE_DISABLING();
		static jint WIFI_STATE_ENABLED();
		static jint WIFI_STATE_ENABLING();
		static jint WIFI_STATE_UNKNOWN();
		static jint WPS_AUTH_FAILURE();
		static jint WPS_OVERLAP_ERROR();
		static jint WPS_TIMED_OUT();
		static jint WPS_TKIP_ONLY_PROHIBITED();
		static jint WPS_WEP_PROHIBITED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint calculateSignalLevel(jint arg0, jint arg1);
		static jint compareSignalLevel(jint arg0, jint arg1);
		jint addNetwork(__jni_impl::android::net::wifi::WifiConfiguration arg0);
		jint addNetworkSuggestions(__jni_impl::__JniBaseClass arg0);
		void addOrUpdatePasspointConfiguration(__jni_impl::android::net::wifi::hotspot2::PasspointConfiguration arg0);
		void cancelWps(__jni_impl::android::net::wifi::WifiManager_WpsCallback arg0);
		QAndroidJniObject createMulticastLock(jstring arg0);
		QAndroidJniObject createMulticastLock(const QString &arg0);
		QAndroidJniObject createWifiLock(jstring arg0);
		QAndroidJniObject createWifiLock(const QString &arg0);
		QAndroidJniObject createWifiLock(jint arg0, jstring arg1);
		QAndroidJniObject createWifiLock(jint arg0, const QString &arg1);
		jboolean disableNetwork(jint arg0);
		jboolean disconnect();
		jboolean enableNetwork(jint arg0, jboolean arg1);
		QAndroidJniObject getConfiguredNetworks();
		QAndroidJniObject getConnectionInfo();
		QAndroidJniObject getDhcpInfo();
		jint getMaxNumberOfNetworkSuggestionsPerApp();
		QAndroidJniObject getPasspointConfigurations();
		QAndroidJniObject getScanResults();
		jint getWifiState();
		jboolean is5GHzBandSupported();
		jboolean isDeviceToApRttSupported();
		jboolean isEasyConnectSupported();
		jboolean isEnhancedOpenSupported();
		jboolean isEnhancedPowerReportingSupported();
		jboolean isP2pSupported();
		jboolean isPreferredNetworkOffloadSupported();
		jboolean isScanAlwaysAvailable();
		jboolean isTdlsSupported();
		jboolean isWifiEnabled();
		jboolean isWpa3SaeSupported();
		jboolean isWpa3SuiteBSupported();
		jboolean pingSupplicant();
		jboolean reassociate();
		jboolean reconnect();
		jboolean removeNetwork(jint arg0);
		jint removeNetworkSuggestions(__jni_impl::__JniBaseClass arg0);
		void removePasspointConfiguration(jstring arg0);
		void removePasspointConfiguration(const QString &arg0);
		jboolean saveConfiguration();
		void setTdlsEnabled(__jni_impl::java::net::InetAddress arg0, jboolean arg1);
		void setTdlsEnabledWithMacAddress(jstring arg0, jboolean arg1);
		void setTdlsEnabledWithMacAddress(const QString &arg0, jboolean arg1);
		jboolean setWifiEnabled(jboolean arg0);
		void startLocalOnlyHotspot(__jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, __jni_impl::android::os::Handler arg1);
		jboolean startScan();
		void startWps(__jni_impl::android::net::wifi::WpsInfo arg0, __jni_impl::android::net::wifi::WifiManager_WpsCallback arg1);
		jint updateNetwork(__jni_impl::android::net::wifi::WifiConfiguration arg0);
	};
} // namespace __jni_impl::android::net::wifi

#include "../DhcpInfo.hpp"
#include "WifiConfiguration.hpp"
#include "WifiInfo.hpp"
#include "WifiManager_LocalOnlyHotspotCallback.hpp"
#include "WifiManager_MulticastLock.hpp"
#include "WifiManager_WifiLock.hpp"
#include "WifiManager_WpsCallback.hpp"
#include "WpsInfo.hpp"
#include "hotspot2/PasspointConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	jstring WifiManager::ACTION_PICK_WIFI_NETWORK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_PICK_WIFI_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::ERROR_AUTHENTICATING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"ERROR_AUTHENTICATING"
		);
	}
	jstring WifiManager::EXTRA_BSSID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NETWORK_SUGGESTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_SUGGESTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NEW_RSSI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_RSSI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NEW_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_PREVIOUS_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_PREVIOUS_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_RESULTS_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_RESULTS_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_SUPPLICANT_CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_SUPPLICANT_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_WIFI_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::NETWORK_IDS_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_IDS_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::NETWORK_STATE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::RSSI_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"RSSI_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::SCAN_RESULTS_AVAILABLE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SCAN_RESULTS_AVAILABLE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_SUCCESS"
		);
	}
	jstring WifiManager::SUPPLICANT_CONNECTION_CHANGE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_CONNECTION_CHANGE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::SUPPLICANT_STATE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::WIFI_MODE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL"
		);
	}
	jint WifiManager::WIFI_MODE_FULL_HIGH_PERF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL_HIGH_PERF"
		);
	}
	jint WifiManager::WIFI_MODE_FULL_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL_LOW_LATENCY"
		);
	}
	jint WifiManager::WIFI_MODE_SCAN_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_SCAN_ONLY"
		);
	}
	jstring WifiManager::WIFI_STATE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::WIFI_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLED"
		);
	}
	jint WifiManager::WIFI_STATE_DISABLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLING"
		);
	}
	jint WifiManager::WIFI_STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLED"
		);
	}
	jint WifiManager::WIFI_STATE_ENABLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLING"
		);
	}
	jint WifiManager::WIFI_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_UNKNOWN"
		);
	}
	jint WifiManager::WPS_AUTH_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_AUTH_FAILURE"
		);
	}
	jint WifiManager::WPS_OVERLAP_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_OVERLAP_ERROR"
		);
	}
	jint WifiManager::WPS_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TIMED_OUT"
		);
	}
	jint WifiManager::WPS_TKIP_ONLY_PROHIBITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TKIP_ONLY_PROHIBITED"
		);
	}
	jint WifiManager::WPS_WEP_PROHIBITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_WEP_PROHIBITED"
		);
	}
	
	// Constructors
	void WifiManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager",
			"(V)V");
	}
	
	// Methods
	jint WifiManager::calculateSignalLevel(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"calculateSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint WifiManager::compareSignalLevel(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"compareSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint WifiManager::addNetwork(__jni_impl::android::net::wifi::WifiConfiguration arg0)
	{
		return __thiz.callMethod<jint>(
			"addNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.__jniObject().object()
		);
	}
	jint WifiManager::addNetworkSuggestions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"addNetworkSuggestions",
			"(Ljava/util/List;)I",
			arg0.__jniObject().object()
		);
	}
	void WifiManager::addOrUpdatePasspointConfiguration(__jni_impl::android::net::wifi::hotspot2::PasspointConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"addOrUpdatePasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	void WifiManager::cancelWps(__jni_impl::android::net::wifi::WifiManager_WpsCallback arg0)
	{
		__thiz.callMethod<void>(
			"cancelWps",
			"(Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiManager::createMulticastLock(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createMulticastLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;",
			arg0
		);
	}
	QAndroidJniObject WifiManager::createMulticastLock(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createMulticastLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiManager::createWifiLock(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createWifiLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0
		);
	}
	QAndroidJniObject WifiManager::createWifiLock(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createWifiLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiManager::createWifiLock(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"createWifiLock",
			"(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiManager::createWifiLock(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"createWifiLock",
			"(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean WifiManager::disableNetwork(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"disableNetwork",
			"(I)Z",
			arg0
		);
	}
	jboolean WifiManager::disconnect()
	{
		return __thiz.callMethod<jboolean>(
			"disconnect",
			"()Z"
		);
	}
	jboolean WifiManager::enableNetwork(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"enableNetwork",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiManager::getConfiguredNetworks()
	{
		return __thiz.callObjectMethod(
			"getConfiguredNetworks",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject WifiManager::getConnectionInfo()
	{
		return __thiz.callObjectMethod(
			"getConnectionInfo",
			"()Landroid/net/wifi/WifiInfo;"
		);
	}
	QAndroidJniObject WifiManager::getDhcpInfo()
	{
		return __thiz.callObjectMethod(
			"getDhcpInfo",
			"()Landroid/net/DhcpInfo;"
		);
	}
	jint WifiManager::getMaxNumberOfNetworkSuggestionsPerApp()
	{
		return __thiz.callMethod<jint>(
			"getMaxNumberOfNetworkSuggestionsPerApp",
			"()I"
		);
	}
	QAndroidJniObject WifiManager::getPasspointConfigurations()
	{
		return __thiz.callObjectMethod(
			"getPasspointConfigurations",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject WifiManager::getScanResults()
	{
		return __thiz.callObjectMethod(
			"getScanResults",
			"()Ljava/util/List;"
		);
	}
	jint WifiManager::getWifiState()
	{
		return __thiz.callMethod<jint>(
			"getWifiState",
			"()I"
		);
	}
	jboolean WifiManager::is5GHzBandSupported()
	{
		return __thiz.callMethod<jboolean>(
			"is5GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isDeviceToApRttSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceToApRttSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEasyConnectSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isEasyConnectSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEnhancedOpenSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isEnhancedOpenSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEnhancedPowerReportingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isEnhancedPowerReportingSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isP2pSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isP2pSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isPreferredNetworkOffloadSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isPreferredNetworkOffloadSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isScanAlwaysAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isScanAlwaysAvailable",
			"()Z"
		);
	}
	jboolean WifiManager::isTdlsSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isTdlsSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWifiEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isWifiEnabled",
			"()Z"
		);
	}
	jboolean WifiManager::isWpa3SaeSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWpa3SaeSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWpa3SuiteBSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWpa3SuiteBSupported",
			"()Z"
		);
	}
	jboolean WifiManager::pingSupplicant()
	{
		return __thiz.callMethod<jboolean>(
			"pingSupplicant",
			"()Z"
		);
	}
	jboolean WifiManager::reassociate()
	{
		return __thiz.callMethod<jboolean>(
			"reassociate",
			"()Z"
		);
	}
	jboolean WifiManager::reconnect()
	{
		return __thiz.callMethod<jboolean>(
			"reconnect",
			"()Z"
		);
	}
	jboolean WifiManager::removeNetwork(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeNetwork",
			"(I)Z",
			arg0
		);
	}
	jint WifiManager::removeNetworkSuggestions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"removeNetworkSuggestions",
			"(Ljava/util/List;)I",
			arg0.__jniObject().object()
		);
	}
	void WifiManager::removePasspointConfiguration(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removePasspointConfiguration",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiManager::removePasspointConfiguration(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removePasspointConfiguration",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean WifiManager::saveConfiguration()
	{
		return __thiz.callMethod<jboolean>(
			"saveConfiguration",
			"()Z"
		);
	}
	void WifiManager::setTdlsEnabled(__jni_impl::java::net::InetAddress arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTdlsEnabled",
			"(Ljava/net/InetAddress;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WifiManager::setTdlsEnabledWithMacAddress(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTdlsEnabledWithMacAddress",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void WifiManager::setTdlsEnabledWithMacAddress(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTdlsEnabledWithMacAddress",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean WifiManager::setWifiEnabled(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setWifiEnabled",
			"(Z)Z",
			arg0
		);
	}
	void WifiManager::startLocalOnlyHotspot(__jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"startLocalOnlyHotspot",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WifiManager::startScan()
	{
		return __thiz.callMethod<jboolean>(
			"startScan",
			"()Z"
		);
	}
	void WifiManager::startWps(__jni_impl::android::net::wifi::WpsInfo arg0, __jni_impl::android::net::wifi::WifiManager_WpsCallback arg1)
	{
		__thiz.callMethod<void>(
			"startWps",
			"(Landroid/net/wifi/WpsInfo;Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint WifiManager::updateNetwork(__jni_impl::android::net::wifi::WifiConfiguration arg0)
	{
		return __thiz.callMethod<jint>(
			"updateNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager : public __jni_impl::android::net::wifi::WifiManager
	{
	public:
		WifiManager(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

