#pragma once

#ifndef JAVA_SECURITY_CERT_CRL
#define JAVA_SECURITY_CERT_CRL

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security::cert
{
	class CRL : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getType();
		jboolean isRevoked(__jni_impl::java::security::cert::Certificate arg0);
	};
} // namespace __jni_impl::java::security::cert

#include "Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CRL::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRL",
			"(V)V");
	}
	
	// Methods
	jstring CRL::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CRL::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CRL::isRevoked(__jni_impl::java::security::cert::Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CRL : public __jni_impl::java::security::cert::CRL
	{
	public:
		CRL(QAndroidJniObject obj) { __thiz = obj; }
		CRL()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CRL

