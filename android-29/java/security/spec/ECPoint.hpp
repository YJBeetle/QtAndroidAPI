#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECPoint : public JObject
	{
	public:
		// Fields
		static java::security::spec::ECPoint POINT_INFINITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit ECPoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECPoint(QJniObject obj);
		
		// Constructors
		ECPoint(java::math::BigInteger arg0, java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		java::math::BigInteger getAffineX();
		java::math::BigInteger getAffineY();
		jint hashCode();
	};
} // namespace java::security::spec

