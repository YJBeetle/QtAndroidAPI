#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.hpp"
#include "./EllipticCurve.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	EllipticCurve::EllipticCurve(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EllipticCurve::EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	EllipticCurve::EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, JByteArray arg3)
		: JObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	jboolean EllipticCurve::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::math::BigInteger EllipticCurve::getA()
	{
		return callObjectMethod(
			"getA",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger EllipticCurve::getB()
	{
		return callObjectMethod(
			"getB",
			"()Ljava/math/BigInteger;"
		);
	}
	JObject EllipticCurve::getField()
	{
		return callObjectMethod(
			"getField",
			"()Ljava/security/spec/ECField;"
		);
	}
	JByteArray EllipticCurve::getSeed()
	{
		return callObjectMethod(
			"getSeed",
			"()[B"
		);
	}
	jint EllipticCurve::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

