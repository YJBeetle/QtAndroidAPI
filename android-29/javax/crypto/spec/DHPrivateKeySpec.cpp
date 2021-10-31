#include "../../../java/math/BigInteger.hpp"
#include "./DHPrivateKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	DHPrivateKeySpec::DHPrivateKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DHPrivateKeySpec::DHPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: __JniBaseClass(
			"javax.crypto.spec.DHPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject DHPrivateKeySpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getX()
	{
		return callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

