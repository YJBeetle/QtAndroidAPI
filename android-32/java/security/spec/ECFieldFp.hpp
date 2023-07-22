#pragma once

#include "../../../JObject.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./ECFieldFp.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline ECFieldFp::ECFieldFp(java::math::BigInteger arg0)
		: JObject(
			"java.security.spec.ECFieldFp",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ECFieldFp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ECFieldFp::getFieldSize() const
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	inline java::math::BigInteger ECFieldFp::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jint ECFieldFp::hashCode() const
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
