#pragma once

#ifndef ANDROID_NET_WIFI_WIFIINFO
#define ANDROID_NET_WIFI_WIFIINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class SupplicantState;
}
namespace __jni_impl::android::net
{
	class NetworkInfo_DetailedState;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
{
	class WifiInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FREQUENCY_UNITS();
		static jstring LINK_SPEED_UNITS();
		static jint LINK_SPEED_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getSSID();
		jstring getBSSID();
		jint getLinkSpeed();
		jint getTxLinkSpeedMbps();
		jint getRxLinkSpeedMbps();
		jint getFrequency();
		jstring getMacAddress();
		jstring getPasspointFqdn();
		jstring getPasspointProviderFriendlyName();
		jint getNetworkId();
		QAndroidJniObject getSupplicantState();
		jint getIpAddress();
		jboolean getHiddenSSID();
		static QAndroidJniObject getDetailedStateOf(__jni_impl::android::net::wifi::SupplicantState arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getRssi();
	};
} // namespace __jni_impl::android::net::wifi

#include "SupplicantState.hpp"
#include "../NetworkInfo_DetailedState.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	jstring WifiInfo::FREQUENCY_UNITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::LINK_SPEED_UNITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::LINK_SPEED_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNKNOWN"
		);
	}
	
	// Constructors
	void WifiInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiInfo",
			"(V)V");
	}
	
	// Methods
	jstring WifiInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::getSSID()
	{
		return __thiz.callObjectMethod(
			"getSSID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::getBSSID()
	{
		return __thiz.callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getLinkSpeed()
	{
		return __thiz.callMethod<jint>(
			"getLinkSpeed",
			"()I"
		);
	}
	jint WifiInfo::getTxLinkSpeedMbps()
	{
		return __thiz.callMethod<jint>(
			"getTxLinkSpeedMbps",
			"()I"
		);
	}
	jint WifiInfo::getRxLinkSpeedMbps()
	{
		return __thiz.callMethod<jint>(
			"getRxLinkSpeedMbps",
			"()I"
		);
	}
	jint WifiInfo::getFrequency()
	{
		return __thiz.callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	jstring WifiInfo::getMacAddress()
	{
		return __thiz.callObjectMethod(
			"getMacAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::getPasspointFqdn()
	{
		return __thiz.callObjectMethod(
			"getPasspointFqdn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::getPasspointProviderFriendlyName()
	{
		return __thiz.callObjectMethod(
			"getPasspointProviderFriendlyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	QAndroidJniObject WifiInfo::getSupplicantState()
	{
		return __thiz.callObjectMethod(
			"getSupplicantState",
			"()Landroid/net/wifi/SupplicantState;"
		);
	}
	jint WifiInfo::getIpAddress()
	{
		return __thiz.callMethod<jint>(
			"getIpAddress",
			"()I"
		);
	}
	jboolean WifiInfo::getHiddenSSID()
	{
		return __thiz.callMethod<jboolean>(
			"getHiddenSSID",
			"()Z"
		);
	}
	QAndroidJniObject WifiInfo::getDetailedStateOf(__jni_impl::android::net::wifi::SupplicantState arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.WifiInfo",
			"getDetailedStateOf",
			"(Landroid/net/wifi/SupplicantState;)Landroid/net/NetworkInfo$DetailedState;",
			arg0.__jniObject().object()
		);
	}
	jint WifiInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WifiInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint WifiInfo::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiInfo : public __jni_impl::android::net::wifi::WifiInfo
	{
	public:
		WifiInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIINFO

