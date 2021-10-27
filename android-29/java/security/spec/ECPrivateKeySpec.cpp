#include "../../math/BigInteger.hpp"
#include "./ECParameterSpec.hpp"
#include "./ECPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	ECPrivateKeySpec::ECPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECPrivateKeySpec::ECPrivateKeySpec(java::math::BigInteger &arg0, java::security::spec::ECParameterSpec &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ECPrivateKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	QAndroidJniObject ECPrivateKeySpec::getS()
	{
		return __thiz.callObjectMethod(
			"getS",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

