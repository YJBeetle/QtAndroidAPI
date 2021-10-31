#include "./RC2ParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	RC2ParameterSpec::RC2ParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RC2ParameterSpec::RC2ParameterSpec(jint arg0)
		: __JniBaseClass(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I)V",
			arg0
		) {}
	RC2ParameterSpec::RC2ParameterSpec(jint arg0, jbyteArray arg1)
		: __JniBaseClass(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[B)V",
			arg0,
			arg1
		) {}
	RC2ParameterSpec::RC2ParameterSpec(jint arg0, jbyteArray arg1, jint arg2)
		: __JniBaseClass(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean RC2ParameterSpec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RC2ParameterSpec::getEffectiveKeyBits()
	{
		return callMethod<jint>(
			"getEffectiveKeyBits",
			"()I"
		);
	}
	jbyteArray RC2ParameterSpec::getIV()
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint RC2ParameterSpec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

