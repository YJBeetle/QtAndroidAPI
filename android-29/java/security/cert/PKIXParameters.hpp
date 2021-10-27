#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::security::cert
{
	class PKIXParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::KeyStore arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void addCertPathChecker(__jni_impl::java::security::cert::PKIXCertPathChecker arg0);
		void addCertStore(__jni_impl::java::security::cert::CertStore arg0);
		jobject clone();
		QAndroidJniObject getCertPathCheckers();
		QAndroidJniObject getCertStores();
		QAndroidJniObject getDate();
		QAndroidJniObject getInitialPolicies();
		jboolean getPolicyQualifiersRejected();
		jstring getSigProvider();
		QAndroidJniObject getTargetCertConstraints();
		QAndroidJniObject getTrustAnchors();
		jboolean isAnyPolicyInhibited();
		jboolean isExplicitPolicyRequired();
		jboolean isPolicyMappingInhibited();
		jboolean isRevocationEnabled();
		void setAnyPolicyInhibited(jboolean arg0);
		void setCertPathCheckers(__jni_impl::__JniBaseClass arg0);
		void setCertStores(__jni_impl::__JniBaseClass arg0);
		void setDate(__jni_impl::java::util::Date arg0);
		void setExplicitPolicyRequired(jboolean arg0);
		void setInitialPolicies(__jni_impl::__JniBaseClass arg0);
		void setPolicyMappingInhibited(jboolean arg0);
		void setPolicyQualifiersRejected(jboolean arg0);
		void setRevocationEnabled(jboolean arg0);
		void setSigProvider(jstring arg0);
		void setSigProvider(const QString &arg0);
		void setTargetCertConstraints(__jni_impl::__JniBaseClass arg0);
		void setTrustAnchors(__jni_impl::__JniBaseClass arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::security::cert

#include "../KeyStore.hpp"
#include "./CertStore.hpp"
#include "./PKIXCertPathChecker.hpp"
#include "../../util/Date.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXParameters::__constructor(__jni_impl::java::security::KeyStore arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PKIXParameters::addCertPathChecker(__jni_impl::java::security::cert::PKIXCertPathChecker arg0)
	{
		__thiz.callMethod<void>(
			"addCertPathChecker",
			"(Ljava/security/cert/PKIXCertPathChecker;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::addCertStore(__jni_impl::java::security::cert::CertStore arg0)
	{
		__thiz.callMethod<void>(
			"addCertStore",
			"(Ljava/security/cert/CertStore;)V",
			arg0.__jniObject().object()
		);
	}
	jobject PKIXParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PKIXParameters::getCertPathCheckers()
	{
		return __thiz.callObjectMethod(
			"getCertPathCheckers",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PKIXParameters::getCertStores()
	{
		return __thiz.callObjectMethod(
			"getCertStores",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PKIXParameters::getDate()
	{
		return __thiz.callObjectMethod(
			"getDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject PKIXParameters::getInitialPolicies()
	{
		return __thiz.callObjectMethod(
			"getInitialPolicies",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::getPolicyQualifiersRejected()
	{
		return __thiz.callMethod<jboolean>(
			"getPolicyQualifiersRejected",
			"()Z"
		);
	}
	jstring PKIXParameters::getSigProvider()
	{
		return __thiz.callObjectMethod(
			"getSigProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PKIXParameters::getTargetCertConstraints()
	{
		return __thiz.callObjectMethod(
			"getTargetCertConstraints",
			"()Ljava/security/cert/CertSelector;"
		);
	}
	QAndroidJniObject PKIXParameters::getTrustAnchors()
	{
		return __thiz.callObjectMethod(
			"getTrustAnchors",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::isAnyPolicyInhibited()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyPolicyInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isExplicitPolicyRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isExplicitPolicyRequired",
			"()Z"
		);
	}
	jboolean PKIXParameters::isPolicyMappingInhibited()
	{
		return __thiz.callMethod<jboolean>(
			"isPolicyMappingInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isRevocationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isRevocationEnabled",
			"()Z"
		);
	}
	void PKIXParameters::setAnyPolicyInhibited(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnyPolicyInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setCertPathCheckers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCertPathCheckers",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::setCertStores(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCertStores",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::setDate(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::setExplicitPolicyRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExplicitPolicyRequired",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setInitialPolicies(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInitialPolicies",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::setPolicyMappingInhibited(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPolicyMappingInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setPolicyQualifiersRejected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPolicyQualifiersRejected",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setRevocationEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRevocationEnabled",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setSigProvider(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PKIXParameters::setSigProvider(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PKIXParameters::setTargetCertConstraints(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTargetCertConstraints",
			"(Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXParameters::setTrustAnchors(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTrustAnchors",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PKIXParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXParameters : public __jni_impl::java::security::cert::PKIXParameters
	{
	public:
		PKIXParameters(QAndroidJniObject obj) { __thiz = obj; }
		PKIXParameters(__jni_impl::java::security::KeyStore arg0)
		{
			__constructor(
				arg0);
		}
		PKIXParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

