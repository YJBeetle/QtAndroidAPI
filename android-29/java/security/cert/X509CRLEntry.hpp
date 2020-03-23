#pragma once

#ifndef JAVA_SECURITY_CERT_X509CRLENTRY
#define JAVA_SECURITY_CERT_X509CRLENTRY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class CRLReason;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::cert
{
	class X509CRLEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getEncoded();
		jboolean hasExtensions();
		QAndroidJniObject getRevocationReason();
		QAndroidJniObject getCertificateIssuer();
		QAndroidJniObject getRevocationDate();
		QAndroidJniObject getSerialNumber();
	};
} // namespace __jni_impl::java::security::cert

#include "CRLReason.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "../../util/Date.hpp"
#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void X509CRLEntry::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CRLEntry",
			"()V");
	}
	
	// Methods
	jboolean X509CRLEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject X509CRLEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint X509CRLEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject X509CRLEntry::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B");
	}
	jboolean X509CRLEntry::hasExtensions()
	{
		return __thiz.callMethod<jboolean>(
			"hasExtensions",
			"()Z");
	}
	QAndroidJniObject X509CRLEntry::getRevocationReason()
	{
		return __thiz.callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;");
	}
	QAndroidJniObject X509CRLEntry::getCertificateIssuer()
	{
		return __thiz.callObjectMethod(
			"getCertificateIssuer",
			"()Ljavax/security/auth/x500/X500Principal;");
	}
	QAndroidJniObject X509CRLEntry::getRevocationDate()
	{
		return __thiz.callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject X509CRLEntry::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class X509CRLEntry : public __jni_impl::java::security::cert::X509CRLEntry
	{
	public:
		X509CRLEntry(QAndroidJniObject obj) { __thiz = obj; }
		X509CRLEntry()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_X509CRLENTRY

