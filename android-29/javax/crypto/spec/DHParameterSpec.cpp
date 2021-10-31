#include "../../../java/math/BigInteger.hpp"
#include "./DHParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	DHParameterSpec::DHParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DHParameterSpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	jint DHParameterSpec::getL()
	{
		return __thiz.callMethod<jint>(
			"getL",
			"()I"
		);
	}
	QAndroidJniObject DHParameterSpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

