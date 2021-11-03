#include "../../JByteArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Signature.hpp"
#include "./SignedObject.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SignedObject::SignedObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignedObject::SignedObject(JObject arg0, JObject arg1, java::security::Signature arg2)
		: JObject(
			"java.security.SignedObject",
			"(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	JString SignedObject::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject SignedObject::getObject() const
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		);
	}
	JByteArray SignedObject::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	jboolean SignedObject::verify(JObject arg0, java::security::Signature arg1) const
	{
		return callMethod<jboolean>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Signature;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

