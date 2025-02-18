#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JObject.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./ECFieldF2m.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline ECFieldF2m::ECFieldF2m(jint arg0)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(I)V",
			arg0
		) {}
	inline ECFieldF2m::ECFieldF2m(jint arg0, JIntArray arg1)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		) {}
	inline ECFieldF2m::ECFieldF2m(jint arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.ECFieldF2m",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean ECFieldF2m::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ECFieldF2m::getFieldSize() const
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	inline jint ECFieldF2m::getM() const
	{
		return callMethod<jint>(
			"getM",
			"()I"
		);
	}
	inline JIntArray ECFieldF2m::getMidTermsOfReductionPolynomial() const
	{
		return callObjectMethod(
			"getMidTermsOfReductionPolynomial",
			"()[I"
		);
	}
	inline java::math::BigInteger ECFieldF2m::getReductionPolynomial() const
	{
		return callObjectMethod(
			"getReductionPolynomial",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jint ECFieldF2m::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
