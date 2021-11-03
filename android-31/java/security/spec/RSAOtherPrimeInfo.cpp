#include "../../math/BigInteger.hpp"
#include "./RSAOtherPrimeInfo.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RSAOtherPrimeInfo::RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.RSAOtherPrimeInfo",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger RSAOtherPrimeInfo::getCrtCoefficient()
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAOtherPrimeInfo::getExponent()
	{
		return callObjectMethod(
			"getExponent",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAOtherPrimeInfo::getPrime()
	{
		return callObjectMethod(
			"getPrime",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

