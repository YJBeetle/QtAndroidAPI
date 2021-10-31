#include "../../../java/math/BigInteger.hpp"
#include "./DHPublicKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	DHPublicKeySpec::DHPublicKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DHPublicKeySpec::DHPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: __JniBaseClass(
			"javax.crypto.spec.DHPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject DHPublicKeySpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getY()
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

