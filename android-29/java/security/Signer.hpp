#pragma once

#include "../../__JniBaseClass.hpp"
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
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1);
		void __constructor(const QString &arg0, __jni_impl::java::security::IdentityScope arg1);
		
		// Methods
		QAndroidJniObject getPrivateKey();
		void setKeyPair(__jni_impl::java::security::KeyPair arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "IdentityScope.hpp"
#include "KeyPair.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Signer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Signer::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Signer::__constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Signer::__constructor(const QString &arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Signer::getPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	void Signer::setKeyPair(__jni_impl::java::security::KeyPair arg0)
	{
		__thiz.callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Signer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Signer : public __jni_impl::java::security::Signer
	{
	public:
		Signer(QAndroidJniObject obj) { __thiz = obj; }
		Signer(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Signer(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

