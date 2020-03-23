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
		QAndroidJniObject getObject(__jni_impl::__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getObject(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getObject(__jni_impl::javax::crypto::Cipher arg0);
		QAndroidJniObject getAlgorithm();
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
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject SealedObject::getObject(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SealedObject::getObject(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SealedObject::getObject(__jni_impl::javax::crypto::Cipher arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SealedObject::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
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

