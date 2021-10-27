#include "../../java/io/ObjectInputStream.hpp"
#include "./Cipher.hpp"
#include "./SealedObject.hpp"

namespace javax::crypto
{
	// Fields
	
	SealedObject::SealedObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SealedObject::SealedObject(__JniBaseClass &arg0, javax::crypto::Cipher &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.SealedObject",
			"(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring SealedObject::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SealedObject::getObject(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject SealedObject::getObject(javax::crypto::Cipher arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject SealedObject::getObject(__JniBaseClass arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
	jobject SealedObject::getObject(__JniBaseClass arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jobject>();
	}
} // namespace javax::crypto

