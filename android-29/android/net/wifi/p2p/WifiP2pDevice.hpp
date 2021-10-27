#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint CONNECTED();
		static QAndroidJniObject CREATOR();
		static jint FAILED();
		static jint INVITED();
		static jint UNAVAILABLE();
		jstring deviceAddress();
		jstring deviceName();
		jstring primaryDeviceType();
		jstring secondaryDeviceType();
		jint status();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::p2p::WifiP2pDevice arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isGroupOwner();
		jboolean isServiceDiscoveryCapable();
		jstring toString();
		jboolean wpsDisplaySupported();
		jboolean wpsKeypadSupported();
		jboolean wpsPbcSupported();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	jint WifiP2pDevice::AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"AVAILABLE"
		);
	}
	jint WifiP2pDevice::CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CONNECTED"
		);
	}
	QAndroidJniObject WifiP2pDevice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pDevice::FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"FAILED"
		);
	}
	jint WifiP2pDevice::INVITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"INVITED"
		);
	}
	jint WifiP2pDevice::UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"UNAVAILABLE"
		);
	}
	jstring WifiP2pDevice::deviceAddress()
	{
		return __thiz.getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::deviceName()
	{
		return __thiz.getObjectField(
			"deviceName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::primaryDeviceType()
	{
		return __thiz.getObjectField(
			"primaryDeviceType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::secondaryDeviceType()
	{
		return __thiz.getObjectField(
			"secondaryDeviceType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pDevice::status()
	{
		return __thiz.getField<jint>(
			"status"
		);
	}
	
	// Constructors
	void WifiP2pDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"()V"
		);
	}
	void WifiP2pDevice::__constructor(__jni_impl::android::net::wifi::p2p::WifiP2pDevice arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"(Landroid/net/wifi/p2p/WifiP2pDevice;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pDevice::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiP2pDevice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WifiP2pDevice::isGroupOwner()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::isServiceDiscoveryCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isServiceDiscoveryCapable",
			"()Z"
		);
	}
	jstring WifiP2pDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WifiP2pDevice::wpsDisplaySupported()
	{
		return __thiz.callMethod<jboolean>(
			"wpsDisplaySupported",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::wpsKeypadSupported()
	{
		return __thiz.callMethod<jboolean>(
			"wpsKeypadSupported",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::wpsPbcSupported()
	{
		return __thiz.callMethod<jboolean>(
			"wpsPbcSupported",
			"()Z"
		);
	}
	void WifiP2pDevice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WifiP2pDevice : public __jni_impl::android::net::wifi::p2p::WifiP2pDevice
	{
	public:
		WifiP2pDevice(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pDevice()
		{
			__constructor();
		}
		WifiP2pDevice(__jni_impl::android::net::wifi::p2p::WifiP2pDevice arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::p2p

