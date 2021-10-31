#include "../../math/BigInteger.hpp"
#include "./ECFieldF2m.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECFieldF2m::ECFieldF2m(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECFieldF2m::ECFieldF2m(jint arg0)
		: __JniBaseClass(
			"java.security.spec.ECFieldF2m",
			"(I)V",
			arg0
		) {}
	ECFieldF2m::ECFieldF2m(jint arg0, jintArray arg1)
		: __JniBaseClass(
			"java.security.spec.ECFieldF2m",
			"(I[I)V",
			arg0,
			arg1
		) {}
	ECFieldF2m::ECFieldF2m(jint arg0, java::math::BigInteger arg1)
		: __JniBaseClass(
			"java.security.spec.ECFieldF2m",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean ECFieldF2m::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldF2m::getFieldSize()
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	jint ECFieldF2m::getM()
	{
		return callMethod<jint>(
			"getM",
			"()I"
		);
	}
	jintArray ECFieldF2m::getMidTermsOfReductionPolynomial()
	{
		return callObjectMethod(
			"getMidTermsOfReductionPolynomial",
			"()[I"
		).object<jintArray>();
	}
	java::math::BigInteger ECFieldF2m::getReductionPolynomial()
	{
		return callObjectMethod(
			"getReductionPolynomial",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldF2m::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

