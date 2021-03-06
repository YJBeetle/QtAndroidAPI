#pragma once

#ifndef ANDROID_NET_WIFI_P2P_WIFIP2PDEVICELIST
#define ANDROID_NET_WIFI_P2P_WIFIP2PDEVICELIST

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pDevice;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pDeviceList : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::p2p::WifiP2pDeviceList arg0);
		
		// Methods
		QAndroidJniObject get(jstring arg0);
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getDeviceList();
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pDeviceList::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiP2pDeviceList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"()V");
	}
	void WifiP2pDeviceList::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pDeviceList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject WifiP2pDeviceList::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0
		);
	}
	jstring WifiP2pDeviceList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pDeviceList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WifiP2pDeviceList::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject WifiP2pDeviceList::getDeviceList()
	{
		return __thiz.callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p

namespace android::net::wifi::p2p
{
	class WifiP2pDeviceList : public __jni_impl::android::net::wifi::p2p::WifiP2pDeviceList
	{
	public:
		WifiP2pDeviceList(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pDeviceList()
		{
			__constructor();
		}
		WifiP2pDeviceList(__jni_impl::android::net::wifi::p2p::WifiP2pDeviceList arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::p2p

#endif // ANDROID_NET_WIFI_P2P_WIFIP2PDEVICELIST

