#include "./PSSParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	QAndroidJniObject PSSParameterSpec::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.PSSParameterSpec",
			"DEFAULT",
			"Ljava/security/spec/PSSParameterSpec;"
		);
	}
	jint PSSParameterSpec::TRAILER_FIELD_BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.security.spec.PSSParameterSpec",
			"TRAILER_FIELD_BC"
		);
	}
	
	PSSParameterSpec::PSSParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PSSParameterSpec::PSSParameterSpec(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PSSParameterSpec",
			"(I)V",
			arg0
		);
	}
	PSSParameterSpec::PSSParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PSSParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	
	// Methods
	jstring PSSParameterSpec::getDigestAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PSSParameterSpec::getMGFAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PSSParameterSpec::getMGFParameters()
	{
		return __thiz.callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint PSSParameterSpec::getSaltLength()
	{
		return __thiz.callMethod<jint>(
			"getSaltLength",
			"()I"
		);
	}
	jint PSSParameterSpec::getTrailerField()
	{
		return __thiz.callMethod<jint>(
			"getTrailerField",
			"()I"
		);
	}
	jstring PSSParameterSpec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

