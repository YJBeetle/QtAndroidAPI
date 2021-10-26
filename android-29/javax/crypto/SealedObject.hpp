#pragma once

#ifndef JAVAX_CRYPTO_SEALEDOBJECT
#define JAVAX_CRYPTO_SEALEDOBJECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::javax::crypto
{
	class Cipher;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::javax::crypto
{
	class SealedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::javax::crypto::Cipher arg1);
		
		// Methods
		jobject getObject(__jni_impl::__JniBaseClass arg0, jstring arg1);
		jobject getObject(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		jobject getObject(__jni_impl::__JniBaseClass arg0);
		jobject getObject(__jni_impl::javax::crypto::Cipher arg0);
		jstring getAlgorithm();
	};
} // namespace __jni_impl::javax::crypto

#include "Cipher.hpp"
#include "../../java/io/ObjectInputStream.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void SealedObject::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::javax::crypto::Cipher arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.SealedObject",
			"(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject SealedObject::getObject(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
	jobject SealedObject::getObject(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jobject>();
	}
	jobject SealedObject::getObject(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject SealedObject::getObject(__jni_impl::javax::crypto::Cipher arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jstring SealedObject::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class SealedObject : public __jni_impl::javax::crypto::SealedObject
	{
	public:
		SealedObject(QAndroidJniObject obj) { __thiz = obj; }
		SealedObject(__jni_impl::__JniBaseClass arg0, __jni_impl::javax::crypto::Cipher arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_SEALEDOBJECT

