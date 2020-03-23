#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXPARAMETERS
#define JAVA_SECURITY_CERT_PKIXPARAMETERS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security
{
	class KeyStore;
}
namespace __jni_impl::java::security::cert
{
	class CertStore;
}
namespace __jni_impl::java::security::cert
{
	class PKIXCertPathChecker;
}

namespace __jni_impl::java::security::cert
{
	class PKIXParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::security::KeyStore arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		QAndroidJniObject getDate();
		void setDate(__jni_impl::java::util::Date arg0);
		void setTrustAnchors(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getTrustAnchors();
		QAndroidJniObject getInitialPolicies();
		void setInitialPolicies(__jni_impl::__JniBaseClass arg0);
		void setCertStores(__jni_impl::__JniBaseClass arg0);
		void addCertStore(__jni_impl::java::security::cert::CertStore arg0);
		QAndroidJniObject getCertStores();
		void setRevocationEnabled(jboolean arg0);
		jboolean isRevocationEnabled();
		void setExplicitPolicyRequired(jboolean arg0);
		jboolean isExplicitPolicyRequired();
		void setPolicyMappingInhibited(jboolean arg0);
		jboolean isPolicyMappingInhibited();
		void setAnyPolicyInhibited(jboolean arg0);
		jboolean isAnyPolicyInhibited();
		void setPolicyQualifiersRejected(jboolean arg0);
		jboolean getPolicyQualifiersRejected();
		void setCertPathCheckers(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCertPathCheckers();
		void addCertPathChecker(__jni_impl::java::security::cert::PKIXCertPathChecker arg0);
		QAndroidJniObject getSigProvider();
		void setSigProvider(jstring arg0);
		QAndroidJniObject getTargetCertConstraints();
		void setTargetCertConstraints(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::security::cert

#include "../../util/Date.hpp"
#include "../KeyStore.hpp"
#include "CertStore.hpp"
#include "PKIXCertPathChecker.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXParameters::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object());
	}
	void PKIXParameters::__constructor(__jni_impl::java::security::KeyStore arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PKIXParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PKIXParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject PKIXParameters::getDate()
	{
		return __thiz.callObjectMethod(
			"getDate",
			"()Ljava/util/Date;");
	}
	void PKIXParameters::setDate(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void PKIXParameters::setTrustAnchors(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTrustAnchors",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PKIXParameters::getTrustAnchors()
	{
		return __thiz.callObjectMethod(
			"getTrustAnchors",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject PKIXParameters::getInitialPolicies()
	{
		return __thiz.callObjectMethod(
			"getInitialPolicies",
			"()Ljava/util/Set;");
	}
	void PKIXParameters::setInitialPolicies(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInitialPolicies",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object());
	}
	void PKIXParameters::setCertStores(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCertStores",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void PKIXParameters::addCertStore(__jni_impl::java::security::cert::CertStore arg0)
	{
		__thiz.callMethod<void>(
			"addCertStore",
			"(Ljava/security/cert/CertStore;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PKIXParameters::getCertStores()
	{
		return __thiz.callObjectMethod(
			"getCertStores",
			"()Ljava/util/List;");
	}
	void PKIXParameters::setRevocationEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRevocationEnabled",
			"(Z)V",
			arg0);
	}
	jboolean PKIXParameters::isRevocationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isRevocationEnabled",
			"()Z");
	}
	void PKIXParameters::setExplicitPolicyRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExplicitPolicyRequired",
			"(Z)V",
			arg0);
	}
	jboolean PKIXParameters::isExplicitPolicyRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isExplicitPolicyRequired",
			"()Z");
	}
	void PKIXParameters::setPolicyMappingInhibited(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPolicyMappingInhibited",
			"(Z)V",
			arg0);
	}
	jboolean PKIXParameters::isPolicyMappingInhibited()
	{
		return __thiz.callMethod<jboolean>(
			"isPolicyMappingInhibited",
			"()Z");
	}
	void PKIXParameters::setAnyPolicyInhibited(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnyPolicyInhibited",
			"(Z)V",
			arg0);
	}
	jboolean PKIXParameters::isAnyPolicyInhibited()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyPolicyInhibited",
			"()Z");
	}
	void PKIXParameters::setPolicyQualifiersRejected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPolicyQualifiersRejected",
			"(Z)V",
			arg0);
	}
	jboolean PKIXParameters::getPolicyQualifiersRejected()
	{
		return __thiz.callMethod<jboolean>(
			"getPolicyQualifiersRejected",
			"()Z");
	}
	void PKIXParameters::setCertPathCheckers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCertPathCheckers",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PKIXParameters::getCertPathCheckers()
	{
		return __thiz.callObjectMethod(
			"getCertPathCheckers",
			"()Ljava/util/List;");
	}
	void PKIXParameters::addCertPathChecker(__jni_impl::java::security::cert::PKIXCertPathChecker arg0)
	{
		__thiz.callMethod<void>(
			"addCertPathChecker",
			"(Ljava/security/cert/PKIXCertPathChecker;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PKIXParameters::getSigProvider()
	{
		return __thiz.callObjectMethod(
			"getSigProvider",
			"()Ljava/lang/String;");
	}
	void PKIXParameters::setSigProvider(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject PKIXParameters::getTargetCertConstraints()
	{
		return __thiz.callObjectMethod(
			"getTargetCertConstraints",
			"()Ljava/security/cert/CertSelector;");
	}
	void PKIXParameters::setTargetCertConstraints(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTargetCertConstraints",
			"(Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXParameters : public __jni_impl::java::security::cert::PKIXParameters
	{
	public:
		PKIXParameters(QAndroidJniObject obj) { __thiz = obj; }
		PKIXParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		PKIXParameters(__jni_impl::java::security::KeyStore arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXPARAMETERS

