#include "./SecretKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	SecretKeySpec::SecretKeySpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecretKeySpec::SecretKeySpec(jbyteArray arg0, jstring arg1)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	SecretKeySpec::SecretKeySpec(jbyteArray arg0, jint arg1, jint arg2, jstring arg3)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean SecretKeySpec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SecretKeySpec::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray SecretKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring SecretKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SecretKeySpec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

