#include "../../math/BigInteger.hpp"
#include "./DSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	DSAPrivateKeySpec::DSAPrivateKeySpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DSAPrivateKeySpec::DSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
		: __JniBaseClass(
			"java.security.spec.DSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	java::math::BigInteger DSAPrivateKeySpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getQ()
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAPrivateKeySpec::getX()
	{
		return callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

