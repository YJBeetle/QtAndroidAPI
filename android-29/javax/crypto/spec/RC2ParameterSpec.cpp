#include "./RC2ParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	RC2ParameterSpec::RC2ParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RC2ParameterSpec::RC2ParameterSpec(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I)V",
			arg0
		);
	}
	RC2ParameterSpec::RC2ParameterSpec(jint &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	RC2ParameterSpec::RC2ParameterSpec(jint &arg0, jbyteArray &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean RC2ParameterSpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RC2ParameterSpec::getEffectiveKeyBits()
	{
		return __thiz.callMethod<jint>(
			"getEffectiveKeyBits",
			"()I"
		);
	}
	jbyteArray RC2ParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint RC2ParameterSpec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

