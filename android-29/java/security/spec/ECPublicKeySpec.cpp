#include "./ECParameterSpec.hpp"
#include "./ECPoint.hpp"
#include "./ECPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECPublicKeySpec::ECPublicKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECPublicKeySpec::ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1)
		: __JniBaseClass(
			"java.security.spec.ECPublicKeySpec",
			"(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject ECPublicKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	QAndroidJniObject ECPublicKeySpec::getW()
	{
		return callObjectMethod(
			"getW",
			"()Ljava/security/spec/ECPoint;"
		);
	}
} // namespace java::security::spec

