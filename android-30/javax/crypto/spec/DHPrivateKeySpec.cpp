#include "../../../java/math/BigInteger.hpp"
#include "./DHPrivateKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	DHPrivateKeySpec::DHPrivateKeySpec(QJniObject obj) : JObject(obj) {}
	
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
	java::math::BigInteger DHPrivateKeySpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPrivateKeySpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DHPrivateKeySpec::getX()
	{
		return callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

