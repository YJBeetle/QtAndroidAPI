#include "../../math/BigInteger.hpp"
#include "./ECFieldFp.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECFieldFp::ECFieldFp(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECFieldFp::ECFieldFp(java::math::BigInteger arg0)
		: __JniBaseClass(
			"java.security.spec.ECFieldFp",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ECFieldFp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldFp::getFieldSize()
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	java::math::BigInteger ECFieldFp::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldFp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

