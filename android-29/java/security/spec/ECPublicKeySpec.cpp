#include "./ECParameterSpec.hpp"
#include "./ECPoint.hpp"
#include "./ECPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	ECPublicKeySpec::ECPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECPublicKeySpec::ECPublicKeySpec(java::security::spec::ECPoint &arg0, java::security::spec::ECParameterSpec &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPublicKeySpec",
			"(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ECPublicKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	QAndroidJniObject ECPublicKeySpec::getW()
	{
		return __thiz.callObjectMethod(
			"getW",
			"()Ljava/security/spec/ECPoint;"
		);
	}
} // namespace java::security::spec

