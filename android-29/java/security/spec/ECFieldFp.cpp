#include "../../math/BigInteger.hpp"
#include "./ECFieldFp.hpp"

namespace java::security::spec
{
	// Fields
	
	ECFieldFp::ECFieldFp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECFieldFp::ECFieldFp(java::math::BigInteger &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldFp",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECFieldFp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldFp::getFieldSize()
	{
		return __thiz.callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	QAndroidJniObject ECFieldFp::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldFp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

