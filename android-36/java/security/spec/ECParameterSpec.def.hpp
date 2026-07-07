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
		
		// QJniObject forward
		template<typename ...Ts> explicit ECParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECParameterSpec(java::security::spec::EllipticCurve arg0, java::security::spec::ECPoint arg1, java::math::BigInteger arg2, jint arg3);
		
		// Methods
		jint getCofactor() const;
		java::security::spec::EllipticCurve getCurve() const;
		java::security::spec::ECPoint getGenerator() const;
		java::math::BigInteger getOrder() const;
	};
} // namespace java::security::spec

