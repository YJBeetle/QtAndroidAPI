#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security::spec
{
	class ECPoint;
}
namespace java::security::spec
{
	class EllipticCurve;
}

namespace java::security::spec
{
	class ECParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		ECParameterSpec(java::security::spec::EllipticCurve arg0, java::security::spec::ECPoint arg1, java::math::BigInteger arg2, jint arg3);
		
		// Methods
		jint getCofactor();
		java::security::spec::EllipticCurve getCurve();
		java::security::spec::ECPoint getGenerator();
		java::math::BigInteger getOrder();
	};
} // namespace java::security::spec

