#include "../../math/BigInteger.hpp"
#include "./DSAParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	DSAParameterSpec::DSAParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DSAParameterSpec::DSAParameterSpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.DSAParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DSAParameterSpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAParameterSpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAParameterSpec::getQ()
	{
		return __thiz.callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

