#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Math : public JObject
	{
	public:
		// Fields
		static jdouble E();
		static jdouble PI();
		
		// QJniObject forward
		template<typename ...Ts> explicit Math(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Math(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
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
} // namespace java::lang

