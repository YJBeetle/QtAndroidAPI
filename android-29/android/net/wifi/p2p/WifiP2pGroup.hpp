#pragma once

#ifndef ANDROID_NET_WIFI_P2P_WIFIP2PGROUP
#define ANDROID_NET_WIFI_P2P_WIFIP2PGROUP

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
	class WifiP2pGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::p2p::WifiP2pGroup arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getOwner();
		jboolean isGroupOwner();
		QAndroidJniObject getNetworkName();
		QAndroidJniObject getClientList();
		QAndroidJniObject getPassphrase();
		jint getFrequency();
		QAndroidJniObject getInterface();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void WifiP2pGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"()V");
	}
	void WifiP2pGroup::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pGroup arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"(Landroid/net/wifi/p2p/WifiP2pGroup;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject WifiP2pGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject WifiP2pGroup::getOwner()
	{
		return __thiz.callObjectMethod(
			"getOwner",
			"()Landroid/net/wifi/p2p/WifiP2pDevice;");
	}
	jboolean WifiP2pGroup::isGroupOwner()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupOwner",
			"()Z");
	}
	QAndroidJniObject WifiP2pGroup::getNetworkName()
	{
		return __thiz.callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject WifiP2pGroup::getClientList()
	{
		return __thiz.callObjectMethod(
			"getClientList",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject WifiP2pGroup::getPassphrase()
	{
		return __thiz.callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;");
	}
	jint WifiP2pGroup::getFrequency()
	{
		return __thiz.callMethod<jint>(
			"getFrequency",
			"()I");
	}
	QAndroidJniObject WifiP2pGroup::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;");
	}
	jint WifiP2pGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void WifiP2pGroup::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::wifi::p2p

namespace android::net::wifi::p2p
{
	class WifiP2pGroup : public __jni_impl::android::net::wifi::p2p::WifiP2pGroup
	{
	public:
		WifiP2pGroup(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pGroup()
		{
			__constructor();
		}
		WifiP2pGroup(__jni_impl::android::net::wifi::p2p::WifiP2pGroup arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::p2p

#endif // ANDROID_NET_WIFI_P2P_WIFIP2PGROUP

