#pragma once

#ifndef JAVA_SECURITY_SIGNEDOBJECT
#define JAVA_SECURITY_SIGNEDOBJECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Signature;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::security
{
	class SignedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Signature arg2);
		
		// Methods
		jbyteArray getSignature();
		jobject getObject();
		jboolean verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Signature arg1);
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Signature.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SignedObject::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Signature arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignedObject",
			"(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	jbyteArray SignedObject::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jobject SignedObject::getObject()
	{
		return __thiz.callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SignedObject::verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Signature arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Signature;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring SignedObject::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class SignedObject : public __jni_impl::java::security::SignedObject
	{
	public:
		SignedObject(QAndroidJniObject obj) { __thiz = obj; }
		SignedObject(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Signature arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SIGNEDOBJECT

