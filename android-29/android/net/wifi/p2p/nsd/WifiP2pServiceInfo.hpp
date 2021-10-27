#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint SERVICE_TYPE_ALL();
		static jint SERVICE_TYPE_BONJOUR();
		static jint SERVICE_TYPE_UPNP();
		static jint SERVICE_TYPE_VENDOR_SPECIFIC();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	jint WifiP2pServiceInfo::SERVICE_TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_ALL"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_BONJOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_BONJOUR"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_UPNP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_UPNP"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_VENDOR_SPECIFIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_VENDOR_SPECIFIC"
		);
	}
	
	// Constructors
	void WifiP2pServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"(V)V");
	}
	
	// Methods
	jint WifiP2pServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pServiceInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiP2pServiceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiP2pServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		WifiP2pServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

