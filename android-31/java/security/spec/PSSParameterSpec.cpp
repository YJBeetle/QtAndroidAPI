#include "../../../JString.hpp"
#include "./PSSParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	java::security::spec::PSSParameterSpec PSSParameterSpec::DEFAULT()
	{
		return getStaticObjectField(
			"java.security.spec.PSSParameterSpec",
			"DEFAULT",
			"Ljava/security/spec/PSSParameterSpec;"
		);
	}
	jint PSSParameterSpec::TRAILER_FIELD_BC()
	{
		return getStaticField<jint>(
			"java.security.spec.PSSParameterSpec",
			"TRAILER_FIELD_BC"
		);
	}
	
	// Constructors
	PSSParameterSpec::PSSParameterSpec(jint arg0)
		: JObject(
			"java.security.spec.PSSParameterSpec",
			"(I)V",
			arg0
		) {}
	PSSParameterSpec::PSSParameterSpec(JString arg0, JString arg1, JObject arg2, jint arg3, jint arg4)
		: JObject(
			"java.security.spec.PSSParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4
		) {}
	
	// Methods
	JString PSSParameterSpec::getDigestAlgorithm() const
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JString PSSParameterSpec::getMGFAlgorithm() const
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject PSSParameterSpec::getMGFParameters() const
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint PSSParameterSpec::getSaltLength() const
	{
		return callMethod<jint>(
			"getSaltLength",
			"()I"
		);
	}
	jint PSSParameterSpec::getTrailerField() const
	{
		return callMethod<jint>(
			"getTrailerField",
			"()I"
		);
	}
	JString PSSParameterSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

