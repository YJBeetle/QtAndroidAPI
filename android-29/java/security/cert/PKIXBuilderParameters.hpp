#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS
#define JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS

#include "../../../__JniBaseClass.hpp"
#include "PKIXParameters.hpp"

namespace __jni_impl::java::security
{
	class KeyStore;
}

namespace __jni_impl::java::security::cert
{
	class PKIXBuilderParameters : public __jni_impl::java::security::cert::PKIXParameters
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::java::security::KeyStore arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject toString();
		void setMaxPathLength(jint arg0);
		jint getMaxPathLength();
	};
} // namespace __jni_impl::java::security::cert

#include "../KeyStore.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXBuilderParameters::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/util/Set;Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PKIXBuilderParameters::__constructor(__jni_impl::java::security::KeyStore arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PKIXBuilderParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void PKIXBuilderParameters::setMaxPathLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxPathLength",
			"(I)V",
			arg0);
	}
	jint PKIXBuilderParameters::getMaxPathLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxPathLength",
			"()I");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXBuilderParameters : public __jni_impl::java::security::cert::PKIXBuilderParameters
	{
	public:
		PKIXBuilderParameters(QAndroidJniObject obj) { __thiz = obj; }
		PKIXBuilderParameters(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PKIXBuilderParameters(__jni_impl::java::security::KeyStore arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS

