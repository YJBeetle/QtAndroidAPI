#include "./RC5ParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	RC5ParameterSpec::RC5ParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3)
		: __JniBaseClass(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[B)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
		: __JniBaseClass(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jboolean RC5ParameterSpec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray RC5ParameterSpec::getIV()
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint RC5ParameterSpec::getRounds()
	{
		return callMethod<jint>(
			"getRounds",
			"()I"
		);
	}
	jint RC5ParameterSpec::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jint RC5ParameterSpec::getWordSize()
	{
		return callMethod<jint>(
			"getWordSize",
			"()I"
		);
	}
	jint RC5ParameterSpec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

