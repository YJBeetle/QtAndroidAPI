#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SecretKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	SecretKeySpec::SecretKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecretKeySpec::SecretKeySpec(JByteArray arg0, JString arg1)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	SecretKeySpec::SecretKeySpec(JByteArray arg0, jint arg1, jint arg2, JString arg3)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jstring>()
		) {}
	
	// Methods
	jboolean SecretKeySpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SecretKeySpec::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JByteArray SecretKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString SecretKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	jint SecretKeySpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

