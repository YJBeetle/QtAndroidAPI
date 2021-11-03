#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "./MacSpi.hpp"
#include "./Mac.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	Mac::Mac(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::Mac Mac::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0
		);
	}
	javax::crypto::Mac Mac::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0,
			arg1
		);
	}
	javax::crypto::Mac Mac::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;",
			arg0,
			arg1.object()
		);
	}
	jobject Mac::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray Mac::doFinal()
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray Mac::doFinal(jbyteArray arg0)
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	void Mac::doFinal(jbyteArray arg0, jint arg1)
	{
		callMethod<void>(
			"doFinal",
			"([BI)V",
			arg0,
			arg1
		);
	}
	jstring Mac::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Mac::getMacLength()
	{
		return callMethod<jint>(
			"getMacLength",
			"()I"
		);
	}
	java::security::Provider Mac::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Mac::init(JObject arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	void Mac::init(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Mac::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Mac::update(jbyteArray arg0)
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void Mac::update(jbyte arg0)
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Mac::update(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Mac::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

