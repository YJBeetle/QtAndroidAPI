#include "../../math/BigInteger.hpp"
#include "./RSAKeyGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	QAndroidJniObject RSAKeyGenParameterSpec::F0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F0",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::F4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F4",
			"Ljava/math/BigInteger;"
		);
	}
	
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint &arg0, java::math::BigInteger &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint &arg0, java::math::BigInteger &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAKeyGenParameterSpec::getKeyParams()
	{
		return __thiz.callObjectMethod(
			"getKeyParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint RSAKeyGenParameterSpec::getKeysize()
	{
		return __thiz.callMethod<jint>(
			"getKeysize",
			"()I"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

