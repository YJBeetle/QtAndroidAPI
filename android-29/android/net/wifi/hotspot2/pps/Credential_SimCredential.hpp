#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_SIMCREDENTIAL
#define ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_SIMCREDENTIAL

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getEapType();
		jstring getImsi();
		jint hashCode();
		void setEapType(jint arg0);
		void setImsi(jstring arg0);
		void setImsi(const QString &arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_SimCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Credential_SimCredential::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"()V"
		);
	}
	void Credential_SimCredential::__constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Credential_SimCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_SimCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Credential_SimCredential::getEapType()
	{
		return __thiz.callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	jstring Credential_SimCredential::getImsi()
	{
		return __thiz.callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_SimCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_SimCredential::setEapType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_SimCredential::setImsi(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setImsi",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_SimCredential::setImsi(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setImsi",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Credential_SimCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_SimCredential::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

namespace android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential : public __jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential
	{
	public:
		Credential_SimCredential(QAndroidJniObject obj) { __thiz = obj; }
		Credential_SimCredential()
		{
			__constructor();
		}
		Credential_SimCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2::pps

#endif // ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_SIMCREDENTIAL

