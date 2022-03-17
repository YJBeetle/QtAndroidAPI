#pragma once

#include "./StrictMath.def.hpp"

namespace java::lang
{
	// Fields
	inline jdouble StrictMath::E()
	{
		return getStaticField<jdouble>(
			"java.lang.StrictMath",
			"E"
		);
	}
	inline jdouble StrictMath::PI()
	{
		return getStaticField<jdouble>(
			"java.lang.StrictMath",
			"PI"
		);
	}
	
	// Constructors
	
	// Methods
	inline jdouble StrictMath::IEEEremainder(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"IEEEremainder",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::abs(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"abs",
			"(D)D",
			arg0
		);
	}
	inline jfloat StrictMath::abs(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"abs",
			"(F)F",
			arg0
		);
	}
	inline jint StrictMath::abs(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"abs",
			"(I)I",
			arg0
		);
	}
	inline jlong StrictMath::abs(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"abs",
			"(J)J",
			arg0
		);
	}
	inline jint StrictMath::absExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"absExact",
			"(I)I",
			arg0
		);
	}
	inline jlong StrictMath::absExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"absExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble StrictMath::acos(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"acos",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::addExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"addExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::addExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"addExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::asin(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"asin",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::atan(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"atan",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::atan2(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"atan2",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::cbrt(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cbrt",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::ceil(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"ceil",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::copySign(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"copySign",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat StrictMath::copySign(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"copySign",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::cos(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cos",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::cosh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cosh",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::decrementExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"decrementExact",
			"(I)I",
			arg0
		);
	}
	inline jlong StrictMath::decrementExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"decrementExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble StrictMath::exp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"exp",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::expm1(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"expm1",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::floor(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"floor",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::floorDiv(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorDiv",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::floorDiv(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorDiv",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::floorDiv(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorDiv",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::floorMod(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorMod",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::floorMod(jlong arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorMod",
			"(JI)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::floorMod(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorMod",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::fma(jdouble arg0, jdouble arg1, jdouble arg2)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"fma",
			"(DDD)D",
			arg0,
			arg1,
			arg2
		);
	}
	inline jfloat StrictMath::fma(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"fma",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint StrictMath::getExponent(jdouble arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"getExponent",
			"(D)I",
			arg0
		);
	}
	inline jint StrictMath::getExponent(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"getExponent",
			"(F)I",
			arg0
		);
	}
	inline jdouble StrictMath::hypot(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"hypot",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::incrementExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"incrementExact",
			"(I)I",
			arg0
		);
	}
	inline jlong StrictMath::incrementExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"incrementExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble StrictMath::log(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::log10(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log10",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::log1p(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log1p",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::max(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat StrictMath::max(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::max(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::max(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::min(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat StrictMath::min(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::min(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::min(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::multiplyExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::multiplyExact(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::multiplyExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::multiplyFull(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyFull",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::multiplyHigh(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyHigh",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint StrictMath::negateExact(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"negateExact",
			"(I)I",
			arg0
		);
	}
	inline jlong StrictMath::negateExact(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"negateExact",
			"(J)J",
			arg0
		);
	}
	inline jdouble StrictMath::nextAfter(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextAfter",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat StrictMath::nextAfter(jfloat arg0, jdouble arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextAfter",
			"(FD)F",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::nextDown(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextDown",
			"(D)D",
			arg0
		);
	}
	inline jfloat StrictMath::nextDown(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextDown",
			"(F)F",
			arg0
		);
	}
	inline jdouble StrictMath::nextUp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextUp",
			"(D)D",
			arg0
		);
	}
	inline jfloat StrictMath::nextUp(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextUp",
			"(F)F",
			arg0
		);
	}
	inline jdouble StrictMath::pow(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"pow",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::random()
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"random",
			"()D"
		);
	}
	inline jdouble StrictMath::rint(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"rint",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::round(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"round",
			"(F)I",
			arg0
		);
	}
	inline jlong StrictMath::round(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"round",
			"(D)J",
			arg0
		);
	}
	inline jdouble StrictMath::scalb(jdouble arg0, jint arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"scalb",
			"(DI)D",
			arg0,
			arg1
		);
	}
	inline jfloat StrictMath::scalb(jfloat arg0, jint arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"scalb",
			"(FI)F",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::signum(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"signum",
			"(D)D",
			arg0
		);
	}
	inline jfloat StrictMath::signum(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"signum",
			"(F)F",
			arg0
		);
	}
	inline jdouble StrictMath::sin(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sin",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::sinh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sinh",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::sqrt(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sqrt",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::subtractExact(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"subtractExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong StrictMath::subtractExact(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"subtractExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jdouble StrictMath::tan(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"tan",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::tanh(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"tanh",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::toDegrees(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"toDegrees",
			"(D)D",
			arg0
		);
	}
	inline jint StrictMath::toIntExact(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.StrictMath",
			"toIntExact",
			"(J)I",
			arg0
		);
	}
	inline jdouble StrictMath::toRadians(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"toRadians",
			"(D)D",
			arg0
		);
	}
	inline jdouble StrictMath::ulp(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"ulp",
			"(D)D",
			arg0
		);
	}
	inline jfloat StrictMath::ulp(jfloat arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"ulp",
			"(F)F",
			arg0
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
