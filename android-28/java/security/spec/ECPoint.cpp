#include "../../math/BigInteger.hpp"
#include "./ECPoint.hpp"

namespace java::security::spec
{
	// Fields
	java::security::spec::ECPoint ECPoint::POINT_INFINITY()
	{
		return getStaticObjectField(
			"java.security.spec.ECPoint",
			"POINT_INFINITY",
			"Ljava/security/spec/ECPoint;"
		);
	}
	
	// QJniObject forward
	ECPoint::ECPoint(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECPoint::ECPoint(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.ECPoint",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean ECPoint::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::math::BigInteger ECPoint::getAffineX()
	{
		return callObjectMethod(
			"getAffineX",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger ECPoint::getAffineY()
	{
		return callObjectMethod(
			"getAffineY",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECPoint::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

