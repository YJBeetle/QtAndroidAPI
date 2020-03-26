#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_CERTIFICATECREDENTIAL
#define ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_CERTIFICATECREDENTIAL

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getCertType();
		void setCertType(jstring arg0);
		void setCertSha256Fingerprint(jbyteArray arg0);
		jbyteArray getCertSha256Fingerprint();
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_CertificateCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Credential_CertificateCredential::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"()V");
	}
	void Credential_CertificateCredential::__constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Credential_CertificateCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Credential_CertificateCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_CertificateCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Credential_CertificateCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Credential_CertificateCredential::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Credential_CertificateCredential::getCertType()
	{
		return __thiz.callObjectMethod(
			"getCertType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_CertificateCredential::setCertType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCertType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_CertificateCredential::setCertSha256Fingerprint(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setCertSha256Fingerprint",
			"([B)V",
			arg0
		);
	}
	jbyteArray Credential_CertificateCredential::getCertSha256Fingerprint()
	{
		return __thiz.callObjectMethod(
			"getCertSha256Fingerprint",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

namespace android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential : public __jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential
	{
	public:
		Credential_CertificateCredential(QAndroidJniObject obj) { __thiz = obj; }
		Credential_CertificateCredential()
		{
			__constructor();
		}
		Credential_CertificateCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2::pps

#endif // ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_CERTIFICATECREDENTIAL

