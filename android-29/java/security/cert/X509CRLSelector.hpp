#pragma once

#ifndef JAVA_SECURITY_CERT_X509CRLSELECTOR
#define JAVA_SECURITY_CERT_X509CRLSELECTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::java::security::cert
{
	class CRL;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}

namespace __jni_impl::java::security::cert
{
	class X509CRLSelector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		jboolean match(__jni_impl::java::security::cert::CRL arg0);
		void setIssuers(__jni_impl::__JniBaseClass arg0);
		void setIssuerNames(__jni_impl::__JniBaseClass arg0);
		void addIssuer(__jni_impl::javax::security::auth::x500::X500Principal arg0);
		void addIssuerName(jstring arg0);
		void addIssuerName(jbyteArray arg0);
		void setMinCRLNumber(__jni_impl::java::math::BigInteger arg0);
		void setMaxCRLNumber(__jni_impl::java::math::BigInteger arg0);
		void setDateAndTime(__jni_impl::java::util::Date arg0);
		void setCertificateChecking(__jni_impl::java::security::cert::X509Certificate arg0);
		QAndroidJniObject getIssuers();
		QAndroidJniObject getIssuerNames();
		QAndroidJniObject getMinCRL();
		QAndroidJniObject getMaxCRL();
		QAndroidJniObject getDateAndTime();
		QAndroidJniObject getCertificateChecking();
	};
} // namespace __jni_impl::java::security::cert

#include "../../util/HashSet.hpp"
#include "../../math/BigInteger.hpp"
#include "../../util/Date.hpp"
#include "X509Certificate.hpp"
#include "CRL.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void X509CRLSelector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CRLSelector",
			"()V");
	}
	
	// Methods
	QAndroidJniObject X509CRLSelector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject X509CRLSelector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jboolean X509CRLSelector::match(__jni_impl::java::security::cert::CRL arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/CRL;)Z",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::setIssuers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setIssuers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::setIssuerNames(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setIssuerNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::addIssuer(__jni_impl::javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"addIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::addIssuerName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addIssuerName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void X509CRLSelector::addIssuerName(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"addIssuerName",
			"([B)V",
			arg0);
	}
	void X509CRLSelector::setMinCRLNumber(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setMinCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::setMaxCRLNumber(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setMaxCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::setDateAndTime(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setDateAndTime",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void X509CRLSelector::setCertificateChecking(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificateChecking",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject X509CRLSelector::getIssuers()
	{
		return __thiz.callObjectMethod(
			"getIssuers",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject X509CRLSelector::getIssuerNames()
	{
		return __thiz.callObjectMethod(
			"getIssuerNames",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject X509CRLSelector::getMinCRL()
	{
		return __thiz.callObjectMethod(
			"getMinCRL",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject X509CRLSelector::getMaxCRL()
	{
		return __thiz.callObjectMethod(
			"getMaxCRL",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject X509CRLSelector::getDateAndTime()
	{
		return __thiz.callObjectMethod(
			"getDateAndTime",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject X509CRLSelector::getCertificateChecking()
	{
		return __thiz.callObjectMethod(
			"getCertificateChecking",
			"()Ljava/security/cert/X509Certificate;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class X509CRLSelector : public __jni_impl::java::security::cert::X509CRLSelector
	{
	public:
		X509CRLSelector(QAndroidJniObject obj) { __thiz = obj; }
		X509CRLSelector()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_X509CRLSELECTOR

