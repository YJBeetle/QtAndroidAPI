#include "../../math/BigInteger.hpp"
#include "./ECParameterSpec.hpp"
#include "./ECPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECPrivateKeySpec::ECPrivateKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECPrivateKeySpec::ECPrivateKeySpec(java::math::BigInteger arg0, java::security::spec::ECParameterSpec arg1)
		: __JniBaseClass(
			"java.security.spec.ECPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject ECPrivateKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	QAndroidJniObject ECPrivateKeySpec::getS()
	{
		return callObjectMethod(
			"getS",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

