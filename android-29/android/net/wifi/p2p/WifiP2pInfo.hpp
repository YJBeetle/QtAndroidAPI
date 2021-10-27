#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jboolean groupFormed();
		QAndroidJniObject groupOwnerAddress();
		jboolean isGroupOwner();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::p2p::WifiP2pInfo arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "../../../os/Parcel.hpp"
#include "../../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean WifiP2pInfo::groupFormed()
	{
		return __thiz.getField<jboolean>(
			"groupFormed"
		);
	}
	QAndroidJniObject WifiP2pInfo::groupOwnerAddress()
	{
		return __thiz.getObjectField(
			"groupOwnerAddress",
			"Ljava/net/InetAddress;"
		);
	}
	jboolean WifiP2pInfo::isGroupOwner()
	{
		return __thiz.getField<jboolean>(
			"isGroupOwner"
		);
	}
	
	// Constructors
	void WifiP2pInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"()V"
		);
	}
	void WifiP2pInfo::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"(Landroid/net/wifi/p2p/WifiP2pInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WifiP2pInfo : public __jni_impl::android::net::wifi::p2p::WifiP2pInfo
	{
	public:
		WifiP2pInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pInfo()
		{
			__constructor();
		}
		WifiP2pInfo(__jni_impl::android::net::wifi::p2p::WifiP2pInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::p2p

