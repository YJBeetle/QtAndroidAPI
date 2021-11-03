#include "./PBEParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PBEParameterSpec::PBEParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PBEParameterSpec::PBEParameterSpec(jbyteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BI)V",
			arg0,
			arg1
		) {}
	PBEParameterSpec::PBEParameterSpec(jbyteArray arg0, jint arg1, JObject arg2)
		: JObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BILjava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	jint PBEParameterSpec::getIterationCount()
	{
		return callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	JObject PBEParameterSpec::getParameterSpec()
	{
		return callObjectMethod(
			"getParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jbyteArray PBEParameterSpec::getSalt()
	{
		return callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

