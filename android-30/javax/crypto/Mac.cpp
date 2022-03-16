#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "./MacSpi.hpp"
#include "./Mac.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	javax::crypto::Mac Mac::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::Mac Mac::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::Mac Mac::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject Mac::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JByteArray Mac::doFinal() const
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		);
	}
	JByteArray Mac::doFinal(JByteArray arg0) const
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	void Mac::doFinal(JByteArray arg0, jint arg1) const
	{
		callMethod<void>(
			"doFinal",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	JString Mac::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	jint Mac::getMacLength() const
	{
		return callMethod<jint>(
			"getMacLength",
			"()I"
		);
	}
	java::security::Provider Mac::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Mac::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	void Mac::init(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Mac::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Mac::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Mac::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Mac::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Mac::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

