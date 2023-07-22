#pragma once

#include "./Math.def.hpp"

namespace java::lang
{
	// Fields
	inline jdouble Math::E()
	{
		return getStaticField<jdouble>(
			"java.lang.Math",
			"E"
		);
	}
	inline jdouble Math::PI()
	{
		return getStaticField<jdouble>(
			"java.lang.Math",
			"PI"
		);
	}
	inline jdouble Math::TAU()
	{
		return getStaticField<jdouble>(
			"java.lang.Math",
			"TAU"
		);
	}
	
	// Constructors
	
	// Methods
	inline jdouble Math::IEEEremainder(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"IEEEremainder",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble Math::abs(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"abs",
			"(D)D",
			arg0
		);
	}
	inline jfloat Math::abs(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"abs",
			"(F)F",
			arg0
		);
	}
	inline jint Math::abs(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"abs",
			"(I)I",
			arg0
		);
	}
	inline jlong Math::abs(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"abs",
			"(J)J",
			arg0
		);
	}
	inline jint Math::absExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"absExact",
			"(I)I",
			arg0
		);
	}
	inline jlong Math::absExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"absExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble Math::acos(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"acos",
			"(D)D",
			arg0
		);
	}
	inline jint Math::addExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"addExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::addExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"addExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::asin(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"asin",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::atan(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"atan",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::atan2(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"atan2",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble Math::cbrt(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"cbrt",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::ceil(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"ceil",
			"(D)D",
			arg0
		);
	}
	inline jint Math::ceilDiv(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"ceilDiv",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::ceilDiv(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"ceilDiv",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong Math::ceilDiv(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"ceilDiv",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::ceilDivExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"ceilDivExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::ceilDivExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"ceilDivExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::ceilMod(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"ceilMod",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Math::ceilMod(jlong arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"ceilMod",
			"(JI)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::ceilMod(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"ceilMod",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::copySign(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"copySign",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat Math::copySign(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"copySign",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jdouble Math::cos(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"cos",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::cosh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"cosh",
			"(D)D",
			arg0
		);
	}
	inline jint Math::decrementExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"decrementExact",
			"(I)I",
			arg0
		);
	}
	inline jlong Math::decrementExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"decrementExact",
			"(J)J",
			arg0
		);
	}
	inline jint Math::divideExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"divideExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::divideExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"divideExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::exp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"exp",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::expm1(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"expm1",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::floor(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"floor",
			"(D)D",
			arg0
		);
	}
	inline jint Math::floorDiv(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"floorDiv",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::floorDiv(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"floorDiv",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong Math::floorDiv(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"floorDiv",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::floorDivExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"floorDivExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::floorDivExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"floorDivExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::floorMod(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"floorMod",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Math::floorMod(jlong arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"floorMod",
			"(JI)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::floorMod(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"floorMod",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::fma(jdouble arg0, jdouble arg1, jdouble arg2)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"fma",
			"(DDD)D",
			arg0,
			arg1,
			arg2
		);
	}
	inline jfloat Math::fma(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"fma",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Math::getExponent(jdouble arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"getExponent",
			"(D)I",
			arg0
		);
	}
	inline jint Math::getExponent(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"getExponent",
			"(F)I",
			arg0
		);
	}
	inline jdouble Math::hypot(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"hypot",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jint Math::incrementExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"incrementExact",
			"(I)I",
			arg0
		);
	}
	inline jlong Math::incrementExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"incrementExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble Math::log(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"log",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::log10(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"log10",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::log1p(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"log1p",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::max(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat Math::max(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint Math::max(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::max(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::min(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat Math::min(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint Math::min(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::min(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::multiplyExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"multiplyExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::multiplyExact(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyExact",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong Math::multiplyExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong Math::multiplyFull(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyFull",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline jlong Math::multiplyHigh(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyHigh",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Math::negateExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"negateExact",
			"(I)I",
			arg0
		);
	}
	inline jlong Math::negateExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"negateExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble Math::nextAfter(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextAfter",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat Math::nextAfter(jfloat arg0, jdouble arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextAfter",
			"(FD)F",
			arg0,
			arg1
		);
	}
	inline jdouble Math::nextDown(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextDown",
			"(D)D",
			arg0
		);
	}
	inline jfloat Math::nextDown(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextDown",
			"(F)F",
			arg0
		);
	}
	inline jdouble Math::nextUp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextUp",
			"(D)D",
			arg0
		);
	}
	inline jfloat Math::nextUp(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextUp",
			"(F)F",
			arg0
		);
	}
	inline jdouble Math::pow(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"pow",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble Math::random()
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"random",
			"()D"
		);
	}
	inline jdouble Math::rint(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"rint",
			"(D)D",
			arg0
		);
	}
	inline jint Math::round(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"round",
			"(F)I",
			arg0
		);
	}
	inline jlong Math::round(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"round",
			"(D)J",
			arg0
		);
	}
	inline jdouble Math::scalb(jdouble arg0, jint arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"scalb",
			"(DI)D",
			arg0,
			arg1
		);
	}
	inline jfloat Math::scalb(jfloat arg0, jint arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"scalb",
			"(FI)F",
			arg0,
			arg1
		);
	}
	inline jdouble Math::signum(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"signum",
			"(D)D",
			arg0
		);
	}
	inline jfloat Math::signum(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"signum",
			"(F)F",
			arg0
		);
	}
	inline jdouble Math::sin(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"sin",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::sinh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"sinh",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::sqrt(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"sqrt",
			"(D)D",
			arg0
		);
	}
	inline jint Math::subtractExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"subtractExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Math::subtractExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"subtractExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble Math::tan(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"tan",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::tanh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"tanh",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::toDegrees(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"toDegrees",
			"(D)D",
			arg0
		);
	}
	inline jint Math::toIntExact(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Math",
			"toIntExact",
			"(J)I",
			arg0
		);
	}
	inline jdouble Math::toRadians(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"toRadians",
			"(D)D",
			arg0
		);
	}
	inline jdouble Math::ulp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Math",
			"ulp",
			"(D)D",
			arg0
		);
	}
	inline jfloat Math::ulp(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Math",
			"ulp",
			"(F)F",
			arg0
		);
	}
	inline jlong Math::unsignedMultiplyHigh(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Math",
			"unsignedMultiplyHigh",
			"(JJ)J",
			arg0,
			arg1
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
