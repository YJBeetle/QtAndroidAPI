#include "../../math/BigInteger.hpp"
#include "./DSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	DSAPrivateKeySpec::DSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
		: JObject(
			"java.security.spec.DSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	java::math::BigInteger DSAPrivateKeySpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getQ() const
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getX() const
	{
		return callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

