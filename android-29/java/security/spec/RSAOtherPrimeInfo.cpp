#include "../../math/BigInteger.hpp"
#include "./RSAOtherPrimeInfo.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: __JniBaseClass(
			"java.security.spec.RSAOtherPrimeInfo",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject RSAOtherPrimeInfo::getCrtCoefficient()
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getExponent()
	{
		return callObjectMethod(
			"getExponent",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getPrime()
	{
		return callObjectMethod(
			"getPrime",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

