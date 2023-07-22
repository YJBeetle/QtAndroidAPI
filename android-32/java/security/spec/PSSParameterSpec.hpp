#pragma once

#include "../../../JString.hpp"
#include "./PSSParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	inline java::security::spec::PSSParameterSpec PSSParameterSpec::DEFAULT()
	{
		return getStaticObjectField(
			"java.security.spec.PSSParameterSpec",
			"DEFAULT",
			"Ljava/security/spec/PSSParameterSpec;"
		);
	}
	inline jint PSSParameterSpec::TRAILER_FIELD_BC()
	{
		return getStaticField<jint>(
			"java.security.spec.PSSParameterSpec",
			"TRAILER_FIELD_BC"
		);
	}
	
	// Constructors
	inline PSSParameterSpec::PSSParameterSpec(jint arg0)
		: JObject(
			"java.security.spec.PSSParameterSpec",
			"(I)V",
			arg0
		) {}
	inline PSSParameterSpec::PSSParameterSpec(JString arg0, JString arg1, JObject arg2, jint arg3, jint arg4)
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
	inline JString PSSParameterSpec::getDigestAlgorithm() const
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JString PSSParameterSpec::getMGFAlgorithm() const
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject PSSParameterSpec::getMGFParameters() const
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline jint PSSParameterSpec::getSaltLength() const
	{
		return callMethod<jint>(
			"getSaltLength",
			"()I"
		);
	}
	inline jint PSSParameterSpec::getTrailerField() const
	{
		return callMethod<jint>(
			"getTrailerField",
			"()I"
		);
	}
	inline JString PSSParameterSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
