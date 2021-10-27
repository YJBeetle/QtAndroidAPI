#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Math : public __JniBaseClass
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
	jdouble Math::E()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Math",
			"E"
		);
	}
	jdouble Math::PI()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Math",
			"PI"
		);
	}
	
	// Constructors
	void Math::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Math",
			"(V)V");
	}
	
	// Methods
	jdouble Math::IEEEremainder(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"IEEEremainder",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Math::abs(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"abs",
			"(D)D",
			arg0
		);
	}
	jfloat Math::abs(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"abs",
			"(F)F",
			arg0
		);
	}
	jint Math::abs(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"abs",
			"(I)I",
			arg0
		);
	}
	jlong Math::abs(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"abs",
			"(J)J",
			arg0
		);
	}
	jint Math::absExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"absExact",
			"(I)I",
			arg0
		);
	}
	jlong Math::absExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"absExact",
			"(J)J",
			arg0
		);
	}
	jdouble Math::acos(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"acos",
			"(D)D",
			arg0
		);
	}
	jint Math::addExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"addExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::addExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"addExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble Math::asin(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"asin",
			"(D)D",
			arg0
		);
	}
	jdouble Math::atan(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"atan",
			"(D)D",
			arg0
		);
	}
	jdouble Math::atan2(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"atan2",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Math::cbrt(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"cbrt",
			"(D)D",
			arg0
		);
	}
	jdouble Math::ceil(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"ceil",
			"(D)D",
			arg0
		);
	}
	jdouble Math::copySign(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"copySign",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat Math::copySign(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"copySign",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jdouble Math::cos(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"cos",
			"(D)D",
			arg0
		);
	}
	jdouble Math::cosh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"cosh",
			"(D)D",
			arg0
		);
	}
	jint Math::decrementExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"decrementExact",
			"(I)I",
			arg0
		);
	}
	jlong Math::decrementExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"decrementExact",
			"(J)J",
			arg0
		);
	}
	jdouble Math::exp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"exp",
			"(D)D",
			arg0
		);
	}
	jdouble Math::expm1(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"expm1",
			"(D)D",
			arg0
		);
	}
	jdouble Math::floor(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"floor",
			"(D)D",
			arg0
		);
	}
	jint Math::floorDiv(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"floorDiv",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::floorDiv(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"floorDiv",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong Math::floorDiv(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"floorDiv",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint Math::floorMod(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"floorMod",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Math::floorMod(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"floorMod",
			"(JI)I",
			arg0,
			arg1
		);
	}
	jlong Math::floorMod(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"floorMod",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble Math::fma(jdouble arg0, jdouble arg1, jdouble arg2)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"fma",
			"(DDD)D",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Math::fma(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"fma",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint Math::getExponent(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"getExponent",
			"(D)I",
			arg0
		);
	}
	jint Math::getExponent(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"getExponent",
			"(F)I",
			arg0
		);
	}
	jdouble Math::hypot(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"hypot",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jint Math::incrementExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"incrementExact",
			"(I)I",
			arg0
		);
	}
	jlong Math::incrementExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"incrementExact",
			"(J)J",
			arg0
		);
	}
	jdouble Math::log(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"log",
			"(D)D",
			arg0
		);
	}
	jdouble Math::log10(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"log10",
			"(D)D",
			arg0
		);
	}
	jdouble Math::log1p(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"log1p",
			"(D)D",
			arg0
		);
	}
	jdouble Math::max(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat Math::max(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint Math::max(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::max(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble Math::min(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat Math::min(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint Math::min(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::min(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint Math::multiplyExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"multiplyExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::multiplyExact(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyExact",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong Math::multiplyExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong Math::multiplyFull(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyFull",
			"(II)J",
			arg0,
			arg1
		);
	}
	jlong Math::multiplyHigh(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"multiplyHigh",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint Math::negateExact(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"negateExact",
			"(I)I",
			arg0
		);
	}
	jlong Math::negateExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"negateExact",
			"(J)J",
			arg0
		);
	}
	jdouble Math::nextAfter(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextAfter",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat Math::nextAfter(jfloat arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextAfter",
			"(FD)F",
			arg0,
			arg1
		);
	}
	jdouble Math::nextDown(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextDown",
			"(D)D",
			arg0
		);
	}
	jfloat Math::nextDown(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextDown",
			"(F)F",
			arg0
		);
	}
	jdouble Math::nextUp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"nextUp",
			"(D)D",
			arg0
		);
	}
	jfloat Math::nextUp(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"nextUp",
			"(F)F",
			arg0
		);
	}
	jdouble Math::pow(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"pow",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Math::random()
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"random",
			"()D"
		);
	}
	jdouble Math::rint(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"rint",
			"(D)D",
			arg0
		);
	}
	jint Math::round(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"round",
			"(F)I",
			arg0
		);
	}
	jlong Math::round(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"round",
			"(D)J",
			arg0
		);
	}
	jdouble Math::scalb(jdouble arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"scalb",
			"(DI)D",
			arg0,
			arg1
		);
	}
	jfloat Math::scalb(jfloat arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"scalb",
			"(FI)F",
			arg0,
			arg1
		);
	}
	jdouble Math::signum(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"signum",
			"(D)D",
			arg0
		);
	}
	jfloat Math::signum(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"signum",
			"(F)F",
			arg0
		);
	}
	jdouble Math::sin(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"sin",
			"(D)D",
			arg0
		);
	}
	jdouble Math::sinh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"sinh",
			"(D)D",
			arg0
		);
	}
	jdouble Math::sqrt(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"sqrt",
			"(D)D",
			arg0
		);
	}
	jint Math::subtractExact(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"subtractExact",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Math::subtractExact(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Math",
			"subtractExact",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jdouble Math::tan(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"tan",
			"(D)D",
			arg0
		);
	}
	jdouble Math::tanh(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"tanh",
			"(D)D",
			arg0
		);
	}
	jdouble Math::toDegrees(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"toDegrees",
			"(D)D",
			arg0
		);
	}
	jint Math::toIntExact(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Math",
			"toIntExact",
			"(J)I",
			arg0
		);
	}
	jdouble Math::toRadians(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"toRadians",
			"(D)D",
			arg0
		);
	}
	jdouble Math::ulp(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Math",
			"ulp",
			"(D)D",
			arg0
		);
	}
	jfloat Math::ulp(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Math",
			"ulp",
			"(F)F",
			arg0
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Math : public __jni_impl::java::lang::Math
	{
	public:
		Math(QAndroidJniObject obj) { __thiz = obj; }
		Math()
		{
			__constructor();
		}
	};
} // namespace java::lang

