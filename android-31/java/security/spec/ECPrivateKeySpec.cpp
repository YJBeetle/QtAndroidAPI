#include "../../math/BigInteger.hpp"
#include "./ECParameterSpec.hpp"
#include "./ECPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECPrivateKeySpec::ECPrivateKeySpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECPrivateKeySpec::ECPrivateKeySpec(java::math::BigInteger arg0, java::security::spec::ECParameterSpec arg1)
		: JObject(
			"java.security.spec.ECPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::security::spec::ECParameterSpec ECPrivateKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	java::math::BigInteger ECPrivateKeySpec::getS()
	{
		return callObjectMethod(
			"getS",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

