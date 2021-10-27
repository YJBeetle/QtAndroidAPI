#include "../io/ObjectInputStream.hpp"
#include "./Signature.hpp"
#include "./SignedObject.hpp"

namespace java::security
{
	// Fields
	
	SignedObject::SignedObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SignedObject::SignedObject(__JniBaseClass &arg0, __JniBaseClass &arg1, java::security::Signature &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignedObject",
			"(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jstring SignedObject::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SignedObject::getObject()
	{
		return __thiz.callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray SignedObject::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean SignedObject::verify(__JniBaseClass arg0, java::security::Signature arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Signature;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security

