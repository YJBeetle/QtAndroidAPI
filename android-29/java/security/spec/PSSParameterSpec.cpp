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
	
	// QAndroidJniObject forward
	PSSParameterSpec::PSSParameterSpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PSSParameterSpec::PSSParameterSpec(jint arg0)
		: __JniBaseClass(
			"java.security.spec.PSSParameterSpec",
			"(I)V",
			arg0
		) {}
	PSSParameterSpec::PSSParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"java.security.spec.PSSParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4
		) {}
	
	// Methods
	jstring PSSParameterSpec::getDigestAlgorithm()
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PSSParameterSpec::getMGFAlgorithm()
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass PSSParameterSpec::getMGFParameters()
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint PSSParameterSpec::getSaltLength()
	{
		return callMethod<jint>(
			"getSaltLength",
			"()I"
		);
	}
	jint PSSParameterSpec::getTrailerField()
	{
		return callMethod<jint>(
			"getTrailerField",
			"()I"
		);
	}
	jstring PSSParameterSpec::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

