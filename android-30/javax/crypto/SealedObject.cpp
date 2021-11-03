#include "../../JByteArray.hpp"
#include "../../java/io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Cipher.hpp"
#include "./SealedObject.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	SealedObject::SealedObject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SealedObject::SealedObject(JObject arg0, javax::crypto::Cipher arg1)
		: JObject(
			"javax.crypto.SealedObject",
			"(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JString SealedObject::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject SealedObject::getObject(JObject arg0)
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject SealedObject::getObject(javax::crypto::Cipher arg0)
	{
		return callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject SealedObject::getObject(JObject arg0, JString arg1)
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace javax::crypto

