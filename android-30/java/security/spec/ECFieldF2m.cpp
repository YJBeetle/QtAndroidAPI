#include "../../../JIntArray.hpp"
#include "../../../JObject.hpp"
#include "../../math/BigInteger.hpp"
#include "./ECFieldF2m.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECFieldF2m::ECFieldF2m(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECFieldF2m::ECFieldF2m(jint arg0)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(I)V",
			arg0
		) {}
	ECFieldF2m::ECFieldF2m(jint arg0, JIntArray arg1)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		) {}
	ECFieldF2m::ECFieldF2m(jint arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean ECFieldF2m::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ECFieldF2m::getFieldSize() const
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	jint ECFieldF2m::getM() const
	{
		return callMethod<jint>(
			"getM",
			"()I"
		);
	}
	JIntArray ECFieldF2m::getMidTermsOfReductionPolynomial() const
	{
		return callObjectMethod(
			"getMidTermsOfReductionPolynomial",
			"()[I"
		);
	}
	java::math::BigInteger ECFieldF2m::getReductionPolynomial() const
	{
		return callObjectMethod(
			"getReductionPolynomial",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldF2m::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

