#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "../util/Random.def.hpp"
#include "./BigInteger.def.hpp"

namespace java::math
{
	// Fields
	inline java::math::BigInteger BigInteger::ONE()
	{
		return getStaticObjectField(
			"java.math.BigInteger",
			"ONE",
			"Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::TEN()
	{
		return getStaticObjectField(
			"java.math.BigInteger",
			"TEN",
			"Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::TWO()
	{
		return getStaticObjectField(
			"java.math.BigInteger",
			"TWO",
			"Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::ZERO()
	{
		return getStaticObjectField(
			"java.math.BigInteger",
			"ZERO",
			"Ljava/math/BigInteger;"
		);
	}
	
	// Constructors
	inline BigInteger::BigInteger(JByteArray arg0)
		: java::lang::Number(
			"java.math.BigInteger",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline BigInteger::BigInteger(JString arg0)
		: java::lang::Number(
			"java.math.BigInteger",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BigInteger::BigInteger(jint arg0, JByteArray arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	inline BigInteger::BigInteger(jint arg0, java::util::Random arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(ILjava/util/Random;)V",
			arg0,
			arg1.object()
		) {}
	inline BigInteger::BigInteger(JString arg0, jint arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline BigInteger::BigInteger(JByteArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"java.math.BigInteger",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	inline BigInteger::BigInteger(jint arg0, jint arg1, java::util::Random arg2)
		: java::lang::Number(
			"java.math.BigInteger",
			"(IILjava/util/Random;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	inline BigInteger::BigInteger(jint arg0, JByteArray arg1, jint arg2, jint arg3)
		: java::lang::Number(
			"java.math.BigInteger",
			"(I[BII)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline java::math::BigInteger BigInteger::probablePrime(jint arg0, java::util::Random arg1)
	{
		return callStaticObjectMethod(
			"java.math.BigInteger",
			"probablePrime",
			"(ILjava/util/Random;)Ljava/math/BigInteger;",
			arg0,
			arg1.object()
		);
	}
	inline java::math::BigInteger BigInteger::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.math.BigInteger",
			"valueOf",
			"(J)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline java::math::BigInteger BigInteger::abs() const
	{
		return callObjectMethod(
			"abs",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::add(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::and_(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"and",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::andNot(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"andNot",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline jint BigInteger::bitCount() const
	{
		return callMethod<jint>(
			"bitCount",
			"()I"
		);
	}
	inline jint BigInteger::bitLength() const
	{
		return callMethod<jint>(
			"bitLength",
			"()I"
		);
	}
	inline jbyte BigInteger::byteValueExact() const
	{
		return callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	inline java::math::BigInteger BigInteger::clearBit(jint arg0) const
	{
		return callObjectMethod(
			"clearBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline jint BigInteger::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint BigInteger::compareTo(java::math::BigInteger arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigInteger;)I",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::divide(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline JArray BigInteger::divideAndRemainder(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigInteger;)[Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline jdouble BigInteger::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean BigInteger::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::math::BigInteger BigInteger::flipBit(jint arg0) const
	{
		return callObjectMethod(
			"flipBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline jfloat BigInteger::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline java::math::BigInteger BigInteger::gcd(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"gcd",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline jint BigInteger::getLowestSetBit() const
	{
		return callMethod<jint>(
			"getLowestSetBit",
			"()I"
		);
	}
	inline jint BigInteger::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint BigInteger::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jint BigInteger::intValueExact() const
	{
		return callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	inline jboolean BigInteger::isProbablePrime(jint arg0) const
	{
		return callMethod<jboolean>(
			"isProbablePrime",
			"(I)Z",
			arg0
		);
	}
	inline jlong BigInteger::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jlong BigInteger::longValueExact() const
	{
		return callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	inline java::math::BigInteger BigInteger::max(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"max",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::min(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"min",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::mod(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"mod",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::modInverse(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"modInverse",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::modPow(java::math::BigInteger arg0, java::math::BigInteger arg1) const
	{
		return callObjectMethod(
			"modPow",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigInteger BigInteger::multiply(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::negate() const
	{
		return callObjectMethod(
			"negate",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::nextProbablePrime() const
	{
		return callObjectMethod(
			"nextProbablePrime",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::not_() const
	{
		return callObjectMethod(
			"not",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::or_(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"or",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::parallelMultiply(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"parallelMultiply",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::pow(jint arg0) const
	{
		return callObjectMethod(
			"pow",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline java::math::BigInteger BigInteger::remainder(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline java::math::BigInteger BigInteger::setBit(jint arg0) const
	{
		return callObjectMethod(
			"setBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline java::math::BigInteger BigInteger::shiftLeft(jint arg0) const
	{
		return callObjectMethod(
			"shiftLeft",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline java::math::BigInteger BigInteger::shiftRight(jint arg0) const
	{
		return callObjectMethod(
			"shiftRight",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline jshort BigInteger::shortValueExact() const
	{
		return callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	inline jint BigInteger::signum() const
	{
		return callMethod<jint>(
			"signum",
			"()I"
		);
	}
	inline java::math::BigInteger BigInteger::sqrt() const
	{
		return callObjectMethod(
			"sqrt",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JArray BigInteger::sqrtAndRemainder() const
	{
		return callObjectMethod(
			"sqrtAndRemainder",
			"()[Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigInteger::subtract(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	inline jboolean BigInteger::testBit(jint arg0) const
	{
		return callMethod<jboolean>(
			"testBit",
			"(I)Z",
			arg0
		);
	}
	inline JByteArray BigInteger::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JString BigInteger::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JString BigInteger::toString(jint arg0) const
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline java::math::BigInteger BigInteger::xor_(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"xor",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
} // namespace java::math

// Base class headers
#include "../lang/Number.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::math;
#endif
