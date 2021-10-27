#pragma once

#ifndef ANDROID_NET_WIFI_WIFIENTERPRISECONFIG
#define ANDROID_NET_WIFI_WIFIENTERPRISECONFIG

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}

namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0);
		
		// Methods
		jint describeContents();
		jstring getAltSubjectMatch();
		jstring getAnonymousIdentity();
		QAndroidJniObject getCaCertificate();
		jarray getCaCertificates();
		QAndroidJniObject getClientCertificate();
		jarray getClientCertificateChain();
		jstring getDomainSuffixMatch();
		jint getEapMethod();
		jstring getIdentity();
		jstring getPassword();
		jint getPhase2Method();
		jstring getPlmn();
		jstring getRealm();
		jstring getSubjectMatch();
		void setAltSubjectMatch(jstring arg0);
		void setAltSubjectMatch(const QString &arg0);
		void setAnonymousIdentity(jstring arg0);
		void setAnonymousIdentity(const QString &arg0);
		void setCaCertificate(__jni_impl::java::security::cert::X509Certificate arg0);
		void setCaCertificates(jarray arg0);
		void setClientKeyEntry(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::cert::X509Certificate arg1);
		void setClientKeyEntryWithCertificateChain(__jni_impl::__JniBaseClass arg0, jarray arg1);
		void setDomainSuffixMatch(jstring arg0);
		void setDomainSuffixMatch(const QString &arg0);
		void setEapMethod(jint arg0);
		void setIdentity(jstring arg0);
		void setIdentity(const QString &arg0);
		void setPassword(jstring arg0);
		void setPassword(const QString &arg0);
		void setPhase2Method(jint arg0);
		void setPlmn(jstring arg0);
		void setPlmn(const QString &arg0);
		void setRealm(jstring arg0);
		void setRealm(const QString &arg0);
		void setSubjectMatch(jstring arg0);
		void setSubjectMatch(const QString &arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../os/Parcel.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	QAndroidJniObject WifiEnterpriseConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiEnterpriseConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"()V"
		);
	}
	void WifiEnterpriseConfig::__constructor(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiEnterpriseConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getAltSubjectMatch()
	{
		return __thiz.callObjectMethod(
			"getAltSubjectMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getAnonymousIdentity()
	{
		return __thiz.callObjectMethod(
			"getAnonymousIdentity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WifiEnterpriseConfig::getCaCertificate()
	{
		return __thiz.callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jarray WifiEnterpriseConfig::getCaCertificates()
	{
		return __thiz.callObjectMethod(
			"getCaCertificates",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject WifiEnterpriseConfig::getClientCertificate()
	{
		return __thiz.callObjectMethod(
			"getClientCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jarray WifiEnterpriseConfig::getClientCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	jstring WifiEnterpriseConfig::getDomainSuffixMatch()
	{
		return __thiz.callObjectMethod(
			"getDomainSuffixMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiEnterpriseConfig::getEapMethod()
	{
		return __thiz.callMethod<jint>(
			"getEapMethod",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getIdentity()
	{
		return __thiz.callObjectMethod(
			"getIdentity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiEnterpriseConfig::getPhase2Method()
	{
		return __thiz.callMethod<jint>(
			"getPhase2Method",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getPlmn()
	{
		return __thiz.callObjectMethod(
			"getPlmn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getRealm()
	{
		return __thiz.callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getSubjectMatch()
	{
		return __thiz.callObjectMethod(
			"getSubjectMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiEnterpriseConfig::setAltSubjectMatch(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setAltSubjectMatch(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setAnonymousIdentity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setAnonymousIdentity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setCaCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void WifiEnterpriseConfig::setCaCertificates(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setCaCertificates",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntry(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::cert::X509Certificate arg1)
	{
		__thiz.callMethod<void>(
			"setClientKeyEntry",
			"(Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntryWithCertificateChain(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"setClientKeyEntryWithCertificateChain",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WifiEnterpriseConfig::setDomainSuffixMatch(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setDomainSuffixMatch(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setEapMethod(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEapMethod",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setIdentity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setIdentity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setPassword(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPassword(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setPhase2Method(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPhase2Method",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPlmn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPlmn(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setRealm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setRealm(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setSubjectMatch(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setSubjectMatch(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring WifiEnterpriseConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiEnterpriseConfig::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiEnterpriseConfig : public __jni_impl::android::net::wifi::WifiEnterpriseConfig
	{
	public:
		WifiEnterpriseConfig(QAndroidJniObject obj) { __thiz = obj; }
		WifiEnterpriseConfig()
		{
			__constructor();
		}
		WifiEnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIENTERPRISECONFIG

