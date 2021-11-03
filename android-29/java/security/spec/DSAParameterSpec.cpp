#include "../../math/BigInteger.hpp"
#include "./DSAParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	DSAParameterSpec::DSAParameterSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DSAParameterSpec::DSAParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.DSAParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger DSAParameterSpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAParameterSpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger DSAParameterSpec::getQ() const
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

