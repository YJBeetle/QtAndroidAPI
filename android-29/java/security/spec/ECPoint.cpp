#include "../../math/BigInteger.hpp"
#include "./ECPoint.hpp"

namespace java::security::spec
{
	// Fields
	QAndroidJniObject ECPoint::POINT_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.ECPoint",
			"POINT_INFINITY",
			"Ljava/security/spec/ECPoint;"
		);
	}
	
	ECPoint::ECPoint(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECPoint::ECPoint(java::math::BigInteger arg0, java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPoint",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECPoint::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ECPoint::getAffineX()
	{
		return __thiz.callObjectMethod(
			"getAffineX",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject ECPoint::getAffineY()
	{
		return __thiz.callObjectMethod(
			"getAffineY",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECPoint::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

