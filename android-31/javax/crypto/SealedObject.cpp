#include "../../java/io/ObjectInputStream.hpp"
#include "./Cipher.hpp"
#include "./SealedObject.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	SealedObject::SealedObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SealedObject::SealedObject(__JniBaseClass arg0, javax::crypto::Cipher arg1)
		: __JniBaseClass(
			"javax.crypto.SealedObject",
			"(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jstring SealedObject::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SealedObject::getObject(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject SealedObject::getObject(javax::crypto::Cipher arg0)
	{
		return callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject SealedObject::getObject(__JniBaseClass arg0, jstring arg1)
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object(),
			arg1
		).object<jobject>();
	}
} // namespace javax::crypto

