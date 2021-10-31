#include "../../math/BigInteger.hpp"
#include "./ECPoint.hpp"
#include "./EllipticCurve.hpp"
#include "./ECParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	ECParameterSpec::ECParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECParameterSpec::ECParameterSpec(java::security::spec::EllipticCurve arg0, java::security::spec::ECPoint arg1, java::math::BigInteger arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECParameterSpec",
			"(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jint ECParameterSpec::getCofactor()
	{
		return __thiz.callMethod<jint>(
			"getCofactor",
			"()I"
		);
	}
	QAndroidJniObject ECParameterSpec::getCurve()
	{
		return __thiz.callObjectMethod(
			"getCurve",
			"()Ljava/security/spec/EllipticCurve;"
		);
	}
	QAndroidJniObject ECParameterSpec::getGenerator()
	{
		return __thiz.callObjectMethod(
			"getGenerator",
			"()Ljava/security/spec/ECPoint;"
		);
	}
	QAndroidJniObject ECParameterSpec::getOrder()
	{
		return __thiz.callObjectMethod(
			"getOrder",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

