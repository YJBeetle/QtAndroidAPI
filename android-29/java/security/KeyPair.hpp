#pragma once

#ifndef JAVA_SECURITY_KEYPAIR
#define JAVA_SECURITY_KEYPAIR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class KeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getPrivate();
		QAndroidJniObject getPublic();
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyPair::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPair",
			"(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyPair::getPrivate()
	{
		return __thiz.callObjectMethod(
			"getPrivate",
			"()Ljava/security/PrivateKey;"
		);
	}
	QAndroidJniObject KeyPair::getPublic()
	{
		return __thiz.callObjectMethod(
			"getPublic",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyPair : public __jni_impl::java::security::KeyPair
	{
	public:
		KeyPair(QAndroidJniObject obj) { __thiz = obj; }
		KeyPair(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYPAIR

