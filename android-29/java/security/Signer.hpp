#pragma once

#ifndef JAVA_SECURITY_SIGNER
#define JAVA_SECURITY_SIGNER

#include "Identity.hpp"

namespace __jni_impl::java::security
{
	class IdentityScope;
}
namespace __jni_impl::java::security
{
	class KeyPair;
}

namespace __jni_impl::java::security
{
	class Signer : public __jni_impl::java::security::Identity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1);
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject toString();
		void setKeyPair(__jni_impl::java::security::KeyPair arg0);
		QAndroidJniObject getPrivateKey();
	};
} // namespace __jni_impl::java::security

#include "IdentityScope.hpp"
#include "KeyPair.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Signer::__constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Signer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject Signer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Signer::setKeyPair(__jni_impl::java::security::KeyPair arg0)
	{
		__thiz.callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Signer::getPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Signer : public __jni_impl::java::security::Signer
	{
	public:
		Signer(QAndroidJniObject obj) { __thiz = obj; }
		Signer(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Signer(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SIGNER

