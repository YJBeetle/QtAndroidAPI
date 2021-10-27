#include "../../math/BigInteger.hpp"
#include "./ECFieldF2m.hpp"

namespace java::security::spec
{
	// Fields
	
	ECFieldF2m::ECFieldF2m(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECFieldF2m::ECFieldF2m(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(I)V",
			arg0
		);
	}
	ECFieldF2m::ECFieldF2m(jint &arg0, jintArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	ECFieldF2m::ECFieldF2m(jint &arg0, java::math::BigInteger &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECFieldF2m::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldF2m::getFieldSize()
	{
		return __thiz.callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	jint ECFieldF2m::getM()
	{
		return __thiz.callMethod<jint>(
			"getM",
			"()I"
		);
	}
	jintArray ECFieldF2m::getMidTermsOfReductionPolynomial()
	{
		return __thiz.callObjectMethod(
			"getMidTermsOfReductionPolynomial",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject ECFieldF2m::getReductionPolynomial()
	{
		return __thiz.callObjectMethod(
			"getReductionPolynomial",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldF2m::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

