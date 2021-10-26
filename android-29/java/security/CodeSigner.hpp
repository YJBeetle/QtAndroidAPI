#pragma once

#ifndef JAVA_SECURITY_CODESIGNER
#define JAVA_SECURITY_CODESIGNER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::security
{
	class Timestamp;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::security
{
	class CodeSigner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::Timestamp arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getSignerCertPath();
		QAndroidJniObject getTimestamp();
	};
} // namespace __jni_impl::java::security

#include "cert/CertPath.hpp"
#include "Timestamp.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void CodeSigner::__constructor(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::Timestamp arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.CodeSigner",
			"(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean CodeSigner::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CodeSigner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CodeSigner::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject CodeSigner::getSignerCertPath()
	{
		return __thiz.callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	QAndroidJniObject CodeSigner::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Ljava/security/Timestamp;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class CodeSigner : public __jni_impl::java::security::CodeSigner
	{
	public:
		CodeSigner(QAndroidJniObject obj) { __thiz = obj; }
		CodeSigner(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::Timestamp arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_CODESIGNER

