#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WpsInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pConfig : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint GROUP_OWNER_BAND_2GHZ();
		static jint GROUP_OWNER_BAND_5GHZ();
		static jint GROUP_OWNER_BAND_AUTO();
		jstring deviceAddress();
		jint groupOwnerIntent();
		QAndroidJniObject wps();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::p2p::WifiP2pConfig arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "../WpsInfo.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	jstring WifiP2pConfig::deviceAddress()
	{
		return __thiz.getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pConfig::groupOwnerIntent()
	{
		return __thiz.getField<jint>(
			"groupOwnerIntent"
		);
	}
	QAndroidJniObject WifiP2pConfig::wps()
	{
		return __thiz.getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	// Constructors
	void WifiP2pConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		);
	}
	void WifiP2pConfig::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pConfig arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pConfig::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WifiP2pConfig : public __jni_impl::android::net::wifi::p2p::WifiP2pConfig
	{
	public:
		WifiP2pConfig(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pConfig()
		{
			__constructor();
		}
		WifiP2pConfig(__jni_impl::android::net::wifi::p2p::WifiP2pConfig arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::p2p

