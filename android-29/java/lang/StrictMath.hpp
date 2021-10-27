#pragma once

#ifndef JAVA_LANG_STRICTMATH
#define JAVA_LANG_STRICTMATH

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class StrictMath : public __JniBaseClass
	{
	public:
		// Fields
		static jdouble E();
		static jdouble PI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jdouble IEEEremainder(jdouble arg0, jdouble arg1);
		static jdouble abs(jdouble arg0);
		static jfloat abs(jfloat arg0);
		static jint abs(jint arg0);
		static jlong abs(jlong arg0);
		static jint absExact(jint arg0);
		static jlong absExact(jlong arg0);
		static jdouble acos(jdouble arg0);
		static jint addExact(jint arg0, jint arg1);
		static jlong addExact(jlong arg0, jlong arg1);
		static jdouble asin(jdouble arg0);
		static jdouble atan(jdouble arg0);
		static jdouble atan2(jdouble arg0, jdouble arg1);
		static jdouble cbrt(jdouble arg0);
		static jdouble ceil(jdouble arg0);
		static jdouble copySign(jdouble arg0, jdouble arg1);
		static jfloat copySign(jfloat arg0, jfloat arg1);
		static jdouble cos(jdouble arg0);
		static jdouble cosh(jdouble arg0);
		static jint decrementExact(jint arg0);
		static jlong decrementExact(jlong arg0);
		static jdouble exp(jdouble arg0);
		static jdouble expm1(jdouble arg0);
		static jdouble floor(jdouble arg0);
		static jint floorDiv(jint arg0, jint arg1);
		static jlong floorDiv(jlong arg0, jint arg1);
		static jlong floorDiv(jlong arg0, jlong arg1);
		static jint floorMod(jint arg0, jint arg1);
		static jint floorMod(jlong arg0, jint arg1);
		static jlong floorMod(jlong arg0, jlong arg1);
		static jdouble fma(jdouble arg0, jdouble arg1, jdouble arg2);
		static jfloat fma(jfloat arg0, jfloat arg1, jfloat arg2);
		static jint getExponent(jdouble arg0);
		static jint getExponent(jfloat arg0);
		static jdouble hypot(jdouble arg0, jdouble arg1);
		static jint incrementExact(jint arg0);
		static jlong incrementExact(jlong arg0);
		static jdouble log(jdouble arg0);
		static jdouble log10(jdouble arg0);
		static jdouble log1p(jdouble arg0);
		static jdouble max(jdouble arg0, jdouble arg1);
		static jfloat max(jfloat arg0, jfloat arg1);
		static jint max(jint arg0, jint arg1);
		static jlong max(jlong arg0, jlong arg1);
		static jdouble min(jdouble arg0, jdouble arg1);
		static jfloat min(jfloat arg0, jfloat arg1);
		static jint min(jint arg0, jint arg1);
		static jlong min(jlong arg0, jlong arg1);
		static jint multiplyExact(jint arg0, jint arg1);
		static jlong multiplyExact(jlong arg0, jint arg1);
		static jlong multiplyExact(jlong arg0, jlong arg1);
		static jlong multiplyFull(jint arg0, jint arg1);
		static jlong multiplyHigh(jlong arg0, jlong arg1);
		static jint negateExact(jint arg0);
		static jlong negateExact(jlong arg0);
		static jdouble nextAfter(jdouble arg0, jdouble arg1);
		static jfloat nextAfter(jfloat arg0, jdouble arg1);
		static jdouble nextDown(jdouble arg0);
		static jfloat nextDown(jfloat arg0);
		static jdouble nextUp(jdouble arg0);
		static jfloat nextUp(jfloat arg0);
		static jdouble pow(jdouble arg0, jdouble arg1);
		static jdouble random();
		static jdouble rint(jdouble arg0);
		static jint round(jfloat arg0);
		static jlong round(jdouble arg0);
		static jdouble scalb(jdouble arg0, jint arg1);
		static jfloat scalb(jfloat arg0, jint arg1);
		static jdouble signum(jdouble arg0);
		static jfloat signum(jfloat arg0);
		static jdouble sin(jdouble arg0);
		static jdouble sinh(jdouble arg0);
		static jdouble sqrt(jdouble arg0);
		static jint subtractExact(jint arg0, jint arg1);
		static jlong subtractExact(jlong arg0, jlong arg1);
		static jdouble tan(jdouble arg0);
		static jdouble tanh(jdouble arg0);
		static jdouble toDegrees(jdouble arg0);
		static jint toIntExact(jlong arg0);
		static jdouble toRadians(jdouble arg0);
		static jdouble ulp(jdouble arg0);
		static jfloat ulp(jfloat arg0);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	jdouble StrictMath::E()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.StrictMath",
			"E"
		);
	}
	jdouble StrictMath::PI()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.StrictMath",
			"PI"
		);
	}
	
	// Constructors
	void StrictMath::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StrictMath",
			"(V)V");
	}
	
	// Methods
	jdouble StrictMath::IEEEremainder(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"IEEEremainder",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::abs(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"abs",
			"(D)D",
			arg0
		);
	}
	jfloat StrictMath::abs(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"abs",
			"(F)F",
			arg0
		);
	}
	jint StrictMath::abs(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"abs",
			"(I)I",
			arg0
		);
	}
	jlong StrictMath::abs(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"abs",
			"(J)J",
			arg0
		);
	}
	jint StrictMath::absExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"absExact",
			"(I)I",
			arg0
		);
	}
	jlong StrictMath::absExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"absExact",
			"(J)J",
			arg0
		);
	}
	jdouble StrictMath::acos(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"acos",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::addExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"addExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::addExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"addExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::asin(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"asin",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::atan(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"atan",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::atan2(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"atan2",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::cbrt(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cbrt",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::ceil(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"ceil",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::copySign(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"copySign",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat StrictMath::copySign(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"copySign",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::cos(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cos",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::cosh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"cosh",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::decrementExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"decrementExact",
			"(I)I",
			arg0
		);
	}
	jlong StrictMath::decrementExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"decrementExact",
			"(J)J",
			arg0
		);
	}
	jdouble StrictMath::exp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"exp",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::expm1(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"expm1",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::floor(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"floor",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::floorDiv(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorDiv",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::floorDiv(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorDiv",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong StrictMath::floorDiv(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorDiv",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint StrictMath::floorMod(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorMod",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint StrictMath::floorMod(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"floorMod",
			"(JI)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::floorMod(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"floorMod",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::fma(jdouble arg0, jdouble arg1, jdouble arg2)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"fma",
			"(DDD)D",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat StrictMath::fma(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"fma",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint StrictMath::getExponent(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"getExponent",
			"(D)I",
			arg0
		);
	}
	jint StrictMath::getExponent(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"getExponent",
			"(F)I",
			arg0
		);
	}
	jdouble StrictMath::hypot(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"hypot",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jint StrictMath::incrementExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"incrementExact",
			"(I)I",
			arg0
		);
	}
	jlong StrictMath::incrementExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"incrementExact",
			"(J)J",
			arg0
		);
	}
	jdouble StrictMath::log(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::log10(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log10",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::log1p(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"log1p",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::max(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat StrictMath::max(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint StrictMath::max(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::max(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::min(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat StrictMath::min(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint StrictMath::min(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::min(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint StrictMath::multiplyExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::multiplyExact(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong StrictMath::multiplyExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong StrictMath::multiplyFull(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyFull",
			"(II)J",
			arg0,
			arg1
		);
	}
	jlong StrictMath::multiplyHigh(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"multiplyHigh",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint StrictMath::negateExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"negateExact",
			"(I)I",
			arg0
		);
	}
	jlong StrictMath::negateExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"negateExact",
			"(J)J",
			arg0
		);
	}
	jdouble StrictMath::nextAfter(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextAfter",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat StrictMath::nextAfter(jfloat arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextAfter",
			"(FD)F",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::nextDown(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextDown",
			"(D)D",
			arg0
		);
	}
	jfloat StrictMath::nextDown(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextDown",
			"(F)F",
			arg0
		);
	}
	jdouble StrictMath::nextUp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"nextUp",
			"(D)D",
			arg0
		);
	}
	jfloat StrictMath::nextUp(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"nextUp",
			"(F)F",
			arg0
		);
	}
	jdouble StrictMath::pow(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"pow",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::random()
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"random",
			"()D"
		);
	}
	jdouble StrictMath::rint(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"rint",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::round(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"round",
			"(F)I",
			arg0
		);
	}
	jlong StrictMath::round(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"round",
			"(D)J",
			arg0
		);
	}
	jdouble StrictMath::scalb(jdouble arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"scalb",
			"(DI)D",
			arg0,
			arg1
		);
	}
	jfloat StrictMath::scalb(jfloat arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"scalb",
			"(FI)F",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::signum(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"signum",
			"(D)D",
			arg0
		);
	}
	jfloat StrictMath::signum(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"signum",
			"(F)F",
			arg0
		);
	}
	jdouble StrictMath::sin(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sin",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::sinh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sinh",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::sqrt(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"sqrt",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::subtractExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"subtractExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong StrictMath::subtractExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.StrictMath",
			"subtractExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble StrictMath::tan(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"tan",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::tanh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"tanh",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::toDegrees(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"toDegrees",
			"(D)D",
			arg0
		);
	}
	jint StrictMath::toIntExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.StrictMath",
			"toIntExact",
			"(J)I",
			arg0
		);
	}
	jdouble StrictMath::toRadians(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"toRadians",
			"(D)D",
			arg0
		);
	}
	jdouble StrictMath::ulp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.StrictMath",
			"ulp",
			"(D)D",
			arg0
		);
	}
	jfloat StrictMath::ulp(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.StrictMath",
			"ulp",
			"(F)F",
			arg0
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StrictMath : public __jni_impl::java::lang::StrictMath
	{
	public:
		StrictMath(QAndroidJniObject obj) { __thiz = obj; }
		StrictMath()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_STRICTMATH

