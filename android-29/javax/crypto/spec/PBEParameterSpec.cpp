#include "./PBEParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	PBEParameterSpec::PBEParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PBEParameterSpec::PBEParameterSpec(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BI)V",
			arg0,
			arg1
		);
	}
	PBEParameterSpec::PBEParameterSpec(jbyteArray arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BILjava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint PBEParameterSpec::getIterationCount()
	{
		return __thiz.callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	QAndroidJniObject PBEParameterSpec::getParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jbyteArray PBEParameterSpec::getSalt()
	{
		return __thiz.callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

