#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class Inet6Address;
}

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareNetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getPeerIpv6Addr();
		jint getPort();
		jint getTransportProtocol();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "../../../os/Parcel.hpp"
#include "../../../../java/net/Inet6Address.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject WifiAwareNetworkInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiAwareNetworkInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.WifiAwareNetworkInfo",
			"(V)V");
	}
	
	// Methods
	jint WifiAwareNetworkInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WifiAwareNetworkInfo::getPeerIpv6Addr()
	{
		return __thiz.callObjectMethod(
			"getPeerIpv6Addr",
			"()Ljava/net/Inet6Address;"
		);
	}
	jint WifiAwareNetworkInfo::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::getTransportProtocol()
	{
		return __thiz.callMethod<jint>(
			"getTransportProtocol",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WifiAwareNetworkInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiAwareNetworkInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class WifiAwareNetworkInfo : public __jni_impl::android::net::wifi::aware::WifiAwareNetworkInfo
	{
	public:
		WifiAwareNetworkInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiAwareNetworkInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

