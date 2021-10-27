#include "../../../java/math/BigInteger.hpp"
#include "./DHPublicKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	DHPublicKeySpec::DHPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DHPublicKeySpec::DHPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DHPublicKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getY()
	{
		return __thiz.callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

