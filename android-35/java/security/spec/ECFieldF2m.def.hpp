#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JObject;
namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECFieldF2m : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECFieldF2m(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECFieldF2m(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECFieldF2m(jint arg0);
		ECFieldF2m(jint arg0, JIntArray arg1);
		ECFieldF2m(jint arg0, java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getFieldSize() const;
		jint getM() const;
		JIntArray getMidTermsOfReductionPolynomial() const;
		java::math::BigInteger getReductionPolynomial() const;
		jint hashCode() const;
	};
} // namespace java::security::spec

