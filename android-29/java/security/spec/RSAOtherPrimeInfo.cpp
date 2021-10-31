#include "../../math/BigInteger.hpp"
#include "./RSAOtherPrimeInfo.hpp"

namespace java::security::spec
{
	// Fields
	
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAOtherPrimeInfo",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAOtherPrimeInfo::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getExponent()
	{
		return __thiz.callObjectMethod(
			"getExponent",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getPrime()
	{
		return __thiz.callObjectMethod(
			"getPrime",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

