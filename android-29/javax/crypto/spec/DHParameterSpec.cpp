#include "../../../java/math/BigInteger.hpp"
#include "./DHParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	DHParameterSpec::DHParameterSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	java::math::BigInteger DHParameterSpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	jint DHParameterSpec::getL()
	{
		return callMethod<jint>(
			"getL",
			"()I"
		);
	}
	java::math::BigInteger DHParameterSpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

