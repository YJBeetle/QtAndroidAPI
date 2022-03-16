#include "../../../java/math/BigInteger.hpp"
#include "./DHPrivateKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	DHPrivateKeySpec::DHPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"javax.crypto.spec.DHPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger DHPrivateKeySpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPrivateKeySpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPrivateKeySpec::getX() const
	{
		return callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

