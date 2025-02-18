#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class EllipticCurve : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EllipticCurve(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EllipticCurve(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, JByteArray arg3);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::math::BigInteger getA() const;
		java::math::BigInteger getB() const;
		JObject getField() const;
		JByteArray getSeed() const;
		jint hashCode() const;
	};
} // namespace java::security::spec

