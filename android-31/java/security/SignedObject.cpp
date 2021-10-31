#include "../io/ObjectInputStream.hpp"
#include "./Signature.hpp"
#include "./SignedObject.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SignedObject::SignedObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SignedObject::SignedObject(__JniBaseClass arg0, __JniBaseClass arg1, java::security::Signature arg2)
		: __JniBaseClass(
			"java.security.SignedObject",
			"(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jstring SignedObject::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SignedObject::getObject()
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray SignedObject::getSignature()
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean SignedObject::verify(__JniBaseClass arg0, java::security::Signature arg1)
	{
		return callMethod<jboolean>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Signature;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

