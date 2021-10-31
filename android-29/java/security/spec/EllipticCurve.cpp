#include "../../math/BigInteger.hpp"
#include "./EllipticCurve.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	EllipticCurve::EllipticCurve(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EllipticCurve::EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: __JniBaseClass(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	EllipticCurve::EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, jbyteArray arg3)
		: __JniBaseClass(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jboolean EllipticCurve::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	__JniBaseClass EllipticCurve::getField()
	{
		return callObjectMethod(
			"getField",
			"()Ljava/security/spec/ECField;"
		);
	}
	jbyteArray EllipticCurve::getSeed()
	{
		return callObjectMethod(
			"getSeed",
			"()[B"
		).object<jbyteArray>();
	}
	jint EllipticCurve::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

