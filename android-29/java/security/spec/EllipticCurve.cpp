#include "../../math/BigInteger.hpp"
#include "./EllipticCurve.hpp"

namespace java::security::spec
{
	// Fields
	
	EllipticCurve::EllipticCurve(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EllipticCurve::EllipticCurve(__JniBaseClass &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	EllipticCurve::EllipticCurve(__JniBaseClass &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2, jbyteArray &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jboolean EllipticCurve::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject EllipticCurve::getA()
	{
		return __thiz.callObjectMethod(
			"getA",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject EllipticCurve::getB()
	{
		return __thiz.callObjectMethod(
			"getB",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject EllipticCurve::getField()
	{
		return __thiz.callObjectMethod(
			"getField",
			"()Ljava/security/spec/ECField;"
		);
	}
	jbyteArray EllipticCurve::getSeed()
	{
		return __thiz.callObjectMethod(
			"getSeed",
			"()[B"
		).object<jbyteArray>();
	}
	jint EllipticCurve::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

