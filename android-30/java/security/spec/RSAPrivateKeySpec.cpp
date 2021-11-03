#include "../../math/BigInteger.hpp"
#include "./RSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	RSAPrivateKeySpec::RSAPrivateKeySpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2)
		: JObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger RSAPrivateKeySpec::getModulus()
	{
		return callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	JObject RSAPrivateKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	java::math::BigInteger RSAPrivateKeySpec::getPrivateExponent()
	{
		return callObjectMethod(
			"getPrivateExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

