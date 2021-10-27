#include "../../../java/math/BigInteger.hpp"
#include "./DHPrivateKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	DHPrivateKeySpec::DHPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DHPrivateKeySpec::DHPrivateKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DHPrivateKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getX()
	{
		return __thiz.callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

