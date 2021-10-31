#include "../../math/BigInteger.hpp"
#include "./DSAPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	DSAPublicKeySpec::DSAPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DSAPublicKeySpec::DSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.DSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DSAPublicKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getQ()
	{
		return __thiz.callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getY()
	{
		return __thiz.callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

