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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECFieldF2m(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECFieldF2m(QAndroidJniObject obj);
		
		// Constructors
		ECFieldF2m(jint arg0);
		ECFieldF2m(jint arg0, JIntArray arg1);
		ECFieldF2m(jint arg0, java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getFieldSize();
		jint getM();
		JIntArray getMidTermsOfReductionPolynomial();
		java::math::BigInteger getReductionPolynomial();
		jint hashCode();
	};
} // namespace java::security::spec

