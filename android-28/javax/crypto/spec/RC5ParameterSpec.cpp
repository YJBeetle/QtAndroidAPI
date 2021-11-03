#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "./RC5ParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	RC5ParameterSpec::RC5ParameterSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[B)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		) {}
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		) {}
	
	// Methods
	jboolean RC5ParameterSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray RC5ParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	jint RC5ParameterSpec::getRounds() const
	{
		return callMethod<jint>(
			"getRounds",
			"()I"
		);
	}
	jint RC5ParameterSpec::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jint RC5ParameterSpec::getWordSize() const
	{
		return callMethod<jint>(
			"getWordSize",
			"()I"
		);
	}
	jint RC5ParameterSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

