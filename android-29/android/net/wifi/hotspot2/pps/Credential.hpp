#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL
#define ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_UserCredential;
}
namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential;
}
namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		void setUserCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential arg0);
		QAndroidJniObject getUserCredential();
		void setCertCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0);
		QAndroidJniObject getCertCredential();
		void setSimCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential arg0);
		QAndroidJniObject getSimCredential();
		void setClientCertificateChain(jarray arg0);
		void setClientPrivateKey(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getClientPrivateKey();
		void setCaCertificate(__jni_impl::java::security::cert::X509Certificate arg0);
		QAndroidJniObject getCaCertificate();
		jarray getClientCertificateChain();
		void setRealm(jstring arg0);
		void setRealm(const QString &arg0);
		jstring getRealm();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

#include "Credential_UserCredential.hpp"
#include "Credential_CertificateCredential.hpp"
#include "Credential_SimCredential.hpp"
#include "../../../../../java/security/cert/X509Certificate.hpp"
#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Credential::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"()V"
		);
	}
	void Credential::__constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Credential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Credential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential::setUserCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential arg0)
	{
		__thiz.callMethod<void>(
			"setUserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Credential::getUserCredential()
	{
		return __thiz.callObjectMethod(
			"getUserCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;"
		);
	}
	void Credential::setCertCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0)
	{
		__thiz.callMethod<void>(
			"setCertCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Credential::getCertCredential()
	{
		return __thiz.callObjectMethod(
			"getCertCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;"
		);
	}
	void Credential::setSimCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_SimCredential arg0)
	{
		__thiz.callMethod<void>(
			"setSimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Credential::getSimCredential()
	{
		return __thiz.callObjectMethod(
			"getSimCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;"
		);
	}
	void Credential::setClientCertificateChain(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setClientCertificateChain",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0
		);
	}
	void Credential::setClientPrivateKey(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setClientPrivateKey",
			"(Ljava/security/PrivateKey;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Credential::getClientPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	void Credential::setCaCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Credential::getCaCertificate()
	{
		return __thiz.callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jarray Credential::getClientCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	void Credential::setRealm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential::setRealm(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Credential::getRealm()
	{
		return __thiz.callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Credential::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Credential : public __jni_impl::android::net::wifi::hotspot2::pps::Credential
	{
	public:
		Credential(QAndroidJniObject obj) { __thiz = obj; }
		Credential()
		{
			__constructor();
		}
		Credential(__jni_impl::android::net::wifi::hotspot2::pps::Credential arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2::pps

#endif // ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL

