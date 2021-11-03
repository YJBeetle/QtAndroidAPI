#include "./ECParameterSpec.hpp"
#include "./ECPoint.hpp"
#include "./ECPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECPublicKeySpec::ECPublicKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECPublicKeySpec::ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1)
		: JObject(
			"java.security.spec.ECPublicKeySpec",
			"(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::security::spec::ECParameterSpec ECPublicKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	java::security::spec::ECPoint ECPublicKeySpec::getW() const
	{
		return callObjectMethod(
			"getW",
			"()Ljava/security/spec/ECPoint;"
		);
	}
} // namespace java::security::spec

