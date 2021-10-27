#pragma once

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
		jint describeContents();
		QAndroidJniObject get(jstring arg0);
		QAndroidJniObject get(const QString &arg0);
		QAndroidJniObject getDeviceList();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "./WifiP2pDevice.hpp"
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
			"()V"
		);
	}
	void WifiP2pDeviceList::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pDeviceList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pDeviceList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject WifiP2pDeviceList::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pDeviceList::get(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiP2pDeviceList::getDeviceList()
	{
		return __thiz.callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
	jstring WifiP2pDeviceList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

