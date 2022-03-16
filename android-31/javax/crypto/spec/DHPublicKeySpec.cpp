#include "../../../java/math/BigInteger.hpp"
#include "./DHPublicKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	DHPublicKeySpec::DHPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"javax.crypto.spec.DHPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger DHPublicKeySpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPublicKeySpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPublicKeySpec::getY() const
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

