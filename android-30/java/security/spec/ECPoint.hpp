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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECPoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECPoint(QAndroidJniObject obj);
		
		// Constructors
		ECPoint(java::math::BigInteger arg0, java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::math::BigInteger getAffineX() const;
		java::math::BigInteger getAffineY() const;
		jint hashCode() const;
	};
} // namespace java::security::spec

