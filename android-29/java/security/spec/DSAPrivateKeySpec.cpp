#include "../../math/BigInteger.hpp"
#include "./DSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	DSAPrivateKeySpec::DSAPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DSAPrivateKeySpec::DSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.DSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DSAPrivateKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPrivateKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPrivateKeySpec::getQ()
	{
		return __thiz.callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPrivateKeySpec::getX()
	{
		return __thiz.callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

