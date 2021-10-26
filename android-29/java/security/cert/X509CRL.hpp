#pragma once

#ifndef JAVA_SECURITY_CERT_X509CRL
#define JAVA_SECURITY_CERT_X509CRL

#include "../../../__JniBaseClass.hpp"
#include "CRL.hpp"

namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security::cert
{
	class X509CRLEntry;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}

namespace __jni_impl::java::security::cert
{
	class X509CRL : public __jni_impl::java::security::cert::CRL
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jbyteArray getSignature();
		jbyteArray getEncoded();
		void verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1);
		void verify(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void verify(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void verify(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getIssuerDN();
		jint getVersion();
		QAndroidJniObject getIssuerX500Principal();
		jstring getSigAlgName();
		jbyteArray getSigAlgParams();
		jstring getSigAlgOID();
		QAndroidJniObject getThisUpdate();
		QAndroidJniObject getNextUpdate();
		jbyteArray getTBSCertList();
		QAndroidJniObject getRevokedCertificate(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject getRevokedCertificate(__jni_impl::java::security::cert::X509Certificate arg0);
		QAndroidJniObject getRevokedCertificates();
	};
} // namespace __jni_impl::java::security::cert

#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "../Provider.hpp"
#include "../../util/Date.hpp"
#include "X509CRLEntry.hpp"
#include "../../math/BigInteger.hpp"
#include "X509Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void X509CRL::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CRL",
			"(V)V");
	}
	
	// Methods
	jboolean X509CRL::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint X509CRL::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray X509CRL::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509CRL::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	void X509CRL::verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void X509CRL::verify(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void X509CRL::verify(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void X509CRL::verify(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509CRL::getIssuerDN()
	{
		return __thiz.callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	jint X509CRL::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	QAndroidJniObject X509CRL::getIssuerX500Principal()
	{
		return __thiz.callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jstring X509CRL::getSigAlgName()
	{
		return __thiz.callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509CRL::getSigAlgParams()
	{
		return __thiz.callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509CRL::getSigAlgOID()
	{
		return __thiz.callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject X509CRL::getThisUpdate()
	{
		return __thiz.callObjectMethod(
			"getThisUpdate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CRL::getNextUpdate()
	{
		return __thiz.callObjectMethod(
			"getNextUpdate",
			"()Ljava/util/Date;"
		);
	}
	jbyteArray X509CRL::getTBSCertList()
	{
		return __thiz.callObjectMethod(
			"getTBSCertList",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CRL::getRevokedCertificate(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509CRL::getRevokedCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509CRL::getRevokedCertificates()
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificates",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class X509CRL : public __jni_impl::java::security::cert::X509CRL
	{
	public:
		X509CRL(QAndroidJniObject obj) { __thiz = obj; }
		X509CRL()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_X509CRL

